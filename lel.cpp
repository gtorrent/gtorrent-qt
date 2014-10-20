#include <QApplication>
#include <QLabel>

int main(int argc, char **argv)
{
        QApplication app(argc, argv);

        QLabel hello("mfw this is all it takes to start a qt application.");
        hello.show();

        return app.exec();
}

