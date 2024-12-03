#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={2,3,4,5};
    cout<<"size of an array is= "<<arr.size()<<endl;
    //foreach loop
    for(int value : arr){
       cout<<value << " ";
    }
    cout<<endl;
    //push_back operation
    arr.push_back(230);
    arr.push_back(40);
    arr.push_back(0);
    cout<<"size of an array is= "<<arr.size()<<endl;
    //foreach loop
    for(int value : arr){
       cout<<value << " ";
    }
    cout<<endl;
    //delete opetration in vector
    //pop_back operation
    arr.pop_back();
     cout<<"size of an array is= "<<arr.size()<<endl;
    //foreach loop
    for(int value : arr){
       cout<<value << " ";
    }

}