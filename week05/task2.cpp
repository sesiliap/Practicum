#include<iostream>
#include<string>
using namespace std;

 
int main () {
    int m;
    int n;
    cin >> m;
    cin >> n;
  
    char name = '*';
  
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
             cout << name;
        } 
        cout << endl;
    } 
 
    return 0;
}