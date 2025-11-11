#include <iostream>
using namespace std;
template <class T>
class Calculator {
public:

T add(T a, T b) { return a + b; }
T sub(T a, T b) { return a - b; }
T mul(T a, T b) { return a * b; }
T divide(T a, T b) {
if (b == 0) {
cerr << "Error: Division by zero. Returning 0.\n";
return 0;
}
return a / b;
}
};
int main() {
Calculator<int> ci;
cout << "Int add: " << ci.add(15, 4) << ", div: " << ci.divide(22,3) << endl;
Calculator<double> cd;
cout << "Double mul: " << cd.mul(12.5, 14.0) << ", sub: " << cd.sub(5.2, 3.2) <<
endl;
return 0;
}