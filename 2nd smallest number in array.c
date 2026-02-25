#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(n < 2) {
        printf("Array must contain at least two elements.\n");
        return 0;
    }

    // Sorting the array (Bubble Sort)
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Finding second smallest (different from smallest)
    int smallest = arr[0];
    int secondSmallest = -1;

    for(int i = 1; i < n; i++) {
        if(arr[i] != smallest) {
            secondSmallest = arr[i];
            break;
        }
    }

    if(secondSmallest == -1)
        printf("No second smallest element.\n");
    else
        printf("Second smallest element: %d\n", secondSmallest);

    return 0;
}
