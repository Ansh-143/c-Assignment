

// Check Armstrong Number (for n digit) (direct)
# include<math.h>
# include<iostream>
using namespace std;
int main()
 {
    int num,reminder,temp,result=0;
    cout<<"enter the number"<<endl;
    cin>>num;
    temp=num;
    int temp2=num;
    int count=0;
    if (num == 0){
        return 1;
    }
     while (temp2>0)
     {  
        count++;
        temp2=temp2/10;
     }
    cout<<"count is "<<count  <<endl;
    for (int i = 0; i < count; i++)
    {
        reminder=temp%10;
        result= result + pow(reminder,count);
        temp/= 10;
    }
    if(num==result){
        cout<< num <<" is a Armstrong Number";
    }    

    else{
        cout<<num<<" is not a Armstrong Number "<<endl;      
    }
    return 0;
 }
