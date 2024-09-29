// #include<stdio.h>
// #include<stdlib.h>

// void printArray(float arr[5]) {
//        for (int i = 0; i<5; i++) {
//            printf("%.1f ", arr[i]);
//        }
//    }

//    int main() {
//        char a='1';
//        float arr[5] = {1.9f, 2, 3, 4, 5};
//        printArray(arr);
//        printf("\n%c",a-1);
//        return 0;
//    }
// //ddl为10.9
#include <stdio.h>
#include <stdlib.h>
int a;
double *create_vector(int n){
    double* vector=(double*)malloc(n * sizeof(double));
    for (int i = 0; i < n; i++)
    {vector[i]=0;
    }
    return vector;} 
    int show_vector(double *vector){
        printf("[");
        for ( int i = 0; i <a; i++)
        {
            printf("%.2f,",vector[i]);
        }
        
        printf("\b]");
        return 0;
    }
int main(){
    printf("输入你需要生成的向量的维度：");
    scanf("%d",&a);
    show_vector(create_vector(a));
}

// int main() {
//     int n=5;
//     printf("输入要分配的整数个数：");
//     scanf("%d", &n);
//     double* arr= (double*)malloc(n * sizeof(int));
//     if (arr == NULL) {
//         printf("内存分配失败！\n");
//         return 1;
//     }
//     // 使用动态分配的数组
//     for (int i = 0; i < n; i++) {
//         arr[i] = i + 1;
//     }
//     for (int i = 0; i < n; i++) {
//         printf("%.1f ",arr[i]);
//     }
//     free(arr);
//     return 0;
// }
//编译报错即程序无法编译程序，不认同程序，不会将其放入run流程中