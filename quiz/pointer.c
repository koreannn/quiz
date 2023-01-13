/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	//포인터의 형변환 - 예제

	int data = 0x0A0B0C0D;
	char* pc = NULL;
	pc = (char*)&data; //<<<<<<<<< 포인터의 형변환

	for (int i = 0; i < 4; i++)
	{
		printf("*(pc+%d) = %02X\n", i, *(pc + i));
	}
	return 0;





	//포인터 ~ 배열 관계 및 포인터 ~ 함수 관계
	
	void sub(int *p, int n);

	int main()
	{
		int a[3] = { 1,2,3 };

		printf("%d %d %d\n", a[0], a[1], a[2]);
		sub(a, 3);
		printf("%d %d %d\n", a[0], a[1], a[2]);

		return 0;
	}

	void sub(int *p, int n) //void sub(int b[], int n) 이런 식으로 인자로 배열을 전달해도 됨
	{
		*p = 4;
		*(p + 1) = 5;
		*(p + 2) = 6;
	}
	*/
