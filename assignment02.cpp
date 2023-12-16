            // find largest number of three

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
 