//difference between Sum of even indices and odd indices

#include <iostream>
#include <vector>

using namespace std;




int main()
{

    vector <int> v={1,2,1,2,1,2,1,3};
   int evenSum=0;
   int oddSum=0;
    for(int i=0; i<v.size(); i+=2){
        if(i+1<v.size()){
            
            oddSum+=v[i+1];
        }
        evenSum+=v[i];
    }

cout<<"evenSum  "<<evenSum<<"  oddSum "<<oddSum<<endl;
cout<<"difference is  "<<+(evenSum-oddSum)<<endl;



    return 0;
}