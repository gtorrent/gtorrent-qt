#include <QApplication>
#include <QtGui>
#include <QLabel>

int main(int argc, char **argv)
{
        QApplication app(argc, argv);
        QMainWindow lel;

        QTreeWidget *test_tree = new QTreeWidget();
        test_tree->setColumnCount(5);
        QTreeWidgetItem * item = new QTreeWidgetItem(test_tree);
        item->setText(0, "What am I doing");
        test_tree->addTopLevelItem(item);
        lel.setCentralWidget(test_tree);

        lel.show();
        return app.exec();
}

