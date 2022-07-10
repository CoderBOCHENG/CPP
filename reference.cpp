#include <bits/stdc++.h>
using namespace std;

int main() {

    int original = 30;
    cout << "original = " << original << endl;
    cout << "original is at address : " << &original << endl;

    int& ref1 = original; // reference means alias, it's just another name of the variable
    cout << "ref1 is at address : " << &ref1 << endl;


    int& ref2 = ref1;
    cout << "ref2 is at address : " << &ref2 << endl;

    cout << "Therefore, ref2 = " << ref2 << endl;



    return 0;
}
