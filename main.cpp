#include "dialog.h"
#include <QApplication>
#include <QPainter>
#include <QPrintDialog>
#include <QtPrintSupport/QPrintDialog>
#include <QPrinter>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    QPrinter printer(QPrinter::HighResolution);
    QPrintDialog dialog(&printer);
    dialog.setWindowTitle("Print Document");
    if(dialog.exec()==QDialog::Accepted){
        printer.setOutputFormat(QPrinter::NativeFormat);
       // printer.setOutputFileName("print.pdf");
        QPainter painter;
        painter.begin(&printer);


        for(int page=0;page<4;++page){
            painter.drawText(1000, 1000, "LET's FUck FUJI CO. 6666 哈哈哈哈");
            if(page!=4)
                printer.newPage();
        }
        painter.end();
    }    w.show();

    return a.exec();
}
