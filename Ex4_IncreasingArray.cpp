#include<iostream>

#define ll long long
using namespace std;

int main(){
    ll n, sum=0;
    // cout << "Enter size of the array: ";
    cin >> n;
    ll list[n];
    for (ll i = 0; i < n; i++){
        cin >> list[i];
    };
    for (ll j = 1; j < n; j++){
        while (list[j] < list[j-1]){
            sum++;
            list[j]++;
        }
    }
    cout << sum;
    return 0;
}