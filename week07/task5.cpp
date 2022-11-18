#include<iostream>
using namespace std;
const int MAX_SIZE = 100;

int size(char arr[]) {
    int size = 0;
    while(arr[size] != '\0') {
        size++;
    }
    return size;
}

bool isPalindrom(char arr[]) {
    for(int i = 1; i <= size.arr; i++) {
        if (arr[i] != arr[size.arr] - 1 - i){
            return false;
        }    
    }
    return true;
}

int main() {
    cout << size["false"] << endl;
    cout << isPalindrom["true"];
    return 0;
}
