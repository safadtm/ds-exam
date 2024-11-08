// BINARY SEARCH
// 56 21 23 84 10
// sorted array
// 10 21 23 56 84 
// search element = data(84)
// min=10 , max=84
// mid=(min+max)/2
// mid
// mid (23) == data (84) wrong case
// data (84) < mid (23) wrong case || sucessfull case max=mid-1
// data (84) > mid(23) sucessfull case min=mid+1
//  56 84

#include<iostream>
using namespace std;
int main(){
    int a[10];
    int size,temp;
    cout<<"Enter the array size : \n";
    cin>>size;
    cout<<"Enter the array elements : \n";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }

    cout<<"Array beofre sorting : \n";
    for(int i=0;i<size;i++){
        cout<<a[i]<<"\t";
    }

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            // sorting 
            if(a[i]>a[j]){
                // 56 > 21
                temp = a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

    cout<<"\nSorted array : \n";
    for(int i=0;i<size;i++){
        cout<<a[i]<<"\t";
    }

    int data,min,max,mid;

    min=0;
    max=size-1;
    mid=(min+max)/2;

    cout<<"\nEnter the element for searching : ";
    cin>>data;

    while (min<=max)
    {
        if(a[mid]==data){
            cout<<"Searched element "<<data<<" found at " << mid+1<<" position";
            break;
        }else if(data<a[mid]){
            // left array
            max=mid-1;
        }else{
            // right array 
            min=mid+1;
        }

        mid=(max+min)/2;
    }
    
    if(min>max){
        cout<<"Data not found in array";
    }

    return 0;
}
