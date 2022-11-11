#include<iostream>
using namespace std;

int main () {
    int x; 
    cout << "Enter first value: ";
    cin >> x;
    
    int a;
    int b;
    cin >> a >> b;
    b > a;
    
    if (x > a && x < b) {
        cout << "x belongs to the interval" << endl;
    }
    else if (x < a || x > b) {
        cout << "x does not belong to the interval" << endl;
    }
    
    return 0;
}