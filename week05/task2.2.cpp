#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    char star = '*';
    
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j <= n; j++) {
            cout << star;
        }
        cout << endl;   
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 2; j <= n - i; j++) {
            cout << star;
        }
        cout << endl;  
    }
    
    return 0;
}