#include <iostream>
#define li long int
using namespace std;

int main(){
	li n, input, sum = 0;
	cin >> n;
	for (int i=0; i < n - 1; i++){
		cin >> input;
		sum += input;
	}
	cout << (n*(n+1)/2) - sum << endl;
	return 0;
}

//int main(){
//	unsigned int n, l=0, r, mid;
//	cin >> n;
//	r = n - 1;
//	unsigned int list[n]; 
//	for (int i=0; i < n - 1; i++){
//		cin >> list[i];
//	}
//	while (l<=r){
//		mid = (l+r)/2;
//		if (list[mid] != mid + 1 && list[mid - 1] == mid){
//			cout << (mid + 1);
//			break;
//		} 
//		if (list[mid] == mid + 1){
//			l = mid + 1;
//		}
//		else{
//			r = mid - 1;
//		}
//	}
//	return 0;
//}