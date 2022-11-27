#include <iostream>
using namespace std;

int main() {
    int c = 0, d = 1, s = 0, n;
    cin >> n;
    if(n>=2) {
        while(n>=2){
            s=1;
            c=0;
            d=1;
            cout << s << endl;
        for (int i = 0; i <= (n-2); i++) {
            cout <<s<< endl;
            c = d;
            d = s;
            s = c + d;
            }
        n--;
        }

    }
    return 0;
}
