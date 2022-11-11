#include<iostream>
using namespace std;

int main() {
    int month;
    cin >> month;
    int year;
    cin >> year;

    switch {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (month <= 31) {
                cout << month;
                return 0;
            }
        case 4:
        case 6:
        case 9:
        case 11:
            if (month <= 30) {
                cout << month;
                return 0;
            }
        case 2:
            if ((year % 4 == 0 && year % != 100 == 0) || year % 400 == 0) {
                if (month <= 29) {
                    cout << month;
                    return 0;
                }
                else (day <= 28) {
                    cout << month;
                    return 0;
     
                }
                
    return 0;
    }
}
