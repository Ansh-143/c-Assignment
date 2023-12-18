// Assignment 12:- Displaying information of Student by using array of pointer to the class 

# include<iostream>
# include<string>
using namespace std;
class Student
{
private:
    string name;
    string course;
    int age;
    int year; 
    static int count1;
    static int count2;
public:
    static void print_title(){
        cout<<"\t\t Student "<<count2 <<" details...." <<endl;
        count2++;
    }
    void get_det(){
        cout<<"\t\t Inserting  Student "<<count1 <<" details ..."  <<endl;
        
        cout<<"Enter your Name"<<endl;
        cin>>name;
        cout<<"Enter your age"<<endl;
        cin>>age;
        cout<<"Enter the Year of Admission"<<endl;
        cin>>year;
        cout<<"Enter the Course of Admission "<<endl;
        cin>>course;
        
        count1++; 
    }
    void display();
};
int Student :: count1=1;
int Student :: count2=1;

void Student :: display(){
        cout<<"Student neme is :-             "<<name  <<endl;
        cout<<"Student Age is  :-             "<<age  <<endl;
        cout<<"Admission Year is :-           "<<year  <<endl;
        cout<<"Sudent Addmission course is :- "<<course <<endl; 
}
int main()
{
    int num;
    cout<<"How many Student details you want to insert "<<endl;
    cin>>num;
    // Student std[100];
    //dynamic array 
    Student* ptr=new Student[num];
    //creating dynamic pointer
    //Student ** ptrTemp= new Student*[]
    Student* ptrTemp= ptr;
    for (int i = 0; i < num; i++)
    {
        ptr->get_det();
        ptr++;
    }
    cout<<"\t\t\tDisplying details "<<endl;
    cout<<endl;
    for (int i = 0; i < num; i++)
    {
        Student::print_title();
        ptrTemp->display();
        ptrTemp++;
    }
    return 0;
}