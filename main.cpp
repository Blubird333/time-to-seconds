#include <bits/stdc++.h>
#include "Time.cpp"
using namespace std;

int main(){
    int a,b,c;
    string A,B,C;
    cout<<"Hours?";
    cin>>a;
    cout<<"Minutes?";
    cin>>b;
    cout<<"Seconds?";
    
    if(a<10){
        A="0"+ to_string(a);
    }else{
        A=to_string(a);
    }
    if(b<10){
        B="0"+ to_string(b);
    }else{
        B=to_string(b);
    }
    if(c<10){
        C="0"+ to_string(c);
    }else{
        C=to_string(c);
    }
    
    cout<<"The time is = "<<A<<":"<<B<<":"<<C<<endl;
    
    Time time1;
    int total_time_in_sec = time1.totalsec(a,b,c);
    
    cout<<"Time in total seconds: "<<total_time_in_sec;
    
    
}
