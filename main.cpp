#include <iostream>
using namespace std;

int main(){
    int n=0, i=0, l=1, k=0;
    cin >> n;
    cout << 1 <<endl;

    while (k<=n) {

        k=i+l;
        if(k<=n){
            cout << k <<endl;
        }
        i=l;
        l=k;
    }
    return 0;
}
