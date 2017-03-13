#-------------------------------------------------
#
# Project created by QtCreator 2017-03-01T09:25:05
#
#-------------------------------------------------

QT  += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = requete
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    about.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    about.h

FORMS    += mainwindow.ui \
    dialog.ui \
    about.ui

TRANSLATIONS += requete_fr_FR.ts\
                requete_us.ts\
                requete_es.ts\
                requete_it.ts

