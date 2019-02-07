#include<iostream>
using namespace std;
//utility function to swap the elements
void swap(int *a, int *b){
int t= *a;
*a = *b;
*b = t;
}
//partitioning function
int partition(int arr[],int low , int  high){
int pivot = arr[high]; //pivot
int i = (low-1); //indexing the smaller element
	for(int j=low;j<= high-1;j++){
		if(arr[j]<= pivot){  //when the current element is less than or equal to the pivot element
		i++;
		swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return i+1;
}
//quicksort function
void quicksort(int arr[],int low,int high){
	if(low < high){
	int pi = partition(arr,low,high);	
	quicksort(arr,low,pi-1);
	quicksort(arr,pi+1,high);
	}
}
// print array function
void printarray(int arr[],int size){
	int i;
	for(i=0;i< size;i++){
	cout<<"->"<<arr[i];
	}
}
//driver function
int main(){
	int arr[] = {3, 4, 7, 6 , 5 , 1, 2, 8, 10, 9};
	int n = sizeof(arr)/sizeof(arr[0]);  
	quicksort(arr,0,n-1);	
	cout<<"quicksort of sorted array"<<endl;	
	printarray(arr,n);
	cout<<endl;
	return 0;
}


















