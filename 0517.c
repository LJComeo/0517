#include <stdio.h>
#include <stdlib.h>
#if 0
int main(){
	char ch = 'w';     //����һ���ַ���
	char *pc = &ch;    //����һ��ָ������ָ���ַ����ĵ�ַ
	*pc = 'w';         //���ַ�������һ��ָ��
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
	//str1��str2�ֱ�Ϊ�������飬�ڴ�Ὺ�ٳ���ͬ�Ŀռ�����ţ����Լ�ʹ������ͬ����������Ҳ�������
	if (str1 == str2){
		printf("str1 and str2 are same\n");
	}
	else
		printf("str1 and str2 are not same\n");
	//str3��str4ָ��ͬһ�ڴ�ռ䣬�����ڴ������ֵ����ͬ��
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
	printf("%p\n", arr);//arr����������Ԫ��
	printf("%p\n", &arr);//&arr���������������

	printf("%p\n", arr + 1);//���ӵ���һ������Ԫ�صĴ�С
	printf("%p\n", &arr + 1);//����һ���������������Ĵ�С��һ
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