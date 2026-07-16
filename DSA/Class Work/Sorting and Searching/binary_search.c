#include <stdio.h>


int search(int n){
      int arr[] = {11,15,20,53,54,48,5,9,2,50,23};
      int c;
      int size = sizeof(arr)/sizeof(arr[0]);
      for(int i=0;i<size-1;i++){
          for(int j=0;j<size-i-1;j++){
               if(arr[j]>arr[j+1]){
                    c=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=c;
               }
          }
      }
      for(int i=0;i<size;i++){
          printf("%d ",arr[i]);
      }

      printf("\n");

      int low=0,high=size;
      while(low<=high){
          int mid=(low+high)/2;
          if(arr[mid]<n){
               low=mid+1;
          }
          else if(arr[mid]>n){
               high=mid-1;
          }
          else if(arr[mid]==n){
               return mid;
          }
      }
      return -1;
     
}


int main(){
     
     int check = search(53);

    if(check == -1){
     printf("Not found\n");
    }
    else{
     printf("Found at %d",check);
    }

}