#include<iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int year = number / 10000;
    cout << year;
    int month = number / 10000 % 10;
    cout << month;
    int day = number % 1000000;
    cout << day;
    
    switch {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day <= 31) {
                cout << "Valid date";
                return 0;
            }
        case 4:
        case 6:
        case 9:
        case 11:
            if (day <= 30) {
                cout << "Valid date";
                return 0;
            }
        case 2:
            if ((year % 4 == 0 && year % != 100 == 0) || year % 400 == 0) {
                if ( day <= 29) {
                    cout << "Valid date";
                    return 0;
                }
                else (day <= 28) {
                    cout << "Valid date";
                    return 0;
                }
            }
        default: cout "Invalid date";
    }

    return 0;
}
