#include <bits/stdc++.h>
using namespace std;


int main(){
    int *arr = new int[5];
    int n,input,sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> input;
        arr[i] = input;
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    float x = (float)sum;
    float c = (float)n;
    cout << "Sum = " << (int)sum << endl;
    cout << "Average = " << x/c;

}