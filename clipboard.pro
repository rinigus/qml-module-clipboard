TEMPLATE = lib
CONFIG += qt plugin
QT += qml quick gui

TARGET = qmlclipboardplugin

SOURCES += \
    src/clipboard.cpp \
    src/plugin.cpp
HEADERS += \
    src/clipboard.h \
    src/plugin.h

target.path=$$[QT_INSTALL_QML]/Clipboard
INSTALLS += target

qmldirtarget.path=$$[QT_INSTALL_QML]/Clipboard
qmldirtarget.files=src/qmldir
INSTALLS += qmldirtarget
