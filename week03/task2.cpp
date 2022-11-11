#include<iostream>
using namespace std;

int main () {
    int x; 
    cout << "Enter value: ";
    cin >> x;
    
    if (x <= 12) {
        cout << "There is existent month under that number." << endl;
    }
    else {
        cout << "There is no such month existent." << endl;
    }
    
    return 0;
}