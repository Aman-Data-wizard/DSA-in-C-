#include<iostream>
using namespace std;
int main(){

     int const size = 5;
     int arr[size],i,max,min;

     cout<<"Enter the "<< size <<" of Elements of an array: "<<endl;
     for(int i=0;i<size;i++){
          cin>>arr[i];
     }
     max = arr[0];
     min = arr[0];

     for (i=1;i<size;i++){
          if(arr[i]>max){
               max = arr[i];
          }
          if(arr[i]<min){
               min = arr[i];
          }
     }

     cout<<"Max value: "<<max<<endl;
     cout<<"Min value: "<<min<<endl;
     return 0;
}