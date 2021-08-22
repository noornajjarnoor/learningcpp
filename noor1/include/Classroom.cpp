#include <iostream>
#include "Student.h"
class Classroom{
    private:
    Student arr2[5];
    int n=0;
    int arrsize=5;
    int arr10[arrsize];
     int a=0;
    public:
    Classroom(int id ,int arr11[5],int gradesize);
    Student ga;
    int GetClassAvg(){
        for(int i=0;i<5;i++){
            a= a +ga.getavg();
         }
        a=a/5;
        return a;
    }  
    
};