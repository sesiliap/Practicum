#include<iostream>
using namespace std;

int main() {
    int counter = 0;
    int sum = 0;
    
    for (int i = 100; i <= 1000; i++) {
        int first = i / 100;
        int second = i / 10 % 10;
        int third = i % 10;
        
        if (first != second && first != third && second != third) {
            cout << i << " ";
            counter++;
        }
        
        sum = counter;
    }
    
    cout << "\n" << sum;
    cout << endl;
    return 0;
    
}