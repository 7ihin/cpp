#include<iostream>
#include<string>

using namespace std;

struct NODE     // 자기참조 구조체, 변수정의
{
	string name;
	int id;
	float salary;
	NODE* p_next;
};


void input_node()     // 정보입력
{
	struct NODE* node1;
	node1->name = "Student1";
	node1->id = 1;
	node1->salary = 1;


	struct NODE* node2;
	node2->name = "Student2";
	node2->id = 2;
	node2->salary = 2;

	node1->p_next = node2;

	struct NODE* node3;
	node3->name = "Student3";
	node3->id = 3;
	node3->salary = 3;

	node2->p_next = node3;

	struct NODE* node4;
	node4->name = "Student4";
	node4->id = 4;
	node4->salary = 4;

	node3->p_next = node4;
	node4->p_next = NULL;
}

void print_node()     // 출력
{
	struct NODE head
	struct NODE* curr = head->p_next;
	while (curr != NULL)
	{
		printf("Name: %s\n ID: %d\n Salary: %f\n", curr->name, curr->id, curr->salary);
		curr = curr->p_next;
	}
}