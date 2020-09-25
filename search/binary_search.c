#include<stdio.h>
#include<math.h>

int main(int argc, char* argv[]) {
	const int ARRAY_SIZE = 10;
	int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int k = 2;

	int index_k = binary_search(vet, k, ARRAY_SIZE);

	show_result(index_k, k);

	return 0;
}

int binary_search(int vet[], int k , int ARRAY_SIZE) {
	int left = 0;
	int right = ARRAY_SIZE - 1;
	int center = right / 2;

	while (left <= right) {
		center = (left + right) / 2;

		if ( k == vet[center] ) {
			return center;
		}
		else if ( k < vet[center] ) {
			right = center - 1;
		}
		else {
			left = center + 1;
		}
	}

	return -1;
}

void show_result(int index_k, int k) {
	if (index_k != -1){
		printf("number %d is in index %d \n", k, index_k);
	}
	else {
		printf("number %d does not exist in the vector \n", k);
	}
}
