/*This is the main process class, It can procss and distribute different objects
 * Author: @Zejian Zhou(Github:JayZejianZhou) @Fan Yang(Github:fyang14)
 * Edited at 11/10,2016
 */




#ifndef PPRINT_HH
#define PPRINT_HH

#include <QPainter>
#include <QPrintDialog>
#include <QPrinter>

class PPrint
{
private:
    int totalPageNum;
    int startPageNum;
    int endPageNum;
    bool isReverse;
    int isOdd;


public:
    PPrint();
    void PProcess();//process the print
    void setTotalPageNum(int num);
    void setStartPageNum(int num);
    void setEndPageNum(int num);
    void setIsReverse(bool num);
    void setIsOdd(int num);

};

#endif // PPRINT_HH
