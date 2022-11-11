#include<iostream>
using namespace std;

int main () {
    char symbol; 
    cout << "Enter value: ";
    cin >> symbol;
    
    if ((symbol >= 'a' &&  symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z')) {
        cout << "Symbol is part of the alphabet." << endl;
    }
    else {
        cout << "Symbol is not part of the alphabet." << endl;
    }
    
    return 0;
}