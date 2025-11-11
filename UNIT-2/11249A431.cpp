#include<iostream>
using namespace std;
class bankAccount{
    private:
    string name;
    int accNumber;
    double balance;
    public://default constructer
    bankAccount(){
        name="unknown";
        accNumber =0;
        balance=0.0;
    }
    bankAccount(string n,int accNo,double bal)
    {
        name=n;
        accNumber = accNo;
        balance = bal;
    }
    bankAccount(const bankAccount &acc){
        name = acc.name;
        accNumber = acc.accNumber;
        balance = acc.balance;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Account No:"<<accNumber<<endl;
        cout<<"Balance"
    };
    int main(){
        bankAccount a1;
        bankAccount a2("Leela","12345","50000.0");
        bankAccount a3(a2);
        cout<<"bankAccounts:\n";
        a1.display();
        a2.display();
        a3.display();
        return 0;
    }
}