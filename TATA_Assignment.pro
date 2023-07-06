QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc

DISTFILES += \
    Imgs_Songs/cloudy-day.png \
    Imgs_Songs/compass (2).png \
    Imgs_Songs/google-photos.png \
    Imgs_Songs/menu.png \
    Imgs_Songs/music.png \
    Imgs_Songs/musical-note.png \
    Imgs_Songs/phone-call.png \
    Imgs_Songs/steering-wheel.png
