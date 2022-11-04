#include <iostream>
using namespace std;

int main() {
    int x;
    int y;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    cout << "Sum equals " << x + y << "." << endl;
    cout << "Difference equals " << x - y << "." << endl;
    cout << "Area equals " << x * y << "." << endl;
    return 0;
}