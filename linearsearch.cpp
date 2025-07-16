#include<iostream>
using namespace std;

int LinearSearch(int arr[], int sz, int target){
	for(int i=0;i<sz;i++){
	if (arr[i] == target) //Element FOUND
	
		return i;
	}
	return -1;
}
int main(){
	
	int arr[] = {2,4,7,8,1,2,5};
	int sz = sizeof(arr)/sizeof arr[0];
	int target=8;
	
	//Function call
	cout<< "Element found at Index: "<<LinearSearch(arr,sz,target)<<endl;
	
	return 0;
}
