#include "mainwindow.h"
#include "dialog.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>
#include <QTranslator>
#include <QLibraryInfo>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator qtTranslator;
           qtTranslator.load("qt_" + QLocale::system().name(),
                   QLibraryInfo::location(QLibraryInfo::TranslationsPath));
           a.installTranslator(&qtTranslator);
           QTranslator myappTranslator;
           QString nomFichier="requete_" + QLocale::system().name()+".qm";
           qDebug()<<nomFichier;
           QString baseName;
   //defining paths to translations
   #ifdef Q_OS_LINUX
           baseName="/usr/share/applications/requete/translations/";
   #endif
   #ifdef Q_OS_MACOS
           baseName=QApplication::applicationDirPath()+QLatin1String("/../Resources/translations/"); // path defaults to app dir.
   #endif
   #ifdef Q_OS_DARWIN
           baseName=QApplication::applicationDirPath()+QLatin1String("/translations/"); // path defaults to app dir.
   #endif
   #ifdef Q_OS_WIN
           baseName=QApplication::applicationDirPath();
   #endif
          myappTranslator.load(baseName+nomFichier);
           //myappTranslator.load("/usr/share/applications/requete/translations/requete_" + QLocale::system().name()+".qm");
           a.installTranslator(&myappTranslator);
           qDebug()<<QLibraryInfo::location(QLibraryInfo::TranslationsPath);

    QSqlDatabase maBase= QSqlDatabase::addDatabase("QMYSQL");
    Dialog monDialog;
    if (monDialog.exec()==QDialog::Accepted)
    {
        qDebug()<<"la base est ouverte";
        MainWindow w;
        w.show();

        return a.exec();
    }

    else
    {
        return -1;
    }
}

