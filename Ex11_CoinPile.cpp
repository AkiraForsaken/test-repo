#include <iostream>
#include <vector>

#define li long int
using namespace std;

int main(){
    vector<li> lpile, rpile;
    int t;
    cin >> t;
    for (int j = 0; j < t; j++){
        cin >> lpile[j];
        cin >> rpile[j];
    }
    for (int i = 0; i < t; i++){
        if (lpile[i] + rpile[i] % 3 != 0){
            cout << "NO";
        } else{ 
            while (lpile[i] > 0 && rpile[i] > 0){
                if (lpile >= rpile){
                lpile[i] -= 2;
                rpile[i] -= 1;
            } else {
                rpile[i] -= 2;
                lpile[i] -= 1;
            }
        }
        if (lpile[i] == 0 && rpile[i] == 0){
           cout << "YES"; 
        } else {
            cout << "NO";
        }
    }
}
    return 0;
}
