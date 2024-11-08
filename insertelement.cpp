// insert element into an already existing array
// 56,24,85,32,45
// [0, 1, 2, 3, 4]
// [0, 1, 2, 3, 4, 5]
// value = 100
// position = 3
// 56,24,100,85,32,45
// [0, 1, 2, 3, 4, 5]
#include<iostream>
using namespace std;

int main(){
    int a[10],size,value,pos;

    cout<<"Enter the size of the array : \n";
    cin>>size;

    cout<<"Enter the elements for the array : \n";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }

     cout<<"Elements in the array before adding new element : \n";
    for(int i=0;i<size;i++){
        cout<<a[i]<<"\t";
    }

    cout<<"\nEnter the new value : \n";
    cin>>value;
    cout<<"Enter the position you want to insert the element in the array : ";
    cin>>pos;
    
    pos -=1;

    
    for(int i=size-1;i>=pos;i--){
       // i=4 4>=2 a[5]=a[4]
       // i=3 3>=2 a[4]=a[3]
       // i=2 2>=2 a[3]=a[2]
       // a[2]
        a[i+1]=a[i];
    }
    // a[2] = value
    a[pos]=value;
    size++;

    cout<<"Elements in the array after adding new element : \n";
    for(int i=0;i<size;i++){
        cout<<a[i]<<"\t";
    }

    return 0;
}