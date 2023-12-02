                            // find largest number of three
/*
# include<iostream>
using namespace std;

int main()
 {
    int arr[3]={34,65,23};
    int max= arr[0];
    for (int i = 0; i < 3; i++)
    {
        if (max<arr[i]){
            max= arr[i];
        }
    }
    cout<<"The maximum value is :-"<<max<<endl;
    return 0;
 }
 */
//   assignment2:-        find largest number of three
# include<iostream>
using namespace std;
void max_value(int arr[3],int &value); 
int main()
 {
    int luci[3]={69,1554,117};
    int maximum;
    max_value(luci, maximum);
    cout<<"The Maximum value amongst 3 Number is :- "<<maximum <<endl;
    return 0;
 }
 void max_value(int arr[3],int &value){
    int max;
    max=arr[0];
    for (int i = 0; i < 3; i++)
    {
        if (max<arr[i]){
            max=arr[i];
        }
    }
    value=max;
 }