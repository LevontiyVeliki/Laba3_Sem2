#include <iostream>
#include "Borders.h"
#include "Time.h"
using namespace std;

int main()
{
    int task_num;
    cin >> task_num;
    switch (task_num){
    case 1:
        double left, right;
        Borders borders;
        cout << "Left border is: ";
        cin >> left;
        cout << "Right border is: ";
        cin >> right;
        borders.set_left_border(left);
        borders.set_right_border(right);
        cout << "Long is: ";
        borders.get_long(left, right);
        break;
    case 2:
        int hour, minutes, seconds;
        Time time;
        cout << "Hour is: ";
        cin >> hour;
        cout << "Minutes is: ";
        cin >> minutes;
        cout << "Second is: ";
        cin >> seconds;
        time.minus_10(minutes, hour, seconds);
        time.get_minutes(minutes, hour);
        break;
    }
    
}

