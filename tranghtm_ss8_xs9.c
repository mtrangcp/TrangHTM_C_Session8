#include <stdio.h>

int main(){
	int arr[] = {1,5,2,3,23,5,1,1,3,1,2};
	int maxCount , maxItem, length = sizeof(arr)/sizeof(int);
	
	for ( int i = 0 ; i < length ; i++){
		int count = 0 ;
		for ( int j = 0 ; j < length ; j++){
			if ( arr[i] == arr[j] ){
				count++;
			}
		}
		if ( count > maxCount){
			maxCount = count;
			maxItem = arr[i];
		}
	}

	printf("\nPhan tu %d xuat hien nhieu nhat: %d lan", maxItem, maxCount);
	
	return 0;
}
