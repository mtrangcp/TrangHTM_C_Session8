#include<stdio.h>
int main(){
	int arr[3][4] = { {1,2,3,4}, {4,5,6,7}, {7,8,9,10} };
	

	for ( int i =2; i >=0; i--){
		for ( int j =3; j>= 0; j--){
			printf("\t%d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
