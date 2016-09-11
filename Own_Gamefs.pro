#-------------------------------------------------
#
# Project created by QtCreator 2016-09-11T20:38:04
#
#-------------------------------------------------

QT       -= core gui

TARGET = Own_Gamefs
TEMPLATE = lib

DEFINES += OWN_GAMEFS_LIBRARY

SOURCES += \
    MountedPath.cpp \
    FsSystem.cpp \
    FileHandle.cpp

HEADERS += \
    MountedPath.hpp \
    FsSystem.hpp \
    MacroFunctions.hpp \
    FileHandle.hpp

unix {
    target.path = /usr/lib
    INSTALLS += target
}
