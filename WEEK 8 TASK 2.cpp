//ERIK MUKIRI GITAU
//CT101/G/29069/25
//HOTEL BOOKING SYSTEM


#include <iostream>
#include <string>
using namespace std;

class RoomBooking {
private:
    string guest_name;
    int room_number;
    int number_of_days;

public:

    RoomBooking(string name, int room, int days) {
        guest_name = name;
        room_number = room;
        number_of_days = days;

        cout<<"Room booking confirmed"<<endl;
    }


    void displayBooking() {
        cout<<"\n HOTEL BOOKING DETAILS"<<endl;
        cout<<"__________________________\n"<<endl;
        cout<< "Guest Name: " << guest_name<< endl;
        cout<< "Room Number: " << room_number<< endl;
        cout<< "Number of Days Booked: "<<number_of_days<< endl;
    }


    ~RoomBooking() {
        cout<<"\n Booking ended, room released"<<endl;
    }
};

int main() {

    RoomBooking booking("Erik Mukiri", 205, 3);


    booking.displayBooking();

    return 0;
}
