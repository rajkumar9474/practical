# write a program to insert an element at any specific position of a array.

import numpy as np
arr = np.zeros(50,int)
a = int(input("enter the number of elements of the array: "))
print("enter elements: ")
for i in range(0,a):
	arr[i] = int(input())

ele = int(input("enter element: "))
pos = int(input("enter position to enter: "))
if(pos > a+1):
	print("out of index")

else:
    for i in range(a,pos-2,-1):
        arr[i] = arr[i-1]
        
    arr[pos-1] = ele

    for i in range(0,a+1):
        print(arr[i],end=" ")
	
