#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
/*
  Deux solutions pour écrire du texte dans la console d'une appliaction Qt Console.
  Attention QDebug n'existe qu'en configuration debug, donc ce code ne compile
  que dans cette configuration.
  Le texte écrit apparait dans le terminal.

 */


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "qDebug : Hello Qt World";

    QTextStream out(stdout);
    out << "QTextStream : Hellow Qt World !" << endl;

    return a.exec();
}
