/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strtok()�Լ��� ����ϱ� ���� >> >>>>>>>> strtok()�Լ� �۵�����(?)�� ���� �ڼ��� ����
#include <stdlib.h>
#define SIZE 100
int main()
{
	//���� ����
	FILE* fp = fopen("./000080.txt", "rt");
	if (fp == NULL)
	{
		printf("���� ���� ���� ! \n");
		return 0;

	}

	//���ڿ� �о���� : fgets(), fgetc(), fscanf(), fread() �� �������� ������ fscanf�� ���
	char buff[SIZE];
	int step = 0;
	while (feof(fp) == 0)
	{
		fscanf(fp, "%s\n", buff, 1);
		printf("%s\n", buff);
		step++;
	}
	printf("������ �� : %d", step);
	int* prince = (int*)malloc(step * (sizeof(int)));

	fseek(fp, 0, SEEK_SET); //������ �̵�

	char* token;
	token = strtol(buff, ","); // " ~~~ " ���� ~~~�� ���� ���� �ڸ��� �������̴�.(���⼭�� , �� �������� �߸��� �ȴ�)
	printf("%s\n", token);
	token = strtok(NULL, ",");
	printf("%s\n", token);
	token = strtok(NULL, ",");
	printf("%s\n", token);
	int price = atoi(token); //���ڿ��� ���������� ��ȯ�ϴ� �Լ�
	printf("");

	fclose(fp);
	free(price);
	return 0;
}*/

