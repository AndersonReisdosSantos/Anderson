//Aluno: Anderson Reis dos Santos
//Matricula : 03098292
//Turma : CIN04S1

#include <stdio.h>
#include <stdlib.h>

void sort(int *arr, int size){
	int x, y, value;
	
	for (x = 1 ; x < size ; x++){
		value = arr [x];
		
		for (y = x - 1 ; y >= 0 && arr[y] > value ; y--){
			arr[y+1] = arr[y];	
		}
		arr[y+1] = value;
	}
}

int main() {
	int a[] = {5,7,1,3,9};
	int i;
	
	sort (a, 5);
	
	for ( i = 0; i < 5 ; i++)
		printf("%i\n", a[i]);
	
	return 0;
}
