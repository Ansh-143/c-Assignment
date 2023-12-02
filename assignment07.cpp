// Check the Armstrong number (for 3 digits)
/*
# include<iostream>
using namespace std;

int main()
 {
    int num,temp,remain,result=0 ;
    cout<<"enter the number"<<endl;
    cin>>num;
    temp=num;                       
    while (temp>0){                                                 // 371=(3*3*3)+(7*7*7)+(1*1*1)
        remain=temp % 10;                                           // 371= 27+343+1 
        result=result+(remain*remain*remain);                       // 371=371 (armstrong number)    
        temp=temp/10;
    }
    if (num==result){
        cout<<num<<" is a Armstrong Number"  <<endl;       
    }
    else{
        cout<<num<<" is a not Armstrong Number"  <<endl;       
    }

    return 0;
 }
 */
/*
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

*/

// Check Armstrong Number (for n digit) (by using Functions)
# include<math.h>
# include<iostream>
using namespace std;
int count_number(int x){
    int count=0;
    while(x>0)
    {
        count++;
        x/=10;
    }
    cout<<"total digits are :- "<<count<<endl;
    return count;
}
void check_number(int num,int count, int &result);
int main()
 {
    int num,count,result=0;
cout<<"enter the number"<<endl;
    cin>>num;
    count=count_number(num); 
    check_number(num, count, result);
    if (num==result){
        cout<<num << " is a Armstrong Number"<<endl;
    }
    else{
        cout<<num << " is a Armstrong Number"<<endl;
    }
    return 0;
 }
 void check_number(int num,int count,int &result ){
    int remain;
    for (int i = 0; i < num; i++){
        remain=num%10;
        result = result + pow(remain,count);
        num/=10;
    }
 }