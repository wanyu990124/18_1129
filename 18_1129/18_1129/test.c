/*��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������*/
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
//	printf("������һ���ַ���:");
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
//	printf("������һ���ַ���:");
//	scanf("%s", &str);
//	reverse_string(str);
//	printf("%s", str);
//	system("pause");
//	return 0;
//}