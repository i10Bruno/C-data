#ifndef DATE2_H
#define DATE2_H

#include <stdio.h>


class Date{
private:
    short m_day;
    short m_month;
    short m_year;
    bool m_valid {false};
public:
    //Date( ){} c++ 03

    Date ()=default;


    Date(short day,short month,short year){}

    void  changedate(short day,short month,short year){}

    void printdate()const {}


};




#endif // DATE2_H
