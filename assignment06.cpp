// assignment6:- Reverse a number
# include<iostream>
using namespace std;

int main()
 {  
    int num1,reverse,remain=0;
    cout<<"enter the number"<<endl;
        cin>>num1;
    int num=num1;
    while (num>0)
    {
        remain=num%10;
        reverse=reverse*10+remain;
        num=num/10;
    }
    cout<<"The reverse of "<<num1<< " is :-"<<reverse<<endl;
    
    return 0;
 }