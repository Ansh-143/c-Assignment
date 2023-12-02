// Assignment 10 :- Display information of Employee using array of objects

#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    string emp_name;
    string emp_id;
    int emp_salary;
    static int count;
    static int count2;
public:
    static void counter()
    {
        count++;
        cout << "\t\t Employee " << count << " Details ...." << endl;
    }
    void get_details();
    void display()
    {
        cout << "Employee Name   :- " << emp_name << endl;
        cout << "Employee ID     :- " << emp_id << endl;
        cout << "Employee salary :- " << emp_salary << endl;
        cout << endl;
    }
};
int Employee :: count;
int Employee :: count2=1;

void Employee ::get_details()
{
    cout<<"\t\t\tInsert Employee "<< count2<<" details .." <<endl;
    cout << "Enter Employee Name " << endl;
    cin >> emp_name;

    cout << "Enter Employee Salary" << endl;
    cin >> emp_salary;

    cout << "Enter Employee ID" << endl;
    cin >> emp_id;
    count2 ++;
}

int main()
{
    Employee Emp[100];
    int num;
    cout << "How many Employee detials you want to insert " << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        Emp[i].get_details();
    }
    cout << "\t\t\tDisplaying Employee Details " << endl;
    cout << endl;
    for (int i = 0; i < num; i++)
    {
        Employee::counter();
        Emp[i].display();
    }

    return 0;
}