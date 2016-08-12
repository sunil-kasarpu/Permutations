
void nextPermutation(int *arr, int n)  // arr= Array Name ; n = Size of the array 
{
	while (true){    // Infinite loop
		int i = (n - 1), j, k = 0, temp;
		while (i > 0 && arr[i - 1] >= arr[i])   // Finding the largest suffix start position
			i--;
		if (i == 0)   // Check for final permutation case 
			return 0;
		j = n - 1;
		while (arr[j] <= arr[i - 1])  // Getting the element which is larger the pivot and the smallest element in the suffix set.
			j--;
		temp = arr[i - 1];			// Swap logic.
		arr[i - 1] = arr[j];
		arr[j] = temp;
		j = n - 1;
		while (i < j){				// Reverse suffix 
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
		for (i = 0; i < n; i++)    
			printf("%d ", arr[i]);
	}
}
