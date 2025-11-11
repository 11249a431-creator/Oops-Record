#include<iostream>
using namespace std;
class loan;
class account{
    float balance;
    public:
    void getBalance(){
        cout<<"enter account balance:";
        cin>>balance;
    }
    friend void checkEligibility(account,loan);
};class loan{
    float loanAmount;
    public:
    void getloan(){
        cout<<"Enter loan Amount:";
        cin>>loanAmount;
    }
    friend void checkEligibility(account,loan);
};
void checkEligibility(account a,loan l){
    if(a.balance>=2*1.loan Amount)
    cout<<"Eligible for loan"<<endl;
}
int main(){
    account acc;
    loan ln;
    acc.getBalance();
    ln.getloan();
    checkEligibility(acc,ln);
    return 0;
}