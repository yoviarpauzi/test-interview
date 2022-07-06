#include <bits/stdc++.h>
#define max 9999
using namespace std;
struct data{
    int x, y;
}data[max];
int main(){
    int n, x = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> data[i].x >> data[i].y;   
    }
    for(int i = 0; i < n-1; i++){
        x += (data[i].x * data[i+1].y) - (data[i + 1].x * data[i].y);
    }
    cout << abs(x / 2);
    return 0;
}