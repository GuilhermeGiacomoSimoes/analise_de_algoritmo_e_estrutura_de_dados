#include<stdio.h>

int main() {

	const int ARRAY_SIZE = 10;
	int vet[10] = {9, 4, 5, 10, 2, 1, 15, 12, 13, 8};
	int k = 2;

	int index_k = linear_search(vet, k, ARRAY_SIZE);

	show_result(index_k, k);

	return 0;
}

int linear_search(int vet[], int k, int ARRAY_SIZE) {
	for (int i=0; i<ARRAY_SIZE - 1; i++){
		if (k == vet[i]) {
			return i;
		}	
	}

	return -1;
}

void show_result(int index_k, int k) {
	if (index_k != -1){
		printf("number %d is in index %d\n", k, index_k);
	}
	else {
		printf("number %d does not exist in the vector\n", k);
	}
} 
