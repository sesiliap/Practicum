#include<iostream>
using namespace std;

int main() {
    int counter = 0;
    
    for (int i = 100; i <= 1000; i++) {
        int first = i / 100;
        int second = i / 10 % 10;
        int third = i % 10;
        
        int product = first;
        product = second != 0 ? product * second : product;
        product = third != 0 ? product * third : product;
        
        if (i % product == 0) {
            cout << i << " ";
            counter++;
        }
    }
    
    cout << endl;
    return 0;
    
}