// Assignment 11 :- Display information of the book using pointer to the class
/*
#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
    string title;
    string author;
    int price;
    static int count;
    static int counter;

public:
    static void counter_det()
    {
        cout << " \t\t\tInserting Book  " << counter << " details..." << endl;
    }
    void set(string *a, string *b, int *c)
    {
        title = *a;
        author = *b;
        price = *c;
        display(&title, &author, &price);
    }
    void get()
    {
        string x, y;
        int z;
        counter_det();
        cout << "Enter the Book Title :- " << endl;
        cin >> x;

        cout << "Enter Author Name :- " << endl;
        cin >> y;

        cout << "Enter the Price" << endl;
        cin >> z;
        set(&x, &y, &z);
    }
    void display(string *t, string *a, int *p);
};
int Book ::count = 1;
int Book ::counter = 1;

void Book ::display(string *t, string *a, int *p)
{
    cout << "\t\t\tBook " << count << " details..." << endl;

    cout << "Book Title:- " << *t << endl;
    cout << "Author Name :- " << *a << endl;
    cout << "Book Price  :- " << *p << endl;
}
int main()
{
    Book obj1;
    obj1.get();
    return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
    string title;
    string author;
    int price;
    static int count;
    static int counter;

public:
    static void counter_det()
    {
        cout << " \t\t\tInserting Book  " << counter << " details..." << endl;
        counter++;
    }
    void get()
    {
        string x, y;
        int z;
        // counter_det();
        cout << "Enter the Book Title :- " << endl;
        cin >> title;

        cout << "Enter Author Name :- " << endl;
        cin >> author;

        cout << "Enter the Price" << endl;
        cin >> price;
    }
    void display();
};
int Book ::count = 1;
int Book ::counter = 1;

void Book ::display()
{
    cout << "\t\t\tBook " << count << " details..." << endl;

    cout << "Book Title:- " << title << endl;
    cout << "Author Name :- " << author << endl;
    cout << "Book Price  :- " << price << endl;
    count++;
}
int main()
{
    int num;
    cout<<"Enter the number of element you want to insert in array"<<endl;
    cin>>num;
    Book *ptr=new Book(num);
    for(int i=0;i<num;i++)
    { 
        Book::counter_det();
        cout<<ptr[i]->get()<<endl;

    }
    //Book obj1, *ptr;
    //ptr=&obj1;
    //Book ::counter_det();
    //obj1.get();
    //ptr->display();
    return 0;
}