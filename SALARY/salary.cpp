#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int basic,allow;
    char grade;
    cin>>basic;
    cin>>grade;
    double hra,da,pf;
    hra=.2*basic;
    da=.5*basic;
    pf=.11*basic;
    if(grade=='A'){
        allow=1700;
    }else if(grade=='B'){
        allow=1500;
    }else allow=1300;
            int total=round((basic+hra+da+allow)-pf);
            cout<<total<<endl;
    return 0;
}