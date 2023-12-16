// Assignment 8:- Displaying information of Student (using function)
# include<iostream>
# include<string>
using namespace std;
class Student
{   
private:
    string name;
    int age;
    int year;
    string course;
public:
    void get_det(){
        cout<<"Enter your Name"<<endl;
        cin>>name;
        
        cout<<"Enter your age"<<endl;
        cin>>age;

        cout<<"Enter the Year of Admission"<<endl;
        cin>>year;
            
        cout<<"Enter the Course of Admission "<<endl;
        cin>>course;
        cout<<endl;
    }
    void display(){
        cout<<"\t\t\t Student  details ..."  <<endl;
        cout<<"Student neme is :- "<<name  <<endl;
        cout<<"Student Age is  :- "<<age  <<endl;
        cout<<"Admission Year is :- "<<year  <<endl;
        cout<<"Sudent Addmission course is :-"<<course <<endl;
        count++;      
    }
};
int main()
{
Student obj1;
obj1.get_det();
obj1.display();
return 0;
}
