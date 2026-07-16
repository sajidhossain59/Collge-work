#include <stdio.h>

int search(int n){
      int arr[] = {11,15,20,53,54,48,5,9,2,50,23};
      int size = sizeof(arr)/sizeof(arr[0]);
      for(int i=0;i<size;i++){
          if(arr[i]==n){
               return i;
          }
      }
      return -1;
      
}


int main(){
    int check = search(60);

    if(check == -1){
     printf("Not found\n");
    }
    else{
     printf("Found at %d",check);
    }


}