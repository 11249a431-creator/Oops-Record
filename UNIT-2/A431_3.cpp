#include<iostream>
using namespace std;
class car{
    private:
    string brand;
    string model;
    float price;
    public:
    car(){
        brand = "unknow";
        model = "N/A";
        price =0.0;
    }
    car(string b,string m,float p){
        brand = b;
        model = m;
        price = p;
    }
    car(const car&c){
        brand =c.brand;
        model = c.model;
        price = c.price;
    }
    void display(){
        cout<<"Brand:"<<brand<<endl;
        cout<<"Model:"<<model<<endl;
        cout<<"Price:"<<price<<endl;
    }
    };
    int main(){
        car c1;
        car c2("BMW","i7",20000000.50);
        car c3(c2);
        cout<<"cars in showroom:\n";
        c1.display();
        c2.display();
        c3.display();
        return 0;
    }