import numpy as np
arr = np.zeros(5,int)
len = 5
rear = -1
front = -1
def enqueue(a):
    global rear
    global front
    if((rear == -1)and(front == -1)):
        rear = front = 0
        arr[rear] = a
    else:
        if((rear+1)%len == front):
            print("overflow")
        else:
            rear = (rear+1)%len
            arr[rear] = a
    display()
        
def dequeue():
    global rear
    global front
    if((rear == -1)and(front == -1)):
        print("underflow")
    else:
        if(rear == front):
            rear = front = -1
            print()
        else:
            front = (front+1)%len
            display()

def display():
    global rear
    global front
    if(front<=rear):
        for i in range(front,rear+1):
            print(arr[i],end=" ")
    else:
        for i in range(front,len):
            print(arr[i],end=" ")
        for i in range(0,rear+1):
            print(arr[i],end=" ")
    print()

if __name__ == "__main__":
    r = True
    print("1 for enqueue\n2 for dequeue\n3 for exit");
    while(r):
        ch = int(input("enter choice: "))
        if(ch == 1):
                enqueue(int(input("enter element: ")))
        elif(ch == 2):
                dequeue()
        elif(ch == 3):
                r = False
        
"""
1 for enqueue
2 for dequeue
3 for exit
enter choice: 1
enter element: 43
43
enter choice: 1
enter element: 55
43 55
enter choice: 1
enter element: 23
43 55 23
enter choice: 1
enter element: 34
43 55 23 34
enter choice: 2
55 23 34
enter choice: 2
23 34
enter choice: 2
34
enter choice: 1
enter element: 75
34 75
enter choice: 1
enter element: 234
34 75 234
enter choice: 1
enter element: 54
34 75 234 54
enter choice: 1
enter element: 23
34 75 234 54 23
enter choice: 1
enter element: 236
overflow
34 75 234 54 23
enter choice: 2
75 234 54 23
enter choice: 2
234 54 23
enter choice: 2
54 23
enter choice: 2
23
enter choice: 2

enter choice: 3
"""