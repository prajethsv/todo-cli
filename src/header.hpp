#include <iostream>
#include <string.h>

using namespace std;

class TaskInfo {

    private:
    
    string task;
    int day;
    int month;
    int year;

    int hour;
    int minute;
    
    public: 

    TaskInfo(){

        task = "";
        day = 0;
        month = 0;
        year = 0;

        hour = 0;
        minute = 0;

    }

    TaskInfo(string t, int d, int m, int y, int h, int mi){

        task = t;
        day = d;
        month = m;

        year = y;
        hour = h;

    }

    string getTask(){
        return task;
    }

    int getDay(){
        return day;
    }

    int getMonth(){
        return month;
    }

    int getYear(){
        return year;
    }

    int getHour(){
        return hour;
    }

};