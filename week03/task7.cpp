#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    int m;
    cout << "Enter m: ";
    cin >> m;
    
    int k;
    cout << "Enter k: ";
    cin >> k;
    
    if (k <= (n * m) && k % m == 0 && k > 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
    return 0;
}