#include <iostream>
#include "Date.h"
class Student{
    private:
    int m_id;
    std::string m_name;
    int m_arr[3];
   
    public:
    int arr_size;
    int arr[arr_size];
    Student(int id ,std::string name ,Date n, int arrcon[], int arr_size);
    void copy(int &);
    Student::m_id.copy(id);
    Student::m_name.copy(name);
    copy(){
        for(int i=0;i<3;i++){
            m_arr[i]=arrcon[i];
        }
    }
     int j=0;
    double getavg(){
         for(int i=0;i<3;i++){
             j=j+arrcon[i]+arrcon[i++];
         }
        return j/3;
    }
    int print(){
        std::cout << getavg();
    }

};
