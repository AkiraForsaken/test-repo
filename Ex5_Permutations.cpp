#include <iostream>
#include <math.h>
#include <vector>
#define li long int
using namespace std;

bool check(vector<int> per){
    for (int i = 1; i < per.size(); i++){
        if (abs(per[i]-per[i-1]) <= 1){
            return false;
        }
    } 
    return true;
}
int main(){
    int n;
    // cout << "Enter n: ";
    cin >> n;
    // if (n==1){
    //     cout << n; 
    // }
    // if (n==2 || n==3){
    //     cout << "NO SOLUTION";
    // }
    vector<int> per(n);
    int start_e = 2;
    for (int i = 0; i < n/2; i++){
        per[i] = start_e;
        start_e += 2;
    };
    int start_o = 1;
    for (int j = round(n/2); j < n; j++){
        per[j] = start_o;
        start_o += 2;
    };
    if (check(per)){
        for (int i = 0; i < n; i++){
            cout << per[i] << " ";
        }
    } else{
        cout << "NO SOLUTION";
    }
    return 0;
}