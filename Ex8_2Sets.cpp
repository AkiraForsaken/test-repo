#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, sum;
    // cout << "Enter n: ";
    cin >> n;
    sum = n*(n+1)/2;
    if (sum % 2){
        cout << "NO ";
        return(0);
    } else {
        cout << "YES" << "\n";
    }
    vector < int > setA;
    vector < int > setB;
    int first = 1;
    int last = n;
    if (n % 2){ //n is odd
        setA.push_back(1);
        setA.push_back(2);
        setB.push_back(3);
        first = 4;
    }

    while (first < last){
        if (first % 2){
            setA.push_back(first);
            setA.push_back(last);      
        } else {
            setB.push_back(first);
            setB.push_back(last);
        }
        first++;
        last--;
    }
    cout << setA.size() << "\n";
    for (int i = 0; i < setA.size(); i++){
        cout << setA[i] << " ";
    }
    cout << "\n" << setB.size() << "\n";
    for (int i = 0; i < setB.size(); i++){
        cout << setB[i] << " ";
    }
    return 0;
}