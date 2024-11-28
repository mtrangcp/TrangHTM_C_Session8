#include<stdio.h>
int main(){
	int n ;
	printf("nhap so bat ki: ");
	scanf("%d", &n );
	
	int arr[n][n] ;
	
	for ( int i = 0; i < n; i++){
		for ( int j = 0; j < n; j++){
			printf("Nhap phan tu vi tri hang %d, cot %d: ", i+1, j+1 );
			scanf("%d", &arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Phan tu cua mang: \n" );
	for ( int i = 0 ; i < n ; i++){
		for ( int j = 0 ; j < n ; j++){
			printf("\t%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
