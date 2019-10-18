TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        figurageometrica.cpp \
        main.cpp \
        putvoxel.cpp \
        sculptor.cpp \
    cutvoxel.cpp \
    putbox.cpp \
    cutbox.cpp \
    putsphere.cpp \
    cutsphere.cpp \
    putellipsoid.cpp \
    cutellipsoid.cpp

HEADERS += \
    Voxel.h \
    figurageometrica.h \
    putvoxel.h \
    sculptor.h \
    cutvoxel.h \
    putbox.h \
    cutbox.h \
    putsphere.h \
    cutsphere.h \
    putellipsoid.h \
    cutellipsoid.h
