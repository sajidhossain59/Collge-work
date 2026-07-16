#include <stdio.h>


int sqroot (int n){
     int s=0,e=n,ans;
     while(s<=e){
          int mid=(s+e)/2;
          if(mid*mid == n){
               ans=mid;
               return ans;
          }
          else if(mid*mid>n){
               e=mid-1;
          }
          else{
               s=mid+1;
          }
     }
     return -1;
}


int main(){
     int check = sqroot(15);
     if(check == -1){
          printf("Not found");
     }
     else{
          printf("Square root is:%d",check);
     }
}