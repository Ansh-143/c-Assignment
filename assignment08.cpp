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
    static int count;
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
        cout<<"\t\t\t Student "<<count <<" details ..."  <<endl;
        cout<<"Student neme is :- "<<name  <<endl;
        cout<<"Student Age is  :- "<<age  <<endl;
        cout<<"Admission Year is :- "<<year  <<endl;
        cout<<"Sudent Addmission course is :-"<<course <<endl;
        count++;      
    }
};
int Student :: count=1;
int main()
{
Student obj1;
obj1.get_det();
obj1.display();
return 0;
}

// using objects only 
/*
# include<iostream>
# include<string>
using namespace std;
class Student0
{
public:
    string name;
    int age;
    int year;
    string course;
};
int main()
{
Student obj1;
obj1.name;
obj1.age;
obj1.year;
obj1.course;
cout<<"Student Name :- "<< obj1.name <<endl;
cout<<"Student Age  :- "<<obj1.age  <<endl;
cout<<"Admission Year :- "<<obj1.year  <<endl;
cout<<"Admission Course :- "<<obj1.course <<endl;
return 0;
}
*/