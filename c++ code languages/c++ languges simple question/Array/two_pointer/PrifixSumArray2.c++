#include<iostream>
using namespace std;
void runningsum(vector<int>& v ){
    for(int i=1;i<v.size();i++){   //i =1;
        v[i]+=v[i-1];
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    runningsum(v);

    for(int ele :v){
        cout<<ele<<" ";
    }
}