// write your code here
// Peyton Brownrigg Page 259 November 8, 2022
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  double a, b, c, discriminant;

  cout << "Enter a: "; cin >> a;

  cout << "Enter b: "; cin >> b;
  
  cout << "Enter c: "; cin >> c;

  discriminant = pow(b, 2.0) - 4 * a * c;

  if (discriminant == 0) {
    cout << "This equation has a single repeated root" << endl;
    cout << "x = " << -b / (2.0 * a) << endl; 
  }

  else if (discriminant > 0) {
    cout << "Two real roots." << endl; 
    cout << "x1 = " << (-b + pow(discriminant, 1.0 / 2.0)) / (2.0 * a) << endl;
    cout << "x2 = " << (-b - pow(discriminant, 1.0 / 2.0)) / (2.0 * a) << endl;
    
  }

  else {
    cout << "Two complex roots." << endl;
    return 0;
  }

  

  
  
}
