#include <iostream>
using namespace std;
class Account {
public:
int accNo;
string name;
float balance;
void display() {
cout << "Account No: " << accNo
<< ", Name: " << name
<< ", Balance: " << balance << endl;
}
};
int main() {
Account a1, a2;

a1.accNo = 1001; a1.name = "leela"; a1.balance = 250000.50;
a2.accNo = 1002; a2.name = "supriya"; a2.balance = 400000.75;
a1.display();
a2.display();
return 0;
}