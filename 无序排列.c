#include <stdio.h>  
  
int main() {  
    // 定义一个整数数组（无序）  
    int unorderedArray[] = {5, 3, 8, 4, 2, 9, 1, 7, 6, 0};  
    // 计算数组的大小  
    int size = sizeof(unorderedArray) / sizeof(unorderedArray[0]);  
  
    // 打印数组的内容  
    printf("无序数组的内容：\n");  
    for(int i = 0; i < size; i++) {  
        printf("%d ", unorderedArray[i]);  
    }  
    printf("\n");  
  
    // 注意：在这个例子中，我们没有对数组进行排序或其他操作，  
    // 因为题目要求的是无序数组的程序。  
  
    // 如果需要，你可以在这里添加更多的逻辑来处理数组，  
    // 比如搜索、插入、删除元素等。  
  
    return 0;  
}