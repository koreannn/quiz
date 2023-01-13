/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//메모리의 할당 방법 >>>> 정적, 동적

	
	메모리의 구분

	<<코드>>
	소스코드가 저장되는 공간. 작성한 코드가 여기에 저장되어있다가 한줄씩 가져와서 실행되는 것

	<<데이터>>
	전역변수, static변수

	<<스택>>
	지역변수, 매개변수

	<<힙>>
	그 외(동적 메모리 등) & 프로그래머가 직접 관리하는 메모리 공간이라 보면 되고, 따로 free함수를 호출해서 할당한 메모리를 꼭 해지해주어야~~

	메모리의 관점으로 보자 >>>> 
	

	
	int* p;
	p = (int*)malloc(100 * sizeof(int)); //p는 포인터임 >> 자료형은 int 이므로 포인터 자체 증감 연산시 4바이트 단위로 증감 & 포인터는 배열처럼 사용가능 & 100개의 정수를 입력할 수 있는 메모리 공간 할당
										 //프로그램 실행 도중에 메모리를 할당받을 수 있으며 사용후에는 반드시 메모리를 반납해야 함(free(p))
	




	//ex
	
	int* list;
	list = (int*)malloc(3 * sizeof(int));
	if (list == NULL)
	{
		printf("동적 메모리 할당 오류");
		exit(1);								>>>>>>>>>>>> * 동적메모리는 힙 영역에 할당되는 메모리
															 * 메모리 할당에 성공하면 공간의 첫 번째 주소값을 반환하지만 할당에 실패하면 NULL을 리턴하게 된다.
															 * exit()함수는 인자에 0이 아닌 숫자를 반환하면 프로그램을 종료한다고만 일단 알아두자
															 
	}
	list[0] = 10;
	list[1] = 20;
	list[2] = 30;
	free(list);
	







	//예제 : 학생의 수를 입력받아 적절하게 동적 할당 메모리 할당 -> 입력받은 성적 저장 후 출력
	
	int* score;
	int st;
	printf("학생의 수를 입력 : ");
	scanf("%d", &st);
	score = (int*)malloc(st * sizeof(int)); // ********* malloc의 인자는 메모리의 크기 자체임(바이트단위) --> ex) malloc(4)라고 하면 4바이트가 힙 영역에 할당되는 것
	if (score == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}
	for (int k = 0; k < st; k++)
	{
		printf("%d번 학생의 성적 : ", k+1);
		scanf("%d", (score + k));
	}
	for (int l = 0; l < st; l++)
		printf("학생 %d의 성적 : %d", l + 1, *(score + l));
	free(score);
	





	
	calloc함수 >> 메모리 할당과 동시에 모든 공간을 0으로 초기화 & malloc함수와 인자 전달 방식이 다름 & 마찬가지로 free 함수로 할당공간 해제
	realloc함수 >> 동적할당된 기존의 메모리 블록의 크기를 변경
	int *p
	p=(int *)calloc(5,sizeof(int))  >>> 첫 번째 인자 : 할당받을 공간의 개수, 두 번째 인자 : 할당받을 공간의 크기

	int *p;
	p=(int *)malloc(5*sizeof(int));
	p=(int *)realloc(7*sizeof(int));

	************************************** malloc, calloc, realloc 등의 함수는 stdlib.h의 헤더파일에 포함된 함수임
	





	//예제 : 2개의 정수를 저장하는 동적 메모라 할당 & 이 공간을 3 개의 정수를 저장할 수 있는 공간으로 변경

	
	int *list=(int *)malloc(sizeof(int)*2)
	int i;
	int *list_new;

	list[0]=10;
	list[1]=20;
	
	list_new=(int*)realloc(list, sizeof(int)*3);
	list_new[2]=30;
	....
	
	
	return 0;
}*/
