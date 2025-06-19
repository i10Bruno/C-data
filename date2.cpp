#include "date2.h"

   //Date::Date ()=default;




  void Date:: changedate(short day,short month,short year){

        m_day=day;
        m_month=month;
        m_year=year;
        validate();


    }

    void Date:: printdate()const {

        if(m_valid){

            printf("%02d/%02d/%04d\n", m_day, m_month, m_year);
        }
        else{
            printf("invalid date");
        }

    }

    short Date::lastDayOfMonth() const
    {
        return 31;
    }

    bool Date::isLeapYear(Date dt) const
    {
        return ((dt%400==0)||(dt%4==0)&& !(dt%100==0));
    }




}



