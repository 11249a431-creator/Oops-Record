#include<iostream>
using namespace std;
class book{
    private:
    string title;
    string author;
    float price;
    public:
    book(){
        title = "Untitled";
        author = "Unknown";
        price =0.0;
    }
    book(string t,string a,float p){
        title = t;
        author = a;
        price = p;
    }
    book(const book &b){
        title = b.title;
        author = b.author;
        price = b.price;
    }
    void display(){
        cout<<"Title"<<title;
        cout<<"Authot"<<author;
        cout<<",price"<<price<<endl;
    }
};
int main(){
    book b1;
    book b2("C++ programming","bjarne straustrup",750.0);
    book b3(b2);
    cout<<"library books:\n";
    b1.display();
    b2.display();
    b3.display();
    return 0;
}