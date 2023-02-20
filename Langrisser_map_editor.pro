QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    langclassdat.cpp \
    langmapfilehf.cpp \
    langrisser.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Langrisser_Enum.h \
    langclassdat.h \
    langmapfilehf.h \
    langrisser.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    Langrisser_map_editor_ko_KR.ts

# QTPLUGIN += qpcx
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
