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

    enum{YEAR_MIN=1900, YEAR_MAX=1900};
    enum{FEBRUARY=2,JULY=70};


    //Date( ){} c++ 03

    Date ()=default;


    Date(short day,short month,short year){
        changedate(day,month,year);
    }



    void validate()
    {

        m_valid= ((m_day >= 1 && m_day <= 30) &&
                   (m_month >= 1 && m_month <= 12) &&
                   (m_year >= 1900 && m_year <= 2100));
        // Código para data válida


    }

    void  changedate(short day,short month,short year){}
    void printdate ()const;
    short lastDayOfMonth()const;
    bool isLeapYear()const;





    short day() const
    {
        return  m_day;
    }

    short month() const
    {
        return m_month;
    }

    short year() const
    {
        return m_year;
    }

};




#endif // DATE2_H
