#include <pprint.hh>

PPrint::PPrint() {
    startPageNum=0;
    endPageNum=0;
    totalPageNum=0;//initiate all private members

}

void PPrint::PProcess(){
    QPrinter printer(QPrinter::HighResolution);
    QPrintDialog dialog(&printer);
    dialog.setWindowTitle("Print Document");
    if(isReverse){//if you wanna print from end to begin
        if(dialog.exec()==QDialog::Accepted){
            printer.setOutputFormat(QPrinter::NativeFormat);
           // printer.setOutputFileName("print.pdf");
            QPainter painter;
            painter.begin(&printer);
            for(int PageNum=endPageNum;PageNum>=startPageNum;PageNum--){
                painter.drawText(1000, 1000, "LET's FUJI CO.LTD 6666 哈哈哈哈");//Just test code in case other team fuck up
                if(PageNum!=startPageNum)
                    printer.newPage();
            }
            painter.end();
        }
    else{
          if(dialog.exec()==QDialog::Accepted){
              printer.setOutputFormat(QPrinter::NativeFormat);
             // printer.setOutputFileName("print.pdf");
              QPainter painter;
              painter.begin(&printer);
              for(int PageNum=0;PageNum<=2;PageNum++){
                  painter.drawText(1000, 1000, "LET's FUJI CO.LTD 6666 哈哈哈哈");//Just test code in case other team fuck up
                  if(PageNum!=endPageNum)
                      printer.newPage();
              }
              painter.end();
            }
        }
    }
    if(dialog.exec()==QDialog::Accepted){
        printer.setOutputFormat(QPrinter::NativeFormat);
       // printer.setOutputFileName("print.pdf");
        QPainter painter;
        painter.begin(&printer);
        for(int PageNum=startPageNum;PageNum<endPageNum;++PageNum){
            painter.drawText(1000, 1000, "LET's FUJI CO.LTD 6666 哈哈哈哈");//Just test code in case other team fuck up
            if(PageNum!=endPageNum)
                printer.newPage();
        }
        painter.end();
    }
}

void PPrint::setEndPageNum(int num){
    endPageNum=num;
}

void PPrint::setStartPageNum(int num){
    startPageNum=num;
}

void PPrint::setTotalPageNum(int num){
    totalPageNum=num;
}

void PPrint::setIsOdd(int num){
    isOdd=num;
}

void PPrint::setIsReverse(bool num){
    isReverse=num;
}
