#include <iostream>
using namespace std;
int main(){
    string kalimat, judul[1000], biasa[1000];
    int a = 0;
    getline(cin, kalimat);
    for(int i = 0; i < kalimat.length(); i++){
        if(kalimat[i] == ' '){
            a++;
        }else if(kalimat[i] == '\0'){
            break;
        }else{
            judul[a] += kalimat[i];
            biasa[a] += kalimat[i];
        }
    }
    for(int i = 0; i <= a; i++){
        for(int j = 0; j < judul[i].length(); j++){
            if(i == 0 && j == 0){
                judul[i][j] = toupper(judul[i][j]);
                biasa[i][j] = toupper(biasa[i][j]); 
            }else if(j == 0){
                judul[i][j] = toupper(judul[i][j]);
            }else{
                judul[i][j] = tolower(judul[i][j]);
                biasa[i][j] = tolower(biasa[i][j]);
            }
        }
    }
    cout << "Format Judul : ";
    for(int i = 0; i <= a; i++){
        cout << judul[i] << " ";
    }
    printf("\nFormat Biasa : ");
    for(int i = 0; i <= a; i++){
        cout << biasa[i] << " ";
    }
    return 0;
}