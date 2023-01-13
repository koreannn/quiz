#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define SIZE 50
/*

스택 : 데이터를 저장하는 자료구조 >> 가장 나중에 입력한 데이터가 가장 먼저 출력됨 (Last in First out, LIFO >> 링크드 리스트와 다른점)
- 스택은 링크드 리스트의 한 종류로 볼 수 있다.
- 최상단 노드의 주소값으로 스택을 나타낸다.
- 스택의 구조를 생성, 관리하는 함수 : init(), is_empty(), print_stack(), << push(), pop() >> 이 두개는 필수적으로 필요
	push() : 
	pop() : 
	init() : 
	is_empty() : 
	print_stack() : 


*/

//링크드 리스트 도서관 프로그램 구현 예제(아래 스택 예제와 비교해야 함)

/*typedef struct node
{
	char title[SIZE];
	int year;
	struct node* link;
} NODE;

int main()
{

	NODE* list = NULL;
	NODE* prev, * p, * next;
	char buffer[SIZE];
	int year;

	while (1)
	{
		printf("책의 제목 입력(종료하려면 엔터)");
		gets_s(buffer, SIZE);
		if()
	}
}*/

int is_empty(Stack*) {
	
}

void pop(Stack*) //데이터를 여러 방법으로 활용할 수 있겠으나 우선 이 예제에서는 데이터를 화면에 출력하는 방식으로 pop()함수를 작성
{

}