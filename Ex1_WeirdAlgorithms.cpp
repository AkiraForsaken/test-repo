#include <iostream>
#include <cmath>

#define li long int
using namespace std;

int main(){
	li n=-1;
	while (n<=0){
		// cout << "Enter a positive integer: ";
		cin >> n;
	};
	while (n!=1){
		cout << n << " ";
		if (n%2==0){
			n = n/2;
		}else {
			n = (n*3)+1;
		};
	};
	cout << n;
	return 0;
}