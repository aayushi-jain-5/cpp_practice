#include<iostream>
using namespace std;

void bubbleSort(int arr[]){
	for(int i=0;i<5;i++){
		for(int j=0;j<(5-i-1);j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main(){
	int myarr[5];
	cout<<"Enter 5 integers"<<endl;
	for(int i=0;i<5;i++){
		cin>>myarr[i];
	}
	cout<<"Before Sorting"<<endl;
	for(int i=0;i<5;i++){
		cout<<myarr[i]<<endl;
	}
	bubbleSort(myarr);
	cout<<"After Sorting"<<endl;
	for(int i=0;i<5;i++){
		cout<<myarr[i]<<endl;
	}
	return 0;
}
