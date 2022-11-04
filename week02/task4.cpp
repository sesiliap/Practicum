#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Number is ";
    cin >> number;

    int first = number / 100;
    int second = number / 10 % 10;
    int third = number % 10;

    cout << "Reverse number is " << third << second << first << endl;
    return 0;
}