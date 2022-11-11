#include<iostream>
using namespace std;

int main () {
    int x; 
    cout << "Enter first value: ";
    cin >> x;
    
    int y;
    cout << "Enter second value: ";
    cin >> y;
    
    if (x > y) {
        cout << x;
    }
    else {
        cout << y;
    }
    
    return 0;
}
