#include<iostream>
using namespace std;

int main() {
    int n;
    int k = 1;
    cout << "Enter n: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        k *= i;
    }
    
    cout << k << endl;
}