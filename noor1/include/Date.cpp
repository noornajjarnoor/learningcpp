#include <iostream>
class Date{
    private:
    int m_day;
    int m_month;
    int m_year;
    public:
    Date(int day , int month, int year);
    int copy(int & );
    day.copy(Date::day);
    void setday(int day){
        if(m_day =0){
            exit(EXIT_FAILURE);
             
        }
        else if(m_day >30){
            exit(EXIT_FAILURE);
        }
        else{
            m_day=day;
        }
    } 
    int setmonth(){
        if( m_month =0  ){
            exit(EXIT_FAILURE);
        }
        else if(m_month>12){
            exit(EXIT_FAILURE);
        }
        else if(m_month<0){
            exit(EXIT_FAILURE);
        }
        
    }  
    void setyear(){//set year
        if( m_year < 2021){
            exit(EXIT_FAILURE);
        }
        else{
            exit(EXIT_FAILURE);
        }
    }
};