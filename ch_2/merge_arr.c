#include<stdio.h>

int[] merge_unsorted_arr(int [] arr1, int [] arr2);
int[] merge_sorted_arr(int [] arr1, int [] arr2);

int main(){ 
	//TODO
	return 0;
}

int[] merge_unsorted_arr(int [] arr1, int [] arr2){ 
	int len1 = (sizeof(arr1)/sizeof(arr1[0]));
	int len2 = (sizeof(arr2)/sizeof(arr2[0]));
	int [len1 + len2] arr3; 
	
	for(int index = 0; index < len1; index ++){
			arr3[index] = len1[index];
	}
	
	for(int index = len1; index < len1 + len2; index++){
		arr3[index] = arr2[index - len1];
	}
	
	return arr3;
}

int[] merge_sorted_arr(int [] arr1, int [] arr2){ 
	int len1 = (sizeof(arr1)/sizeof(arr1[0]));
	int len2 = (sizeof(arr2)/sizeof(arr2[0]));
	int [len1 + len2] arr3; 
	
	int i = 0, j = 0;
	
	while((i + j) < (len1 + len2)){
			if(arr1[i] > arr2[j]){ 
				arr3[i+j] = arr[j];
				j++;
			} else{ 
				arr3[i+j] = arr[i];
				i++;
			} 
	}
	
	return arr3;
}
