#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a, b, c;
    double x1, x2, D;
    bool isEven = b % 2 == 0;
    bool flag;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if (a == 0) {
        if (b == 0) {
            cout << "Solution: " << c << endl;
        }
        else {
            cout << "Solution: " << ((-1) * c) / b << endl;
        }
    }
    else if (b == 0) {
        if (a == 0) {
            cout << "Solution: " << c << endl;
        }
        else {
            cout << "There are no real solutions." << endl;
        }
    }
    else {
        D = (flag ? pow((b / 2), 2) - (a * c) : pow(b, 2) - (4 * a * c));
        
        if (D < 0) {
            cout << "There are no real solutions" << endl;
        }
        else {
            x1 = isEven ? ((-1) * ((double)b / 2) + sqrt(D)) / (double)a : ((-1) * (double)b + sqrt(D)) / 2 * (double)a;
            x2 = isEven ? ((-1) * ((double)b / 2) + sqrt(D)) / (double)a : ((-1) * (double)b + sqrt(D)) / 2 * (double)a;
            cout << x1 << " " << x2 << endl;
        }
    }

    return 0;
}