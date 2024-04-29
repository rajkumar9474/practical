//write a program to convert a sparse matrix into triplet

#include<stdio.h>

int main(){
    int col,row,count = 0,row_1 = 1;
    printf("enter the number row:\n");
    scanf("%d",&row);
    printf("enter the number col:\n");
    scanf("%d",&col);
    int arr[row][col];
    printf("enter the elements of the sparse matrix: \n");
    for(int i = 0;i<col;i++){
        for(int j = 0;j<row;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j] != 0)
                count++;
        }
    }
    int sprs_arr[count+1][3];

    sprs_arr[0][0] = row;
    sprs_arr[0][1] = col;
    sprs_arr[0][2] = count;

    for(int i = 0;i<col;i++){
        for(int j = 0;j<row;j++){
            if(arr[i][j] != 0){
                sprs_arr[row_1][0] = i;
                sprs_arr[row_1][1] = j;
                sprs_arr[row_1][2] = arr[i][j];
                row_1++;
            }
        }
    }
    printf("the sparse matrix is:\n");
    for(int i = 0;i<count+1;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",sprs_arr[i][j]);
        }
        printf("\n");
    }
}


/*
output:

enter the number row:
2
enter the number col:
4
enter the elements of the sparse matrix:
1
0
4
0
1
9
0
0
the sparse matrix is:
2 4 4
0 0 1
1 0 4
2 0 1
2 1 9

*/