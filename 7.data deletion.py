# // write a program to delete an element from an array

import numpy as np
arr = np.zeros(50,int)
n = int(input("enter the number of elements of the array "))
print("enter elements ")
for i in range(0,n):
    arr[i] = int(input())

pos = int(input("enter the position to delete "))
if(pos>n):
	print("invalid position")
else:
    for i in range(pos-1,n):
        arr[i] = arr[i+1]

    print("the array is")
    for i in range(0,n-1):
        print(arr[i])