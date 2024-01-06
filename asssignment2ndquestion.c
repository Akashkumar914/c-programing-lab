#include<stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Duplicate no in a array are:- ");
     for (int i = 0; i <n- 1; i++) {
        for (int j = i + 1; j <n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break; 
            }
        }
    }
} 