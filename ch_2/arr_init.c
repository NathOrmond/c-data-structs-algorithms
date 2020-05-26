#include<stdio.h>

void init_arr_from_input();
void init_arr_elements();

int main(){ 
	//TODO
	return 0;
}

void init_arr_from_input(){ 
	int i, marks[10];
	for(i = 0; i < 10; i++){ 
		scanf("%d", &marks[i]);
	}
}

void init_arr_elements(){ 
	int i, arr1[10], arr2[10];
	arr1[10] = {0,1,2,3,4,5,6,7,8,9};
	
	for(i = 0; i < 10; i++){ 
	 arr2[1] = arr1[i];
	}
}