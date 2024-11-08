// ADDING TWO POLYNOMIALS
// a[]= 5x^2 + 4x + 2 
// b[]= 3x^2 + 6x + 7
// added polynomial =
// 8x^2 + 10x + 9
#include<iostream>
using namespace std;

int max(int m,int n){
    return (m>n) ? m : n;
}

int *add(int a[],int b[],int m,int n){
    int size=max(m,n);
    int *sum = new int[size];
       
    for(int i=0;i<m;i++)
    sum[i]=a[i];

     for(int i=0;i<m;i++)
    sum[i]+=b[i];

    return sum;
}

void printPoly(int poly[],int n){
    int i;
    for(i=n-1;i>=0;i--){

    cout<<poly[i];

    if(i!=0)
    cout<<"X^"<<i; // x^2 , x^1

    if(i!=0)
    cout<<"+";
     }
    

}

int main(){
    int a[]={2,4,5};
    int b[]={7,6,3};

    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);
    
    printPoly(a,m);
    cout<<"\n";
    printPoly(b,n);
    cout<<"\n";

    int *sum = add(a,b,m,n);
    int size=max(m,n);
    printPoly(sum,size);

    return 0;
}