#include "DTForm.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    DTForm* form = new DTForm;
    form->show();
    return app.exec();
}
