#include <iostream>
using namespace std;
int main (){
    int n = 5734;
    int m = 0;
    int k;
    for (int i=1;0<n;i++){
        k = (n%10);
        n = n/10;
        k += m;
        m = *10;
    }
}