#include <iostream>
#include <string>
using namespace std;
class employee
{
public:
    string name;
    string gender;
    int age;

    void introduction()
    {

        cout << "Employee Name - " << name << endl;
        cout << "Employee Gender - " << gender << endl;
        cout << "Employee Age - " << age << endl;
    }

    employee(string name, string gender, int age)
    {
        name = name;
        gender = gender;
        age = age;
    };
};

int main()
{

    employee e1 = employee("nafiz", "male", 25);
    e1.introduction();

    employee e2 = employee("saldina", "female", 25);
    e2.introduction();
}
