
using namespace std;

class MyTime{
    private:
        int hour;
        int minute;
        int second;

    public:

        MyTime(int hour, int minute, int second);
        int getMinute();
        void setTime(int hour, int minute, int second);
        int getHour();
        MyTime();
        int getSecond();

        void setHour(int hour);
        void setSecond(int second);
        void setMinute(int minute);

        MyTime nextHour();
        MyTime nextMinute();
        MyTime nextSecond();

        MyTime previousHour();
        MyTime previousSecond();
        MyTime previousMinute();
         string toString();
};

