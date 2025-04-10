#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include "../model/affine.h"
#include "../model/object.h"

namespace pav {

class ObjectController final {

 public:
  int InitializeObject(const std::string& filename) {
    return object_.InitializeObject(filename);
  };
  double GetMaxVertex() noexcept { return object_.GetMaxVertex(); };
  std::vector<Vector3> GetVertices() noexcept { return object_.GetVertices(); };
  std::vector<std::pair<unsigned, unsigned>> GetEdges() noexcept {
    return object_.GetEdges();
  };

 public:
  void MoveByX(const double& value) {
    AffineTransformation<MoveX> transformation;
    transformation.Transform(object_.GetVertices(), value);
  };
  void MoveByY(const double& value) {
    AffineTransformation<MoveY> transformation;
    transformation.Transform(object_.GetVertices(), value);
  };
  void MoveByZ(const double& value) {
    AffineTransformation<MoveZ> transformation;
    transformation.Transform(object_.GetVertices(), value);
  };
  void RotateByX(const double& value) {
    AffineTransformation<RotateX> transformation;
    transformation.Transform(object_.GetVertices(), value);
  };
  void RotateByY(const double& value) {
    AffineTransformation<RotateY> transformation;
    transformation.Transform(object_.GetVertices(), value);
  };
  void RotateByZ(const double& value) {
    AffineTransformation<RotateZ> transformation;
    transformation.Transform(object_.GetVertices(), value);
  };
  void Scale(const double& value) {
    AffineTransformation<pav::Scale> transformation;
    transformation.Transform(object_.GetVertices(), value);
  };

 private:
  Object3D object_;
};

}  // namespace pav

#endif  // _CONTROLLER_H_