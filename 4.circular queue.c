// write a program to implement circular queue using array
#include<stdio.h>
#include<stdbool.h>
#define len 5
int rear = -1;
int front = -1;
int arr[len];
void enqueue(int a);
void dequeue();
void display();
int main(){
    int n,ch;
    bool r = true;
    printf("1 for enqueue\n2 for dequeue\n3 for exit\n");
    while(r){
        printf("enter choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("enter element: \n");
                scanf("%d",&n);
                enqueue(n);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                r = false;
                break;
        }
    }
}

void enqueue(int a){
    if(rear == -1 && front == -1){
        rear = front = 0;
        arr[rear] = a;
    }
    else{
        if((rear+1)%len != front){
            rear = (rear+1)%len;
            arr[rear] = a;
        }
        else{
            printf("overflow\n");
        }
    }
    display();
}

void dequeue(){
    if(rear == -1 && front == -1){
        printf("underflow\n");
    }
    else{
        if(rear == front){
            rear = front = -1;
            printf("\n");
        }
        else{
            front = (front+1)%len;
            display();
        }
    }
}

void display(){
    if(front<=rear){
        for(int i = front;i<=rear;i++){
            printf("%d ",arr[i]);
        }
    }
    else{
        for(int i = front;i<len;i++){
            printf("%d ",arr[i]);
        }
        for(int i = 0;i<=rear;i++){
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
}


/*
1 for enqueue
2 for dequeue
3 for exit
enter choice
1
enter element:
43
43
enter choice
1
enter element:
55
43 55
enter choice
1
enter element:
23
43 55 23
enter choice
1
enter element:
34
43 55 23 34
enter choice
2
55 23 34
enter choice
2
23 34
enter choice
2
34
enter choice
1
enter element:
75
34 75
enter choice
1
enter element:
243
34 75 243
enter choice
1
enter element:
54
34 75 243 54
enter choice
1
enter element:
23
34 75 243 54 23
enter choice
1
enter element:
236
overflow
34 75 243 54 23
enter choice
2
75 243 54 23
enter choice
2
243 54 23
enter choice
2
54 23
enter choice
2
23
enter choice
2

enter choice
2
underflow
enter choice
3
*/