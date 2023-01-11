#include<iostream>
#include <vector>
using namespace std;

int PivotIndex(vector<int>& arr,int start,int end){
    int s=start;
    int e=end;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int BinarySearch(vector<int>& arr,int start,int end,int target){
    int s=start;
    int e=end;
    int mid=s+(e-s)/2;
    
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }

        if(arr[mid]>target){
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}


    int search(vector<int>& nums, int target) {
        int n=nums.size()-1;
        int pivot=PivotIndex(nums,0,n);
            
        if(target >=nums[pivot]&& target<=nums[n]){
            return BinarySearch(nums,pivot,n,target);
        }else{
            return BinarySearch(nums,0,pivot-1,target);

        }
    }

int main(){
    vector<int> nums={4,7,8,1,2,3};

    int searched=search(nums,2);
    cout<<"answer "<<searched<<endl;

    return 0;
}