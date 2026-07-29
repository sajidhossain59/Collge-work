#include <bits/stdc++.h>
using namespace std;



int mat[5][5]={ {0,0,0,4,0},
                {0,1,0,0,4},
                {0,0,0,0,0},
                {0,0,0,0,4},
                {0,1,0,0,0}
                };


int main(){
    int size=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(mat[i][j] != 0){
                size++;
            }
        }
    }

    int sparce_matrix[size][3];
    int k=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(mat[i][j]!=0){
                sparce_matrix[k][0]=i;
                sparce_matrix[k][1]=j;
                sparce_matrix[k][2]=mat[i][j];
                k++;
            }
        }
    }

    for(int i=0;i<k;i++){
        for(int j=0;j<3;j++){
            cout << sparce_matrix[i][j] << " ";
        }
        cout << endl;
    }


}