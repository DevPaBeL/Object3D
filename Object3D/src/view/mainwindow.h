#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "../controller/controller.h"

#include "../libraries/qgifimage/gifimage/qgifimage.h"

#include <QColorDialog>
#include <QFileDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QSettings>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget* parent = nullptr);
  ~MainWindow();

 private slots:
  void on_edgeColorQPushButton_clicked();
  void on_vertexColorQPushButton_clicked();
  void on_backgroundColorQPushButton_clicked();
  void on_selectFileQPushButton_clicked();
  void on_noneVertexQRadioButton_clicked();
  void on_circleVertexQRadioButton_clicked();
  void on_squareVertexQRadioButton_clicked();
  void on_solidQRadioButton_clicked();
  void on_dashedQRadioButton_clicked();
  void on_perspectiveQRadioButton_clicked();
  void on_orthographicQRadioButton_clicked();
  void on_vertexSizeQSlider_valueChanged(int value);
  void on_thicknessQSlider_valueChanged(int value);
  void on_xTranslateQSlider_valueChanged(int value);
  void on_yTranslateQSlider_valueChanged(int value);
  void on_zTranslateQSlider_valueChanged(int value);
  void on_xRotateQSlider_valueChanged(int value);
  void on_yRotateQSlider_valueChanged(int value);
  void on_zRotateQSlider_valueChanged(int value);
  void on_scaleQSlider_valueChanged(int value);

 private:
  void resetSliders();
  void saveSettings();
  void loadSetting();
  void loadVertexColor(const QSettings& settings);
  void loadEdgeColor(const QSettings& settings);
  void loadSizeAndThickness(const QSettings& settings);
  void loadProjectionType(const QSettings& settings);
  void loadEdgesType(const QSettings& settings);
  void loadVertexDisplayType(const QSettings& settings);

 private:
  Ui::MainWindow* ui;
};
#endif  // MAINWINDOW_H
