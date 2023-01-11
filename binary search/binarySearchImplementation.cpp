#include <iostream>
using namespace std;


int binarySearch(int *arr,int size,int x){

    int start=0;
    int end=size-1;
    int mid=start +(end-start)/2;

    while(start<=end){
        if(arr[mid]==x){
           
            return mid;
        }
            

        if(arr[mid]<x){
            start=mid+1;
        }else{
            end=mid-1;
        }

         mid=start +(end-start)/2;

    }
    return -1;
}


int main(){

    int even[]={2,4,5,8,9,11,12,55};
    int odd[]={2,4,5,8,9,11,12,55,88,332,5555};

    int index=binarySearch(even,8,12);
    cout<<"index for the even array   "<<index<<endl;

      index=binarySearch(odd,11,332);
    cout<<"index for the odd array   "<<index<<endl;
    


    return 0;
}