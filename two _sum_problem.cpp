#include <iostream>
using namespace std;

int main()
{
    int arr[6];
    int n=5;
   
    cout<<"enter the element in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int target = 22;
     int s=0,c=(n-1);
     while(s<c){
         if(arr[s]+arr[c]==target){
             cout<<arr[s]<<" and "<<arr[c];
             return 1;
         }
         else if(arr[s]+arr[c]<target){
             s++;
         }
         else{
             c--;
         }
     }
    
    
    return 0;
}
