/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strtok()함수를 사용하기 위함 >> >>>>>>>> strtok()함수 작동원리(?)에 대해 자세히 숙지
#include <stdlib.h>
#define SIZE 100
int main()
{
	//파일 열기
	FILE* fp = fopen("./000080.txt", "rt");
	if (fp == NULL)
	{
		printf("파일 열기 실패 ! \n");
		return 0;

	}

	//문자열 읽어오기 : fgets(), fgetc(), fscanf(), fread() 네 가지에서 지금은 fscanf를 사용
	char buff[SIZE];
	int step = 0;
	while (feof(fp) == 0)
	{
		fscanf(fp, "%s\n", buff, 1);
		printf("%s\n", buff);
		step++;
	}
	printf("라인의 수 : %d", step);
	int* prince = (int*)malloc(step * (sizeof(int)));

	fseek(fp, 0, SEEK_SET); //파일의 이동

	char* token;
	token = strtol(buff, ","); // " ~~~ " 에서 ~~~에 들어가는 것은 자르는 기준점이다.(여기서는 , 를 기준으로 잘리게 된다)
	printf("%s\n", token);
	token = strtok(NULL, ",");
	printf("%s\n", token);
	token = strtok(NULL, ",");
	printf("%s\n", token);
	int price = atoi(token); //문자열을 정수형으로 변환하는 함수
	printf("");

	fclose(fp);
	free(price);
	return 0;
}*/

