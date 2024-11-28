#include<stdio.h>
int main(){
	int arr[3][4] = { {1,2,3,4}, {4,5,6,7}, {7,8,9,10} };
	
	int num , check = 0;
	printf("nhap so bat ki: ");
	scanf("%d", &num );

	for ( int i =2; i >=0; i--){
		for ( int j =3; j>= 0; j--){
			if ( num == arr[i][j] ){
				check = 1;
				printf("So bn nhap o vi tri hang %d, cot %d \n", i+1, j+1 );
			}
		}
	}
	if ( check == 0 ){
		printf("\n So bn nhap k co trong mang!");
	}

	return 0;
}
