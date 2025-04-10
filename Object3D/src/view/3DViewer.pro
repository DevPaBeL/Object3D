QT       += core gui opengl openglwidgets widgets

include(../libraries/qgifimage/gifimage/qtgifimage.pri)

CONFIG += c++17

SOURCES += \
    ../model/affine.cc \
    ../model/object.cc \
    main.cc \
    customopenglwidget.cc \
    mainwindow.cc

HEADERS += \
    ../controller/controller.h \
    ../model/affine.h \
    ../model/object.h \
    customopenglwidget.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
