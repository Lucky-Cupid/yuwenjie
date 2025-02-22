#include <stdio.h>  
  
// 冒泡排序函数  
void bubbleSort(int arr[], int n) {  
    int i, j, temp;  
    for (i = 0; i < n-1; i++) {  
        // Last i elements are already in place  
        for (j = 0; j < n-i-1; j++) {  
            if (arr[j] > arr[j+1]) {  
                // 交换 arr[j] 和 arr[j+1]  
                temp = arr[j];  
                arr[j] = arr[j+1];  
                arr[j+1] = temp;  
            }  
        }  
    }  
}  
  
// 用于打印数组的函数  
void printArray(int arr[], int size) {  
    int i;  
    for (i=0; i < size; i++)  
        printf("%d ", arr[i]);  
    printf("\n");  
}  
  
// 主函数来测试上述函数  
int main() {  
    int arr[] = {64, 34, 25, 12, 22, 11, 90};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    bubbleSort(arr, n);  
    printf("Sorted array: \n");  
    printArray(arr, n);  
    return 0;  
}