#include<iostream>
using namespace std;
class Hotelroom{
    private:
    int roomnumber;
    string guestname;
    int daysbooked;
    public:
    Hotelroom(int r,string g,int d){
        roomnumber = r;
        guestname = g;
        daysbooked = d;
        cout<<"Room"<<roomnumber<<"booked for"<<guestname<<"for"<<daysbooked<<"days"<<endl;
    }
    ~Hotelroom(){
        cout<<"Room"<<roomnumber<<"is now free checkout completed for"<<guestname<<"."<<endl;
    }
    void display(){
        cout<<"Guest:"<<guestname;
        cout<<",RoomNo:"<<roomnumber;
        cout<<",Days Booked:"<<daysbooked<<endl;
    }
};
int main(){
    cout<<"Hotel Booking System\n";
    {
        Hotelroom r1(101,"Homesh",3);
        Hotelroom r2(102,"leela",3);
        cout<<"\nBooking Details:\n";
        r1.display();
        r2.display();
    }
    cout<<"\nEnd of program\n";
    return 0;
}