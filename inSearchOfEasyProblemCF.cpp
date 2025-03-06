#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==0){
            continue;
        }else if(a==1){
            count++;
            break;
        }
    }
    if(count==0){
        cout<<"EASY";
    }else{
        cout<<"HARD";
    }
    return 0;
}
