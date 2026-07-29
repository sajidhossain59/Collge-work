#include <bits/stdc++.h>
using namespace std;


int main(){
    int addition_mat[5][5];
    int addition_mat_size=0;

    int mata[5][5]={{0,0,0,4,0},
                    {0,4,0,0,0},
                    {0,5,4,0,0},
                    {0,0,0,0,3},
                    {0,4,0,0,0}
                    };


    int matb[5][5] ={{0,0,0,0,3},
                     {0,4,0,0,0},
                     {0,0,0,7,0},
                     {0,0,0,0,0},
                     {0,0,4,0,0}
                    };


    

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            addition_mat[i][j]= mata[i][j]+matb[i][j];
        }
    }
    for(int i=0; i<5;i++){
        for(int j=0;j<5;j++){
            if(addition_mat[i][j]!=0){
                addition_mat_size++;
            }
        }   
    }

    int sparse_add_mat[addition_mat_size+1][3];
    int entry=1;
    sparse_add_mat[0][0]=5;
    sparse_add_mat[0][1]=5;
    sparse_add_mat[0][2]=addition_mat_size;


    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(addition_mat[i][j]!=0){
                sparse_add_mat[entry][0]=i;
                sparse_add_mat[entry][1]=j;
                sparse_add_mat[entry][2]=addition_mat[i][j];
                entry++;
            }
        }
    }

    for(int i=0;i<addition_mat_size+1;i++){
        for(int j=0;j<3;j++){
            cout<< sparse_add_mat[i][j]<<" ";
        }
        cout<<endl;
    }

    


}