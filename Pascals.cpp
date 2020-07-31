
#include <iostream>
using namespace std;


//the value of each index is calculated as nCr where n and r are index of the matrix


//Program to calculate factorial
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

//Program to calculate combination
int combination(int n,int r){
    if(n>=r)
        return fact(n)/(fact(r)*fact(n-r));
    else
        return 0;
}

int main(){

    int matrix[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
                    matrix[i][j]=combination(i,j);

        }
    }
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<matrix[i][j]<<"  ";
        }
        cout<<"\n";
    }


    return 0;


}
