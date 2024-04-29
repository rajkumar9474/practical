# write a program to implement interpolation search over an array
import numpy as np

a = int(input("enter the number of elements: "))
arr = np.zeros(a,int)
print("enter sorted elements: ")
for i in range(0,a):
    arr[i] = int(input())

val = int(input("enter element to search "))

low = 0;high = a-1
isfound = False
mid = 0

while(arr[low]<=val and low<=high and val<=arr[high]):
    mid = int(low+(((val-arr[low])*(high-low))/(arr[high]-arr[low])))
    if(val == arr[mid]):
        isfound = True
        break
    elif(arr[mid]>val):
        high = mid-1
    else:
        low = mid+1
if(not isfound):
    print("the element is not found")
else:
    print("the element is found at position",mid+1)
   