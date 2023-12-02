// assignment5:- Sum of all number of an array 
# include<iostream>
using namespace std;
void sum_value(int arr[], int n, int &res );
int main()
 {
    int num, result;
    cout<<"enter the Number of element you want in your array"<<endl;
        cin>>num;
    int arr[num]={};
    for (int i = 0; i < num; i++)
    {
        cout<<"Enter the "<<i+1 <<" element" <<endl;
        cin>>arr[i];
    }
    sum_value(arr,num,result);
    cout<<"The Sum all the element of an array is :- "<< result  <<endl;
    return 0;
 }
void sum_value(int arr[], int n, int &res ){
    int sum=0;
    for (int i = 0; i <n; i++)
    {
        sum=sum+arr[i];        
    }
    res=sum;  
}
