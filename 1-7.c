#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    int data;
    struct _node *next;
}node;

node *make_node(int data){
    node *newnode = malloc(sizeof(node));
    newnode -> data = data;
    newnode -> next = NULL;

    return newnode;
}

void traversal_first(node *head){
    if (head == NULL){
	return ;
    }

    printf("[%d]", head -> data);
    traversal_first(head -> next);
}

void traversal_last(node *head){
    if (head == NULL){
	return ;
    }

    traversal_last(head -> next);
    printf("[%d]", head -> data);

}


int main(){
    node *head = make_node(1);
    node *a = make_node(2);
    node *b = make_node(3);
    node *c = make_node(4);


    head -> next = a;
    a -> next = b;
    b -> next = c;
    c -> next = NULL;

    traversal_first(head);
    printf("\n");
    traversal_last(head);





}
