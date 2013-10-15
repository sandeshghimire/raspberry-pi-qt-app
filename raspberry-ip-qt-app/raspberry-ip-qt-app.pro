#-------------------------------------------------
#
# Project created by QtCreator 2013-09-26T15:42:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = raspberry-ip-qt-app
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    rsp_socket.cpp \
    rsp_database.cpp

HEADERS  += mainwindow.h \
    rsp_socket.h \
    rsp_database.h
