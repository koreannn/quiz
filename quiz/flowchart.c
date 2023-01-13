/*#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include<string.h> // strtok()

#include<stdlib.h>

#include<windows.h> // HWND, HDC

#define SIZE 100

#define SCALE 5



int MAX(int* p, int dim) {

	int result = 0;

	for (int i = 0; i < dim; i++)

	{

		if (p[i] > result) {

			result = p[i];

		}

	}

	return result;

}



int Count(char* filepath) {

	FILE* fp = fopen(filepath, "rt");

	if (fp == NULL) {

		printf("failed to load the file.\n");

		return 0;

	}



	char buff[SIZE];

	int step = 0;

	fscanf(fp, "%s\n", buff, 1);// Date, Open, High,.....

	while (feof(fp) == 0) {

		fscanf(fp, "%s\n", buff, 1);

		step++;

	}


	fclose(fp);

	return step--;

}



void ReadPrice(char* filepath, int* price, int nLeng) {

	FILE* fp = fopen(filepath, "rt");

	if (fp == NULL) {

		printf("failed to load the file.\n");

		return 0;

	}



	char buff[SIZE];

	char* token;

	int idx = 0;

	fscanf(fp, "%s\n", buff, 1); // Date, Open, High, .....

	while (feof(fp) == 0) {

		fscanf(fp, "%s\n", buff, 1); // 2020-9-18,37200.0, ........

		token = strtok(buff, ",");

		token = strtok(NULL, ",");

		price[(nLeng - 1) - idx] = atoi(token);

		idx++;

	}

	fclose(fp);

}



int main(void) {

	// open the file

	char* filepath = "C:/Users/Owner/Desktop/000080.txt";

	int nLeng = Count(filepath);

	printf("the number of lines: %d\n", nLeng);



	// malloc

	int* price = (int*)malloc(nLeng * sizeof(int));

	ReadPrice(filepath, price, nLeng);


	HWND hwnd = GetForegroundWindow();

	HDC  hdc = GetWindowDC(hwnd);

	int x, y, x0, y0;

	float max_price = (float)MAX(price, nLeng);

	MoveToEx(hdc, 30, 600, 0);

	LineTo(hdc, 30, 0);

	MoveToEx(hdc, 30, 600, 0);

	LineTo(hdc, 30 + SCALE * nLeng, 600);

	// 초기 좌표 (t=0) 계산: x0, y0
	x0 = 30;
	y0 = 600 - (int)(150 * (float)price[0] / (float)max_price);
	for (int t = 1; t < nLeng; t++) {

		// 전날 좌표로 커서 이동: MoveToEx()
		MoveToEx(hdc, x0, y0, 0);
		// 오늘 좌표 계산: x,y
		x = 30 + SCALE * t;
		y = 600 - (int)(150 * (float)price[t] / (float)max_price);
		// 전날 부터 오늘까지 라인 그리기: LineTo()
		
	}
	//x = 30 + SCALE * t;
	//y = 600 - (int)(150 * (float)price[t] / (float)max_price);
	//SetPixel(hdc, x, y, RGB(255, 0, 0));
	free(price);

	return 0;
}*/