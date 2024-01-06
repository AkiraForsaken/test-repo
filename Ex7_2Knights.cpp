#include <iostream>
#include <cmath>

#define ll long long
using namespace std;

int main(){
    ll N;
    cin >> N;
    for (ll n = 1; n <= N; n++){
        ll totalPositions = (pow(n,2) * (pow(n,2)-1)) / 2;
        ll attackingPositions = 4*(n-1)*(n-2);
        cout << totalPositions - attackingPositions << "\n";
    }
    return 0;
}

// attacking positions. divide the board into 2x3 and 3x2 rectangles
// 3x2 rectangles have: (n-1)*(n-2) numbers of possibilities and same with 2x3
// each rectangles have 2 positions for knights to attack each other --> 4*(n-1)*(n-2)