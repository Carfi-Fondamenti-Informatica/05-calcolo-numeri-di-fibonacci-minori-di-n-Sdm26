int main() {
    int c = 0, d = 1, s = 0, n;
    cin >> n;
    if(n>=2) {
        s=c+d;
        cout<<s<<endl;
        for (int i = 0; i <= (n-2); i++) {
            cout <<s<< endl;
            c = d;
            d = s;
            s = c + d;
            if (s>n){
                break;
            }
        }

    }
    return 0;
}
