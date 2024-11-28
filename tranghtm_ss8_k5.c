#include <stdio.h>

int main(){
	int sum = 0;
	int arr[3][4] = { 
		{21, 1,  109, 91},
		{3, 19, 30,  1},
		{221, 15, -19, 97}
	};
	
	printf("\n Phan tu cua mang: \n" );
	for ( int i = 0 ; i < 3 ; i++){
		for ( int j = 0 ; j < 4 ; j++){
			printf("\t%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	for ( int i = 0 ; i < 3 ; i++){
		for ( int j = 0 ; j < 4 ; j++){
			if ( j > 0 && i > 0 && j < 3 && i < 2){
				continue;
			}
			sum += arr[i][j];
		}
	}
	printf("\n Tong phan tu o bien la: %d ", sum );
	
	return 0;
}
