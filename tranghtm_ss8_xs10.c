#include <stdio.h>

int main(){
	int arr[11] = {1, 3, 5, 5,7,8 ,9, 8, 65 ,4};
	int result[11] = {0};
	int maxCount, index = 0;
	
	int size = sizeof(arr)/ sizeof(int);
	
	for ( int i =0; i< size; i++){
		int count =0;
		for ( int j =0; j< size ; j++){
			if ( arr[i] == arr[j] ){
				count++;
			}
		}
		if ( count > maxCount){
			maxCount = count;
		}
	}
	
	for ( int i =0; i< size; i++){
		int count =0;
		for ( int j =0; j< size ; j++){
			if ( arr[i] == arr[j] ){
				count++;
			}
		}
		if ( count == maxCount){
			int flag = -1;
			for ( int k = 0; k< 11; k++){
				if ( arr[i] == result[k] ){
					flag = 1;
					break;
				}
			}
			if ( flag == -1){
				result[index] = arr[i];
				index++;
			}
			flag = -1;
		}
	}
	
	printf("\nPhan tu xuat hien nhieu nhat: ");
	for ( int i = 0; i< index; i++){
		printf("\t%d", result[i]);
	}
	printf("\nSo lan xuat hien: %d", maxCount);
	
	return 0;
}
