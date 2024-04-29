// //write a program to implement interpolation search over an array
// #include<stdio.h>
// #include<stdbool.h>
// int interpolation(int arr[],int low,int high,int val){
//     int mid = low+(((val-arr[low])*(high-low))/(arr[high]-arr[low]));
//     bool isfound = false;
//     if(val == arr[mid]){
//         return mid;
//     }
//     else if(arr[mid]>val){
//         high = mid;
//     }
//     else{
//         mid = low;
//     }
//     if(!isfound){
//         return -1;
//     }
    
// }
// int main(){
//     int a,val;
//     printf("enter the number of elements: \n");
//     scanf("%d",&a);
//     int arr[a];
//     printf("enter sorted elements :\n");
//     for(int i = 0;i<a;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("enter element to search: \n");
//     scanf("%d",&val);
//     int low = 0,high = a-1;
//     bool isfound = false;
//     int mid;

//     while(arr[low]>val && low<=high && val<arr[high]){
//         mid = low+(((val-arr[low])*(high-low))/(arr[high]-arr[low]));
//         if(val == arr[mid]){
//             printf("%d",mid);
//             isfound = true;
//             break;
//         }
//         else if(arr[mid]>val){
//             high = mid-1;
//         }
//         else{
//             low = mid+1;
//         }
//     }
//     if(!isfound){
//         printf("the element is not found\n");
//     }
//     else{
//         printf("the element is found at position %d",mid+1);
//     }
// }