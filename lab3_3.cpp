#include <iostream>
using namespace std;
int main(){
    float  a , b=2 , ans = 0;
    while(b <= 69){
        a = 1/b;
        ans = ans+a;
        b = b+1;
    }
    cout << ans;
    return 0; 
}