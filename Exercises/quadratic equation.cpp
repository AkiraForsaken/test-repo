#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, c, delta;
    cin >> a >> b >> c;
    delta = pow(b,2) - 4*a*c;
    if (a == 0){
        if (b == 0){
            string result = (c == 0 ? "Infinitely many solutions!" :  "No solution!");
            cout << result;
        } else {
            double x = -b/c;
            cout << x;
        }
    } else if (delta < 0){
        /* double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-delta) / (2 * a);
        cout << realPart << " + " << imaginaryPart << "i" << endl;
        cout << realPart << " - " << imaginaryPart << "i" << endl; */
        cout << "No solution!";
    } else if (delta > 0){
        double x1 = (-b + sqrt(delta))/(2*a);
        double x2 = (-b - sqrt(delta))/(2*a);
        if (x1 < x2){
            cout << x1 << " " << x2;
        } else {
            cout << x2 << " " << x1;
        }
    } else {
        double x = -b / (2*a);
        cout << x;
    }
    return 0;
}