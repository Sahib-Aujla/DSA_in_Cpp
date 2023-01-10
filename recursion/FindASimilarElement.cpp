#include <iostream>
using namespace std;


bool similarEl(int arr[],int n,int i,int x){
    if(i==n){
        return false;
    }

    return arr[i]==x || similarEl(arr,n,i+1,x);
}

int main(){

    int arr[]={1,2,3,4,67,42,53,6,2};

    int n=9;
    int x=6;


bool ans=similarEl(arr,n,0,x);

cout<<ans<<endl;
    return 0;
}