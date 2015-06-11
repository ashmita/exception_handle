#include <iostream>
#include <sstream>
#include "MyTime.h"
#include "OutOfRangeException.h"
using namespace std;


MyTime::MyTime(int hour, int minute, int second)
    {
    setTime(hour, minute, second);
}

MyTime::MyTime(){
}

void MyTime::setTime(int hour, int minute, int second)
{
    setHour(hour);
    setMinute(minute);
    setSecond(second);
}

int MyTime::getSecond()
    {
    return second;
    }

int MyTime::getHour()
{
    return hour;
}

int MyTime::getMinute()
{
    return minute;
}

void MyTime::setSecond(int second)
{
    if (second <= 59 && second >= 0){
        this->second = second;
    }else{
        throw OutOfRangeException("Second out of range");
    }
}

void MyTime::setHour(int hour)
{
        if (hour <= 23 && hour >= 0){
            this->hour = hour;
    }else{
        throw OutOfRangeException("Hour out of range");

    }
}

void MyTime::setMinute(int minute)
{
        if (minute <= 59 && minute >= 0){
        this->minute = minute;
    }else{
        throw OutOfRangeException("Minute out of range");
    }
}



string MyTime::toString()
{
    stringstream hour, minute, second;
    hour << getHour();
    minute << getMinute();
    second << getSecond();
    return "Time is: " + hour.str() + "hr " + minute.str() + "min " + second.str() + "sec.";
}
 MyTime MyTime::nextHour()
    {
    if (++hour==24){
            setHour(0);
        }else{
        setHour(hour++);
            }
    return MyTime();
    }

    MyTime MyTime::nextSecond()
    {
        if (++second==60){
        setSecond(0);
            minute++;
            if (minute==60){
                setMinute(0);
                hour++;
        }
            if (hour==24){
            setHour(0);
        }
    }else{
        setSecond(second++);
        }
    return MyTime();
}

    MyTime MyTime::nextMinute()
    {
    if (++minute==60){
        setMinute(0);
            hour++;
            if (hour==24){
            setHour(0);
            }
    }else{
    setMinute(minute++);
    }
    return MyTime();
}

      MyTime MyTime::previousHour()
    {
    if (--hour==-1){
        setHour(23);
        }else{
    setHour(hour--);
        }
    return MyTime();
    }

    MyTime MyTime::previousSecond()
    {
    if(--second==-1){
        second=59;
        --minute;
        if(minute==-1){
            minute=59;
            --hour;
        if(hour==-1){
            hour=23;
        }
    }
    }
    else{
        setSecond(second--);
    }
    return MyTime();
    }

    MyTime MyTime::previousMinute()
    {
            if (--minute==-1){
            setMinute(59);
            hour--;
            if (hour==-1){
                setHour(23);
            }
    }else{
        setMinute(minute--);
    }
    return MyTime();
}



