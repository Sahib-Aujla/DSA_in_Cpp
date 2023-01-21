#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr,int mid,int n,int m){
    int studentCount=1;
    int pageNumber=0;
    for(int i=0;i<n;i++){
        if(pageNumber+arr[i]<=mid){
            pageNumber+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
        }
    }
    return true;
}

int bookAllocation(vector <int> arr,int n,int m){

    int s=0;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
int ans=-1;
    while(s<=e){
        if(isPossible(arr,mid,n,m)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main(){
    vector<int> arr{10,20,30,40};
    int ans=bookAllocation(arr,4,2);
    cout<<"Answer ->  "<<ans<<endl;
    return 0;
}

