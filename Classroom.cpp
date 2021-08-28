#pragma once
#include <iostream>
#include "..\include\Student.h"
class Classroom{
    private:
    Student arr[5];
    int n=0;
    //int arrsize=5;
    //int arr10[5];
    int a=0;
    public:
    Classroom(int id ,Student arr11[5] ,int gradesize){
        for(int i=0;i<5;i++){
            arr[i]=arr11[i];
        }
    }
    //int j;
    int GetClassAvg(){
        for(int i=0;i<5;i++){
           a=a+ arr[i].getavg() +arr[i++].getavg();
           //arr[i]=ga.getavg()
         }
        a=a/5;
        return a;
    }  
    
};