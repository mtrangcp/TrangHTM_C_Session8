#include <stdio.h>

int main(){
	int sum = 0; 
	int arr[3][3] = { 
		{21,  3, 109},
		{3,  30, 9},
		{221, 15,  -19}
	};
	
	for ( int i = 0 ; i < 3 ; i++){
		for ( int j = 0 ; j < 3 ; j++){
			if ( j == i ){
				printf ( "\t%d", arr[i][j] );
				sum += arr[i][j];
			}else{
				printf("\t");
			}
		}
		printf("\n");
	}

	printf("\n tong cac phan tu tren duong cheo chinh: %d ", sum);
	
	return 0;
}
