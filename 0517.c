#include <stdio.h>
#include <stdlib.h>
#if 0
int main(){
	char ch = 'w';     //定义一个字符串
	char *pc = &ch;    //定义一个指针用来指向字符串的地址
	*pc = 'w';         //把字符串赋给一个指针
	system("pause");
	return 0;
}
#endif

#if 0
int main(){
	char str1[] = "hellow bit.";
	char str2[] = "hellow bit.";
	char *str3 = "hellow bit.";
	char *str4 = "hellow bit.";
	//str1与str2分别为两个数组，内存会开辟出不同的空间来存放，所以即使内容相同，两个数组也不会相等
	if (str1 == str2){
		printf("str1 and str2 are same\n");
	}
	else
		printf("str1 and str2 are not same\n");
	//str3与str4指向同一内存空间，所以内存里面的值是相同的
	if (str3 == str4){
		printf("str3 and str4 are same\n");
	}
	else
		printf("str3 and str4 are not same\n");
	system("pause");
	return 0;
}
#endif

#if 0
int main(){
	int arr[10] = { 0 };
	printf("%p\n", arr);//arr代表数组首元素
	printf("%p\n", &arr);//&arr代表的是整个数组

	printf("%p\n", arr + 1);//增加的是一个数组元素的大小
	printf("%p\n", &arr + 1);//增加一代表的是整个数组的大小加一
	system("pause");
	return 0;
}
#endif

void print_arr1(int arr[3][5], int row, int col){
	int i = 0;
	for (i = 0; i < row; ++i){
		for (int j = 0; j < col; ++j){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print_arr2(int(*arr)[5], int row, int col){
	int i = 0;
	for (i = 0; i < row; ++i){
		for (int j = 0; j < col; ++j){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print_arr1(arr, 3, 5);
	print_arr2(arr, 3, 5);
	system("pause");
	return 0;
}