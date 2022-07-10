#include <bits/stdc++.h>
using namespace std;

int main() {

    int arrSize;
    cout << "How big is your array? ";
    cin >> arrSize;

    // int i1[arrSize]; // This doesn't work! ILLEGAL!

    int* pointToNums = new int[arrSize]; // pointer to a block of 10 integers

    // dynamic memory allocation

    for(int i = 0; i < arrSize; i++) {
        *(pointToNums + i) = i * i; 
    }

    for(int j = 0; j < arrSize; j++) {
        cout << "arr[" << j << "] = " << *(pointToNums + j) << ", at address: " << (pointToNums + j) << endl;
    }

    delete[] pointToNums; 

    return 0;
}
