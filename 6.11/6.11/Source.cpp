#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n);

int main() {
	int n;

	printf("Enter the size of the array: ");
	scanf_s("%d", &n);

	int *arr = (int *)malloc(n * sizeof(int));

	if (arr == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	printf("Enter the elements of the array:\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	printf("Original array: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	bubbleSort(arr, n);

	printf("\nSorted array: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	free(arr);

	return 0;
}

void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		bool swapped = false; 
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) 
			{				
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = true;
			}
		}

		if (!swapped) 
		{
			printf("\nArray is already sorted. \n");
			break;
		}

		printf("\nArray after pass %d: ", i + 1);
		for (int k = 0; k < n; k++)
			printf("%d ", arr[k]);
	}
}