TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        application.cpp \
        babuk.cpp \
        gamedraw.cpp \
        gamerules.cpp \
        main.cpp \
        graphics/graphics.cpp \
        statictext.cpp \
        widgets.cpp


INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/./ -llibSDL2.dll
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/./ -llibSDL2.dll
else:unix: LIBS += -L$$PWD/./ -llibSDL2.dll

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/./ -llibSDL2_ttf.dll
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/./ -llibSDL2_ttf.dll
else:unix: LIBS += -L$$PWD/./ -llibSDL2_ttf.dll


INCLUDEPATH += $$PWD/SDL2
DEPENDPATH += $$PWD/SDL2

HEADERS += \
    ../../../../../../Desktop/laptop mappa/widget/peldawidgetekre/statictext.hpp \
    ../../../../../../Desktop/laptop mappa/widget/peldawidgetekre/statictext.hpp \
    application.hpp \
    babuk.hpp \
    gamedraw.hpp \
    gamerules.hpp \
    statictext.hpp \
    widgets.hpp
