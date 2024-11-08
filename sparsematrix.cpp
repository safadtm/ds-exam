// SPARSE MATRIX PROGRAM
// NORMAL MATRIX =
// 1 0 0  
// 0 5 0
// 0 0 1
// SPARSE MATRIX =
// 3 3 3 
// 0 0 1 
// 1 1 5
// 2 2 1
#include<iostream>
using namespace std;

class Sparse{
    int a[10][10];
    int b[10][3];
    int m; // row
    int n; // column

    public: void insertMatrix();
            void displayMatrix();
            void convertMatrix();
            void displaySparse();
};

void Sparse::insertMatrix(){
    cout<<"Enter the rows and columns of the matrix: \n";
    cin>>m>>n;

    cout<<"Enter the normal matrix values: \n";
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
}

void Sparse::displayMatrix(){
    cout<<"Normal Matrix Display: \n";
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

void Sparse::convertMatrix(){
    int k=0; // non zero values store

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            // a[0][0] = 1 k=1
            // a[0][1] = 0 k=1
            // a[0][2] = 0 k=1
            // a[1][0] = 0 k=1
            // a[1][1] = 5 k=2
            // a[1][2] = 0 k=2
            // a[2][0] = 0 k=2
            // a[2][1] = 0 k=2
            // a[2][2] = 1 k=3
         if(a[i][j]!=0){
            k++;
            b[k][0]=i; 
            b[k][1]=j; 
            b[k][2]=a[i][j]; 
         }   

        }
    }

    b[0][0]=m; //3
    b[0][1]=n; //3
    b[0][2]=k; //3

}

void Sparse::displaySparse(){
     cout<<"Sparse Matrix Display: \n";
     for(int i=0;i<=b[0][2];i++){
        for(int j=0;j<3;j++){
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

int main(){
    Sparse obj;
    obj.insertMatrix();
    obj.displayMatrix();
    obj.convertMatrix();
    obj.displaySparse();
    return 0;
}