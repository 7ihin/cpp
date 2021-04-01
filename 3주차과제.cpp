#include <iostream>

using namespace std;

struct node
{
    string name;
    int id = 0;
    float salary = 0;
    struct node* p_next = 0;
};

node head;
node node1, node2, node3, node4;

void input_node()
{
    node1.name = "권민재";
    node1.id = 202131401;
    node1.salary = 1;
    head.p_next = &node1;

    node2.name = "최재혁";
    node2.id = 202131421;
    node2.salary = 2;
    node1.p_next = &node2;

    node3.name = "윤호준";
    node3.id = 202131464;
    node3.salary = 3;
    node2.p_next = &node3;

    node4.name = "박준혁";
    node4.id = 202131434;
    node4.salary = 4;
    node4.p_next = NULL;
    node3.p_next = &node4;
}

void print_node()
{
    node* curr = head.p_next;
    while (curr != NULL)
    {
        cout << curr->name << endl; 
        cout << curr->id << endl;
        cout << curr->salary << endl;
        curr = curr->p_next;
    }
}

int main()
{
    input_node();
    print_node();
    return 0;
}
