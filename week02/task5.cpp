#include <iostream>
using namespace std;

int main() {
    int side;
    int apothem;
    int height;
    cout << "Enter value: ";
    cin >> side;
    cout << "Enter apothem: ";
    cin >> apothem;
    cout << "Enter height: ";
    cin >> height;

    double area_of_base = side * side;
    double perimenter_of_base = 4 * side;
    double surface_area = area_of_base + (perimenter_of_base * apothem) / 2;
    double volume = (area_of_base * height) / 3;

    cout << "Surface area is " << surface_area << endl;
    cout << "Volume is " << volume << endl;
    return 0;
}