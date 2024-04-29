import numpy as np
count = 0
row_1 = 1

row = int(input("enter the number row: "))
col = int(input("enter the number col: "))
print("enter the elements of the sparse matrix: ")
arr = np.zeros((row,col),int)

for i in range(0,row):
    for j in range(0,col):
        arr[i][j] = int(input())
        if(arr[i][j] != 0):
            count += 1

sprs_arr = np.zeros((count+1,3),int)

sprs_arr[0][0] = row
sprs_arr[0][1] = col
sprs_arr[0][2] = count

for i in range(0,row):
    for j in range(0,col):
        if(arr[i][j] != 0):
            sprs_arr[row_1][0] = i
            sprs_arr[row_1][1] = j
            sprs_arr[row_1][2] = arr[i][j]
            row_1+=1

print("the sparse matrix is:")
print(sprs_arr)


# enter the number row:
# 2
# enter the number col:
# 4
# enter the elements of the sparse matrix:
# 1
# 0
# 4
# 0
# 1
# 9
# 0
# 0
# the sparse matrix is:
# 2 4 4
# 0 0 1
# 1 0 4
# 2 0 1
# 2 1 9