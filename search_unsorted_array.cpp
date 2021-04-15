// search in unsorted array (Linear Search)
#include<iostream>
using namespace std;
int search(int arr[],int n,int x){
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			return i;
		}
	}
}
int main(){
	int arr[]={10,20,30,40,50};
	cout<<"number is at: "<<search(arr,5,20);
	return 0;
}

