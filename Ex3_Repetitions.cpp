#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    string txt;
    long long maxr = 1, cc = 1;
    char c;
    // cout << "Enter string of n characters: ";
    //getline (cin, txt);
    cin >> txt;
    c = txt[0];
    for (long long i = 1;i < txt.length(); i++){
        if (txt[i] == c){
            cc += 1; 
        }
        else{
            maxr = max(cc,maxr);
            cc = 1;
            c = txt[i];
        }
    }
    // maxr = max(cc,maxr);
    if (maxr <= cc){
        maxr = cc;
    }
    cout << maxr;
    return 0;
}