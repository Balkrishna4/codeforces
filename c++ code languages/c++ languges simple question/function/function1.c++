#include<iostream>
using namespace std;
void star(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
int main(){
    int a , b , c;
    cin>>a>>b>>c;
    star(a);
    star(b);
    star(c);
}

  