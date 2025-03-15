#include <iostream> 
#include <cmath> 
using namespace std; 
int main(){ 
 setlocale(0, ""); 
 double a = 0, x, b, F = x, n = 2; 
 cout << "введите значение x (при |x|<inf): "; 
 cin >> x; 
 cout << "введите точность: "; 
 cin >> b; 
 do { 
  a = pow(x, n) / tgamma(n); 
  n += 2; 
  F += a; 
 } while (fabs(а) < b); 
 cout << "приблизительное значение сhx: " << F << endl; 
 cout << "точное значение сhx: " << cosh(x) << endl; 
 return 0; 
}