//Assignment4:-   Factorial of a Number using recursion 
# include<iostream>
using namespace std;
int rec(int a);
int main()
 {
    int num;
    cout<<"Enter the number"<<endl;
        cin>>num;
    cout<< "The value of factorial "<<num <<" is :-"<<rec(num)<<endl;
 }
 int rec(int a){
    if (a<=1){
        return 1;
    }
    else{
       return a * rec(a-1); 
    }
 }
