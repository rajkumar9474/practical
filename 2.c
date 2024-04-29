//write a program to merge 2 linear linked list.
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int info;
    struct node * add;
}node;

void add_head1(int a);
void add_head2(int a);
void merge();
void display_head1();
void display_head2();

node * head1 =  NULL;
node * head2 = NULL;



int main(){
    int n1,ele;
    printf("enter the number of elements to enter in the first linked list:\n");
    scanf("%d",&n1);
    printf("enter elements:\n");
    for(int i = 0;i<n1;i++){
        scanf("%d",&ele);
        add_head1(ele);
    }
    printf("elements in the first linked list is:\n");
    display_head1();

    printf("enter the number of elements to enter in the second linked list:\n");
    scanf("%d",&n1);
    printf("enter elements:\n");
    for(int i = 0;i<n1;i++){
        scanf("%d",&ele);
        add_head2(ele);
    }
    printf("elements in the second linked list is:\n");
    display_head2();

    printf("after merging the merged linked list is:\n");
    merge();
    display_head1();
    
}

void add_head1(int a){
    node * t1,*t2;
    t1 = (node *)malloc(sizeof(node));

    t1->info = a;
    t1->add = NULL;

    if(head1 == NULL){
        head1 = t1;
    }
    else{
        t2 = head1;
        while(t2->add != NULL){
            t2 = t2->add;
        }
        t2->add = t1;
    }
}

void add_head2(int a){
    node * t1,*t2;
    t1 = (node *)malloc(sizeof(node));

    t1->info = a;
    t1->add = NULL;

    if(head2 == NULL){
        head2 = t1;
    }
    else{
        t2 = head2;
        while(t2->add != NULL){
            t2 = t2->add;
        }
        t2->add = t1;
    }
}

void display_head1(){
    node * t1;
    if(head1 == NULL){
        printf("empty\n");
    }
    else{
        t1 = head1;
        while(t1!=NULL){
            printf("%d ",t1->info);
            t1 = t1->add;
        }
        printf("\n");
    }
}

void display_head2(){
    node * t1;
    if(head2 == NULL){
        printf("empty\n");
    }
    else{
        t1 = head2;
        while(t1!=NULL){
            printf("%d ",t1->info);
            t1 = t1->add;
        }
        printf("\n");
    }
}

void merge(){
    // merging head1 with head2
    if(head1 == NULL){
        head1 = head2;
    }
    else{
        node * t1;
        t1 = head1;
        while(t1->add != NULL){
            t1 = t1->add;
        }
        t1->add = head2;
    }
}


/*
output:

enter the number of elements to enter in the first linked list:
3
enter elements:
12
44
23
elements in the first linked list is:
12 44 23
enter the number of elements to enter in the second linked list:
4
enter elements:
17
54
36
77
elements in the second linked list is:
17 54 36 77
after merging the merged linked list is:
12 44 23 17 54 36 77
*/