#include<iostream>
using namespace std;

int main () {
    double v; 
    cout << "Enter first value: ";
    cin >> v;
    
    double w; 
    cout << "Enter second value: ";
    cin >> w;
    
    if (v > 0 && w < 0) {
        cout << "1) is possitive" << endl;
    }
    else if (v < 0 && w > 0) {
        cout << "2) is possitive" << endl;
    }
    else if (v > 0 && w > 0) {
        cout << "Both numbers are possitive" << endl;
    }
    else if (v < 0 && w < 0) {
        cout << "Neither of the numbers are possitive" << endl;
    }
    
    return 0;
}