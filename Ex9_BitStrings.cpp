#include <iostream>
#include <cmath>

#define MOD 1000000000+7
using namespace std;

int main(){
    int n, result = 1;
    cin >> n;
    for (int i = 0; i < n; i++){
        result *= 2;
        result %= MOD;
    }
    cout << result;
    return 0;
}