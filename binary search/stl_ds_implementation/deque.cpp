#include<iostream>
#include <deque>

using namespace std;

int main(){

    deque<int> d;

    //pushing back
    d.push_back(1);

    //pushing front
    d.push_front(2);

    for(int i: d){
        cout<<i<<endl;
    }

    cout<<"Is Empty "<<d.empty()<<endl;

    cout<<"size "<<d.size()<<endl;

cout<<"before erase "<<endl;
for(int i: d){
        cout<<i<<endl;
    }
    d.erase(d.begin(),d.begin()+1);
cout<<"after erase "<<endl;


    return 0;
}