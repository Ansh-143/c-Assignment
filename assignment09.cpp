// Assignment 9 :-display information of book
# include<iostream>
# include<string>
using namespace std;
class Book
{
private:
    string title;
    string author;
    int price;
    static int count;
public:
    void get_details();
    void display();
};
int Book :: count=1;
void Book :: get_details(){
    cout<<"Enter the Book Title :- "<<endl;
    cin>>title;
        
    cout<<"Enter Author Name :- "<<endl;
    cin>>author;

    cout<<"Enter the Price"<<endl;
    cin>>price;
}
void Book :: display(){
    cout<<"Book "<<count<< "details..." <<endl;
       
    cout<<"Title of Book is :- "<< title <<endl;
    cout<<"Author of the Book is :- "<< author <<endl;
    cout<<"Price of the Book is :- "<< price <<endl;
       
} 

int main()
{
Book obj1;
obj1.get_details();
obj1.display();
return 0;
}