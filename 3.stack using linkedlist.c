//write a program to implement stack using linear linked list.

#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int info;
    struct node * add;
}node;

node * head = NULL;
void push(int a);
void display();

void push(int a){
    node *t1,* t = (node *)malloc(sizeof(node));
    t -> info = a;
    t -> add = NULL;
    if(head == NULL){
        head = t;
    }
    else{
        t1 = head;
        while(t1->add != NULL){
            t1 = t1->add;
        }
        t1->add = t;
    }
    display();
}

void pop(){
    node * t;
    t = head;
    if(head == NULL){
        printf("underflow\n");
    }
    else if((head->add)!= NULL){
        while((t->add)->add != NULL){
            t = t->add;
        }
        t->add = NULL;
        display();
    }
    else if(head->add == NULL){
        head = NULL;
        display();
    }

}

void display(){
    if(head == NULL){
        printf("empty\n");
    }
    else{
        node * t;
        t = head;
        while(t != NULL){
            printf("%d ",t->info);
            t = t->add;
        }
        printf("\n");
    }
}

int main(){
    push(23);
    push(32);
    push(95);
    push(26);
    push(60);
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    push(85);
    push(13);
    push(37);
}

/*
23
23 32
23 32 95
23 32 95 26
23 32 95 26 60
23 32 95 26
23 32 95
23 32
23
empty
underflow
85
85 13
85 13 37
*/