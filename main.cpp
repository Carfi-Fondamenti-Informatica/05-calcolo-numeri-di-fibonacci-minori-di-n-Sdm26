#include <iostream>
using namespace std;

int main() {
    int c = 0, d = 1, s = 0, n,l=1;
    cin >> n;
    if(n>=2) {
        s=c+d;
        cout<<s<<endl;
        for (int i = 0; i <= (n-2); i++) {
            cout <<s<< endl;
            l=l+1;
            if(l>=n){
                break;
            }

            c = d;
            d = s;
            s = c + d;

        }

    }
    return 0;
}
