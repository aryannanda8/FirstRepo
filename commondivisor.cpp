#include <iostream>
using namespace std;
int main()
{
    int a=25,b=15;
    // int temp;
    // if(a>b){
    //     temp=a;
    // }
    // else{
    //     temp=b;
    // }
    // for(int i=temp; i>1; i--){
    //     if(a%i==0 && b%i==0){
    //         cout<<i<<" ";
    //         break;
    //     }  
    // }
    int gcd;
    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<gcd<<"This is my modification";
    return 0;
}