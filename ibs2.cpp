#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[]={2,4,6,8,10},l=0,h=4,x=8;
    while(l<=h){
        int m=(l+h)/2;
        if(a[m]==x){ cout<<"Found"; break; }
        else if(x<a[m]) h=m-1;
        else l=m+1;
    }
}
