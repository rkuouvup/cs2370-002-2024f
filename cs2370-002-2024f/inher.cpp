#include <iostream>
#include <string>
using namespace std;

class Business {
protected:
    string name;
    string address;
public:
    void SetName(string name) { this->name = name; }
    void SetAddress(string myaddress) {this->address = myaddress; }
    string GetDescription() const {
        return name + " -- " + address;
    }
};

class Restaurant : public Business {
private:
    int rating;
public:
    void SetRating(int myrating) {this->rating = myrating; }
    int GetRating() const {return rating;}
    string GetDescription() const {
        return Business::GetDescription() +
        "\n  Rating: " + to_string(rating);
    }
    void PrintRDescription() {
        cout << name << " -- " << address << rating << endl;
    }
};


int main() {
    Business b;
    Restaurant r1;
    
    b.SetName("Godiva"s);
    b.SetAddress("some address"s);
    
    r1.SetName("Five Guys"s);
    r1.SetAddress("University Place"s);
    r1.SetRating(4);
    
    cout << b.GetDescription() << endl;
    cout << r1.GetDescription() << endl;
    return 0;
}
