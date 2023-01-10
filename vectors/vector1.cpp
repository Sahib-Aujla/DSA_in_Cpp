//finding the last occurence of an element

#include <iostream>
#include <vector>

using namespace std;

int lastOccurence(vector<int> &v,int x){
    int index=-1;
    for(int i=v.size();i>=0;i--){
        if(v[i]==x){
            index=i;
            break;
        }
    }
    return index;
}


int main()
{

    vector <int> v={1,2,3,4,6,7,3,2,5,1,3,5,3,6,1};
    int index=lastOccurence(v,1);
cout<<"last occurence  "<<index<<endl;
return 0;
}