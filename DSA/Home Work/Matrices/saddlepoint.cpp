#include <bits/stdc++.h>
using namespace std;


int saddlepoint(int mat[3][3]){
    int min_row,col_ind=0;
    for(int i=0;i<3;i++){
        min_row=mat[i][0];
        for(int j=1;j<3;j++){
            if(min_row>mat[i][j]){
                min_row=mat[i][j];
                col_ind=j;
            }
        }
        bool max=true;
        int k;
        for(k=0;k<3;k++){
            
            if(mat[k][col_ind]>min_row){
                max=false;
                break;
            }
        }
        if(max==true){
            cout<<"The saddlepoint is "<<min_row;
            return true;
        }
    }
    return false;
}


int main(){
    int matrix[3][3]={{7,9,10},
                      {5,5,6},
                      {6,8,9}};
    

    if(saddlepoint(matrix)==false){
        cout << "No saddlepoint";
    }
}