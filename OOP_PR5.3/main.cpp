#include <iostream>
#include "Classes.h"
using namespace std;

int main(){
    A a(1);
    B b1(2, 3);
    try
    {
        B b2 = b1.get_B(a);
        cout << "Continue" << endl;
    }
    catch(B)
    {
        cout << "catch(B)" << endl;
        exit(1);
    }
    catch(A)
    {
        cout << "catch(A)" << endl;
        exit(2);
    }
    cout << "End" << endl; return 0;
}
