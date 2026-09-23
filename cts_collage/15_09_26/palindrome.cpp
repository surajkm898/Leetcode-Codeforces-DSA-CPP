#include <iostream>
using namespace std;
int main (){
    int n = 5734;
    int m = 0;
    int k ;
    for (int i=1;0<n;i++){
        m *= 10;
       m += n%10;
       n = n/10;
    }
    cout <<m;
}