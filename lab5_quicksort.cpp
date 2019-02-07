#include<iostream>
using namespace std;
void swap(int *a, int *b){
int t= *a;
*a = *b;
*b = t;
}
int partition(int arr[],int low , int  high){
int pivot = arr[high];
int i = (low-1);
	for(int j=low;j<= high-1;j++){
		if(arr[j]<= pivot){
		i++;
		swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return i+1;
}
void quicksort(int arr[],int low,int high){
	if(low < high){
	int pi = partition(arr,low,high);	
	quicksort(arr,low,pi-1);
	quicksort(arr,pi+1,high);
	}
}
void printarray(int arr[],int size){
	int i;
	for(i=0;i< size;i++){
	cout<<"->"<<arr[i];
	}
}
int main(){
	int arr[] = {3, 4, 7, 6 , 5 , 1, 2, 8, 10, 9};
	int n = sizeof(arr)/sizeof(arr[0]);  
	quicksort(arr,0,n-1);	
	cout<<"quicksort of sorted array"<<endl;	
	printarray(arr,n);
	cout<<endl;
	return 0;
}


















