#include <stdio.h>

int main(){
	int arr[3][4] = { 
		{21, 1, 109, 91},
		{3, 19, 30, 1},
		{221, 15, -19, 97}
	};
	int max  = arr[0][0];
	
	for ( int i = 0 ; i < 3 ; i++){
		for ( int j = 0 ; j < 4 ; j++){
			if ( arr[i][j] > max){
				max = arr[i][j];
			}
		}
	}

	printf("\n max =  %d ", max);
	
	return 0;
}
