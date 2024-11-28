#include <stdio.h>

int main(){
	int sum = 0; 
	int arr[4][4] = { 
		{21,  3, 109, -78},
		{3,  30, 9, 44},
		{221, 15, -19, 9},
		{-34, 88, -99, 9}
	};
	
	for ( int i = 0 ; i < 4 ; i++){
		for ( int j = 0 ; j < 4 ; j++){
			if ( j+i == 3 ){
				printf ( "\t%d", arr[i][j] );
				sum += arr[i][j];
			}else{
				printf("\t");
			}
		}
		printf("\n");
	}

	printf("\n tong cac phan tu tren duong cheo phu: %d ", sum);
	
	return 0;
}
