#include <iostream>
using namespace std;
int main(){
    string kalimat, substring[1000];
    int n, c[1000] = {0}, b = 0, a = 1;
    cin >> kalimat;
    for(int i = 0; i < kalimat.length() + 1; i++){
        if(i == 0){
            substring[b] += kalimat[i];
        }else if(kalimat[i] != kalimat[i-1] && i != 0){
            c[b] = a;
            b++;
            substring[b] += kalimat[i];
            a = 1;
        }else{
            a++;
        }
    }
    for(int i = 0; i < b; i++){
        cout << substring[i] << " = ";
        cout << c[i] << endl;
    }
    return 0;
}