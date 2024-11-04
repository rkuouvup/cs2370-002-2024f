#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Business {
protected:
    string name;
    string address;
public:
    void SetName(string name) { this->name = name; }
    void SetAddress(string myaddress) {this->address = myaddress; }
    /*virtual string GetDescription() const = 0;*/
    virtual string GetDescription() const {
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
        //return Business::GetDescription() +
        return "\n  Rating: " + to_string(rating);
    }
    void PrintRDescription() {
        cout << name << " -- " << address << rating << endl;
    }
};

class Foo {
public:
    string Description() {return "foo";}
};


/*void DriveTo(Business *bptr) {
    cout << "Drive to " << bptr->GetDescription() << endl;
}*/


int main() {
    vector<Business*> blist;
    
    /*Business* bptr = new Business;
    bptr->SetName("Godiva");
    bptr->SetAddress("some address");
    blist.push_back(bptr);*/
    
    Restaurant* rptr = new Restaurant;
    rptr->SetName("Five Guys");
    rptr->SetAddress("University Place");
    rptr->SetRating(4);
    blist.push_back(rptr);
    
    Restaurant *rptr2 = new Restaurant;
    rptr2->SetName("Lovely Pho");
    rptr2->SetAddress("some mall");
    rptr2->SetRating(5);
    blist.push_back(rptr2);
    
    //Foo* f = new Foo;
    //blist.push_back(f);
    
    for (int i = 0; i < blist.size(); i++) {
        cout << blist.at(i)->GetDescription() << endl;
    }
    
    
    /*Business b;
    Restaurant r1;

    b.SetName("Godiva"s);
    b.SetAddress("some address"s);
    
    r1.SetName("Five Guys"s);
    r1.SetAddress("University Place"s);
    r1.SetRating(4);
    
    DriveTo(&b);
    DriveTo(&r1);   //======= b: name -- address
                    //======= r: name -- adress: rating*/
    return 0;
}
