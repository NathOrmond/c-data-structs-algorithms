#include<stdio.h>

void insert_element();

int main(){ 
	//TODO
	return 0;
}

//Insert an element into a sorted list
void insert_element(int [] arr, int elem){ 
	for(int i = sizeof(arr)/sizeof(arr[0]); arr[i] >= elem; i--){ 
		arr[i + 1] = arr[i];
	}
	
	arr[i] = elem;
}
