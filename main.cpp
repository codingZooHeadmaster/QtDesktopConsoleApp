#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <QtGlobal>
/*
  Deux solutions pour écrire du texte dans la console d'une appliaction Qt Console.
  Attention qDebug n'existe qu'en configuration debug, donc ce code ne compile
  que dans cette configuration.
  Le texte écrit apparait dans le terminal.

 */


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "qDebug : Hello Qt World";

    QTextStream out(stdout);
    out << "QTextStream : Hellow Qt World !" << endl;
    Q_ASSERT(argc > 1);

    return a.exec();
}


/*
qInfo is qt5.5+ only.
qInfo() << "C++ Style Info Message";
qInfo( "C Style Info Message" );

qDebug() << "C++ Style Debug Message";
qDebug( "C Style Debug Message" );

qWarning() << "C++ Style Warning Message";
qWarning( "C Style Warning Message" );

qCritical() << "C++ Style Critical Error Message";
qCritical( "C Style Critical Error Message" );

// qFatal does not have a C++ style method.
qFatal( "C Style Fatal Error Message" );
Though as pointed out in the comments, bear in mind qDebug messages are removed if QT_NO_DEBUG_OUTPUT is defined

If you need stdout you could try something like this (as Kyle Strand has pointed out):

QTextStream& qStdOut()
{
    static QTextStream ts( stdout );
    return ts;
}
You could then call as follows:

qStdOut() << "std out!";
*/
