#include "date2.h"

   //Date::Date ()=default;


  Date::Date(short day,short month,short year){
        changedate(day,month,year);
    }

  void Date:: changedate(short day,short month,short year){

        m_day=day;
        m_month=month;
        m_year=year;


        if ((m_day >= 1 && m_day <= 30) &&
            (m_month >= 1 && m_month <= 12) &&
            (m_year >= 1900 && m_year <= 2100)) {
            // Código para data válida


            m_valid=true;
        }
        else{
            m_valid=false;
        }


    }

    void Date:: printdate()const {

        if(m_valid){

            printf("%02d/%02d/%04d\n", m_day, m_month, m_year);
        }
        else{
            printf("invalid date");
        }

    }


};

