#include<iostream>
using namespace std;
// EXAMPLES FOR TIME COMPLEXITY
int main(){
    // 01. INCREASING COUNT NUMBER USING LOOP
    int count = 0;
    int n = 10;
    for(int i = 0; i<n; i++){
        count = count + 1;
    }
    cout<<"Total count is ---> "<<count<<endl;


    // 02. PRINTING ARRAY ELEMENT USING LOOP
    int arr[5] = {4,8,6,9,2};
    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        cout<<i+1<<" array element ---> "<<arr[i]<<endl;
    }


    // 03. INCREASING COUNT WITH NESTED LOOP
    int new_count = 0;
    int m = 10;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            new_count = new_count + 1;
        }
    }
    cout<<"Total of New Count is ---> "<<new_count<<endl;


    // 04. FINDING ARRAY SUMMATION WITHOUT LOOP
    int arr2[5]={1,2,3,4,5};
    int arr2_length = sizeof(arr2)/sizeof(arr2[0]);
    int result = arr2_length*(arr2_length+1)/2;
    cout<<result<<endl;

    return 0;
}
