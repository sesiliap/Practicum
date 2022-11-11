#include<iostream>
using namespace spd;

int main() {
    int number;
    cin >> number;
    
    if (number < 0 && number > 9) {
        return 0;
    }

    switch {
        case 0:
        case 6:
        case 9: cout << 1 << "Circles"<< endl;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 7: cout << 0 << "No circles" << endl;
        break;
        case 8: cout << 2 << "Circles" << endl;
        break;
        default;

    }
}
