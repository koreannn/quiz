/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	//�������� ����ȯ - ����

	int data = 0x0A0B0C0D;
	char* pc = NULL;
	pc = (char*)&data; //<<<<<<<<< �������� ����ȯ

	for (int i = 0; i < 4; i++)
	{
		printf("*(pc+%d) = %02X\n", i, *(pc + i));
	}
	return 0;





	//������ ~ �迭 ���� �� ������ ~ �Լ� ����
	
	void sub(int *p, int n);

	int main()
	{
		int a[3] = { 1,2,3 };

		printf("%d %d %d\n", a[0], a[1], a[2]);
		sub(a, 3);
		printf("%d %d %d\n", a[0], a[1], a[2]);

		return 0;
	}

	void sub(int *p, int n) //void sub(int b[], int n) �̷� ������ ���ڷ� �迭�� �����ص� ��
	{
		*p = 4;
		*(p + 1) = 5;
		*(p + 2) = 6;
	}
	*/
