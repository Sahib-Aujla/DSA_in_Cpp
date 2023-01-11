

#include <iostream>
#include <vector>

using namespace std;

int firstOcc(vector<int>& nums,int size,int target){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(nums[mid]==target){
        ans=mid;
        e=mid-1;
        }else if (nums[mid]<target){
            s=mid+1;
        }else if(nums[mid]>target){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& nums,int size,int target){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(nums[mid]==target){
        ans=mid;
        s=mid+1;
        }else if (nums[mid]<target){
            s=mid+1;
        }else if(nums[mid]>target){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

 vector<int> searchRange(vector<int>& nums, int target) {
        int size=nums.size();
        vector<int> indices;
        int firstO=firstOcc(nums,size,target);
        int lastO=lastOcc(nums,size,target);
        indices.push_back(firstO);
        indices.push_back(lastO);

        return indices;
    }




int main()
{

vector<int> arr={1,2,4,5,8,8,8,8,8,10,14,16};
vector<int> lol= searchRange(arr,8);
   cout<<lol[0]<<" "<<lol[1]<<endl; 
return 0;
}