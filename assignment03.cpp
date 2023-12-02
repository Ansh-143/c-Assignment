// assignment3:-    check number is prime or not
# include<iostream>
using namespace std;
int main()
 {
    int number, check=0;
    cout<<" Enter the Number :-" <<endl;
    cin>>number;
    if (number==0 || number==1){
    cout<<number<<" is not a Prime Number "  <<endl;
    }
    for (int i = 2; i < number/2; i++)
    {
        if (number%i==0){
            check ++;
        }
    }
    if (check>0){
        cout<<number<< " is not a Prime Number"<<endl;
    }
    else{
        cout<<number<<"is a Prime number " <<endl;
           
    }
    return 0;
 }