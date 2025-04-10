#ifndef AFFINE_H_
#define AFFINE_H_

#include "object.h"

namespace pav {

class ITransform {
 public:
  virtual void Calculate(std::vector<Vector3>& vertices,
                         const double& value) = 0;
  virtual ~ITransform() = default;
};

class Move : public ITransform {};

class Rotate : public ITransform {};

class Scale : public ITransform {
 public:
  void Calculate(std::vector<Vector3>& vertices, const double& value) override;
};

class MoveX : public Move {
 public:
  void Calculate(std::vector<Vector3>& vertices, const double& value) override;
};

class MoveY : public Move {
 public:
  void Calculate(std::vector<Vector3>& vertices, const double& value) override;
};

class MoveZ : public Move {
 public:
  void Calculate(std::vector<Vector3>& vertices, const double& value) override;
};

class RotateX : public Rotate {
 public:
  void Calculate(std::vector<Vector3>& vertices, const double& value) override;
};

class RotateY : public Rotate {
 public:
  void Calculate(std::vector<Vector3>& vertices, const double& value) override;
};

class RotateZ : public Rotate {
 public:
  void Calculate(std::vector<Vector3>& vertices, const double& value) override;
};

template <class Transformation>
class AffineTransformation {
  static_assert(std::is_base_of<ITransform, Transformation>::value,
                "Transformation must be inherited from ITransform");

 public:
  void Transform(std::vector<Vector3>& vertices, const double& value) {
    Transformation transform;
    transform.Calculate(vertices, value);
  }
};

}  // namespace pav

#endif  //AFFINE_H_