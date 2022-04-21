#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    //////
    // String
    string a;
    cout << "Enter string a : ";
    getline(cin, a);
    a.append("ddddddddgfddd");
    cout << "Hello, a = " << a << "\n";
    ///////

    //////////
    // array
    int b[] = {32, 43, 22, 543, 654, 54, 654 };
    a[7] = 43;
    int length_of_a = sizeof(a) / sizeof(int);
    cout << "Hello, b = " << b[2] << "\n";
    //////////

    //////////
    // Structs
    struct person
    {
        int n = 314;
        int m;
        string o;
    };
    
    person someone;
    person anyone;

    someone.m = 32;
    cout << someone.m << "\n" << anyone.n << "\n";
    //////////

    ///////////
    // pointers
    int num_for_ptr;
    int* ptr_num = &num_for_ptr;
    *ptr_num = 42;
    cout << ptr_num << "\n";
    cout << num_for_ptr << "\n";
    ////////////



    return 0;

}
