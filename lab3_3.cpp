#include <iostream>
using namespace std;
int main(){
    float  a , b=6 , ans = 0;
    while(b <= 19){
        a = 1/b;
        ans = ans+a;
        b = b+1;
    }
    cout << ans;
    return 0; 
}