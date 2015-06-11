

#include <iostream>
#include "MyTime.h"
#include "OutOfRangeException.h"
using namespace std;

int main()
{
    int hour;
    int minute;
    int second;
    MyTime t1;

    while (cout << "enter the time (hh:mm:ss):"){
        cin>>hour>>minute>>second;
        try{
          t1.setTime(hour, minute, second);
            break;
        }
        catch(OutOfRangeException &OutOfRangeException){
                cout << "Exception Occurred: " << OutOfRangeException.what() << endl << endl;
        }
    }
    t1.nextMinute();
    cout << "Next minute: " << t1.toString() << endl;

     t1.nextSecond();
    cout << "Next second: " << t1.toString()<< endl;

     t1.nextHour();
    cout << "Next hour: " << t1.toString()<< endl;


     t1.previousMinute();
    cout << "Previous minute: " << t1.toString()<< endl;

     t1.previousSecond();
    cout << "Previous Second: " << t1.toString()<< endl;

     t1.previousHour();
    cout << "Previous hour: " << t1.toString()<< endl;
}
