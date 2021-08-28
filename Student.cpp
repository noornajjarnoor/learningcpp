#pragma once
#include <iostream>
#include "..\include\Date.h"
class Student{
    private:
    int m_id;
    std::string m_name;
    int m_arr[3];
    static const int arr_size=3;
    int arr[arr_size];
    public:
    Student(int id ,std::string name ,Date n, int arrcon[arr_size], int arr_size){
        for(int i=0;i<3;i++){
            m_arr[i]=arrcon[i];
        }
        m_id=id;
        m_name=name;
    }
    Student()=default;
    void copy(){
        for(int i=0;i<3;i++){
            m_arr[i]=arr[i];
        }
    }
     int j=0;
    double getavg(){
         for(int i=0;i<3;i++){
             j=j+arr[i]+arr[i++];
         }
        return j/3;
    }
    void Print(){
        std::cout << getavg();
    }

};
