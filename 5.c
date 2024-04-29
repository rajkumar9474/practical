// write a program to implement recursive binary search operation with unsorted elements.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// void binary(int arr[],int low,int high,int ele){
//     int mid = (low+high)/2;
//     bool isfound = false;

//     if(arr[mid] == ele){
//         printf("%d",mid+1);
//         isfound = true;
//         return;
//     }
//     else if(arr[mid]>ele){
//         high = mid-1;
//         // binary(arr,low,mid-1,ele);
//     }
//     else if(arr[mid]<ele){
//         low = mid+1;
//         // binary(arr,mid+1,high,ele);
//     }
//     return binary(arr,low,high,ele);
//     if(!isfound){
//         printf("not found\n");
//         return;
// }
// }
void bin(int arr[],int low,int high,int ele,bool isfound);



int main(){
    int arr[] = {1,2,3};
    int low = 0;
    int high = (sizeof(arr)/sizeof(arr[0]))-1;
    int mid;
    int ele = 4;
    bin(arr,low,high,ele,isfound);
    // bin()
    // while(low<=high){
    //     mid = (low+high)/2;
    //     if(arr[mid] == ele){
    //         printf("%d",mid+1);
    //         isfound = true;
    //         break;
    //     }
    //     else if(arr[mid]<ele){
    //         low = mid+1;
    //     }
    //     else if(arr[mid]>ele){
    //         high = mid-1;
    //     }
    // }
    // if(!isfound){
    //     printf("not found");
    // }
}


void bin(int arr[],int low,int high,int ele){
    
    if(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == ele){
            printf("%d",mid+1);
            isfound = true;
            return;
        }
        else if(arr[mid]<ele){
            low = mid+1;
        }
        else if(arr[mid]>ele){
            high = mid-1;
        }
        if(!isfound){
            printf("not found");
        }
        bin(arr,low,high,ele,isfound);
    }
}