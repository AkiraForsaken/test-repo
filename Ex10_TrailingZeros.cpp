#include <iostream>
#include <cmath>

#define ll long long
using namespace std;

// Function to find factorial 
// of given number
// unsigned int factorial(unsigned int n)
// {
//     if (n == 0 || n == 1)
//         return 1;
//     return n * factorial(n - 1);
// }

int main(){
    ll n, count=0;
    cin >> n;
    for (ll i = 5; (n / i) >= 1; i*=5){
        count += n / i;
    }
    cout << count;
    return 0;
}
