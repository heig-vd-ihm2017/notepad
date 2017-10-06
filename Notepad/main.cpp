#include "notepad.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication editorApp(argc, argv);
    Notepad editor;
    editor.show();

    return editorApp.exec();
}
