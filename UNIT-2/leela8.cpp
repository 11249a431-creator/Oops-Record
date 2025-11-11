#include <iostream>
using namespace std;
class BankAccount{
    private:
    string name;
    int accountNumber;
    double balance;
    public:
    BankAccount(){
        name="Unknown";
        accountNumber = 0;
        balance=0.0;
    }
    BankAccount(String n,int accNo,double bal)
    {
        name = n;
        accountNumber = accNo;
        balance = bal;
    }
    BankAccount(const BankAccount &acc){
        name = acc.name;
        accountNumber= acc.accountNumber;
        balance = acc.balance;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Account No:"<<accountNumber<<endl;
        cout<<"Balance:"<<balance<<endl;
    }
};
int main(){
    BankAccount a1;
    BankAccount a2("Leela ",12345,90000);
    BankAccount a3(a2);
    a1.display();
    a2.display();
    a3.display();
    return 0;
}