#include<iostream>
using namespace std;
class banktransaction{
    private:
    string accountholder;
    double amount;
    public:
    banktransaction(string name,double amt){
        accountholder = name;
        amount = amt;
        cout<<"Transaction completed for "<<accountholder;
        cout<<",Amount:"<<amount<<"processed."<<endl;
    }
};
int main(){
    cout<<"bank transaction system\n";
    {
        banktransaction t1("Leela",100000);
        banktransaction t2("homesh",200000);
    }
    cout<<"End of programme.\n";
    return 0;
}
