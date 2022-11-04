#include <iostream>
using namespace std;

int main() {
    int seconds;
    cout << "Number: ";
    cin >> seconds;

    int days = seconds / 86400;
    int hours = (seconds % 86400) / 3600;
    int minutes = (seconds % 86400 % 3600) / 60;
    seconds = seconds % 86400 % 3600 % 60;

    cout << "That is " << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds" << endl;
    return 0;
}