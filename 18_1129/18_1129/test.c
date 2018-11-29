/*编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void reverse_string(char* str) {
//	char* start = str;
//	char* end = str + strlen(str) - 1;
//	while (start < end) {
//		char temp = *start;
//		*start = *end;
//		*end = temp;
//		start++;
//		end--;
//	}
//	return;
//}
//int main() {
//	char* str[] = { 0 };
//	printf("请输入一串字符串:");
//	scanf("%s", &str);
//	reverse_string(str);
//	printf("%s", str);
//	system("pause");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void reverse_string(char* str) {
//	char* start = str;
//	char* end = str + strlen(str) - 1;
//	if (*str) {
//		char temp = *start;
//		*start = *end;
//		*end = '\0';
//		reverse_string(str + 1);
//		*end = temp;
//	}
//}
//int main() {
//    char* str[] = { 0 };
//	printf("请输入一串字符串:");
//	scanf("%s", &str);
//	reverse_string(str);
//	printf("%s", str);
//	system("pause");
//	return 0;
//}