////////////////////////////////////
///////////////////////////////////
// CHECK OUT README, THIS IS NOT COMPLETE
/////////////////////////////////
////////////////////////////////

#include <iostream>
#include <vector> // This can be used to make dynamic arrays.

using namespace std;

class Employee
{
// public functions can be accessed from anywhere.
public:
    string name;
    string company;
    int age;

    void SayHi()
    {
        cout << "Hi, this is a function within a class\n";
    }

    /////////////////
    // Constructor
    Employee(string Name, string Company, int Age = 111)
    {
        name = Name;
        company = Company;
        age = Age;
    }

    //////////
    // Setter - Used for setting values of private variables.
    void setname(string pvt_Name)
    {
        pvt_name = pvt_Name;
    }

    ///////////
    // Getter
    void getname()
    {
        cout << pvt_name;
    }

// private functions can be accessed from within the class only.
private:
    string pvt_name;

// protected functions can be accessed from within the class and derived classes which inherit this class.
protected:
};

// Createing a derived class.
class Developer:public Employee
{
public:
    string something;
    
    // A constructor is needed for derived classes.
    Developer(string name, string company, int age, string something)
        :Employee(name, company, age)
    {
        something = something;
    }
};

int main(void)
{
    Employee harsh("Harsh", "FCC");
    cout << harsh.age << " << this was set by default." << endl;
    harsh.age = 18;
    cout << harsh.age << endl;
    harsh.SayHi();
    return 0;
}