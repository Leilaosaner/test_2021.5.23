#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//n!--n*(n-1)!
//int fac(int p)
//{
//	if (p == 1)
//		return 1;
//	else if (p > 1)
//		return p * fac(p - 1) + fac(p - 1);
//	else if (p == -1)
//		return -1;
//	else if (p == 0)
//		return 0;
//	else
//		return p * fac(p + 1) + fac(p + 1);		
//}
//int main()
//{
//	int n = 0;
//
//	scanf("%d", &n);
//	int tab = fac(n);
//	printf("%d\n", tab);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//	for (i = 0; i <= 11; i++)
//	{	
//		printf("hehe");
//		arr[i] = 0;
//	}
//}

/*满分my_strcpy函数*/
//#include<assert.h>
//char* my_strcpy(char* arr1, const char* arr2)/*char*优化，const优化：只能改变左值arr1指向的空间*/
//{
//	char* ret = arr1;
//	assert(arr1 != NULL); //断言优化，保证指针有效性
//	assert(arr2 != NULL);
//	//把arr2指向的字符串拷贝到arr1指向的空间中，包含‘\0’
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "123";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}/*模拟实现strcpy功能函数*/


//int main()
//{
//	int num = 10;
//	int n = 100;
//	const int* const p = &num;
//	/**p = 0;*/
//	/*p = &n;*/
//	printf("%d\n", num);
//	return 0;
//}/*const应用*/

/*满分my_strlen函数*/
//#include<assert.h>
//int my_strlen(const char* str)//const保证指针不被修改
//{
//	int count = 0;
//	assert(str != NULL);//断言保真指针有效性
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


int main()
{
	int a = 10;
	int b = -10;
	return 0;
}