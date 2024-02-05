#include "llh.h"

// Default constructor
llh::llh() : littles(0), lots(0), heaps(0) {}

// Overloaded constructor for all attributes
llh::llh(int littles, int lots, int heaps) : littles(littles), lots(lots), heaps(heaps) {}

// Overloaded constructor for "littles" attribute
llh::llh(int littles) {
    this->littles = littles;
    this->simplify();
}

// Setter function to set the value of attribute littles

void llh::setLittles(int littles) {
    this->littles = littles;
}

// Getter function to access the value of attribute littles

const int llh::getLittles() {
    return littles;
}

// Setter function to set the value of attribute lots

void llh::setLots(int lots) {
    this->lots = lots;
}

// Getter function to get the value of attribute lots

const int llh::getLots() {
    return lots;
}

// Setter function to set the value of attribute heaps

void llh::setHeaps(int heaps) {
    this->heaps = heaps;
}

// Getter function to get the value of attribute heaps

const int llh::getHeaps() {
    return heaps;
}

// This is a private member function to simplify all of our attributes and convert it into just one single attribute to be able to 
// overload some of our operators. This function in particular converts lots and heaps into littles.

void llh::simplify(){
    if (littles > 7) {
        lots += littles / 7;
        this->littles = littles % 7;
    } else {
        this->littles = littles;
    }

    if (lots > 23) {
        heaps += lots / 23;
        lots %= 23;
    }
}

// This is the overloaded + operator which allows us to add 2 instances or objects of our llh class and returns an object back to us.

llh llh::operator+(const llh& obj){
    llh temp;
    temp.setLittles(this->littles + obj.littles);
    temp.setLots(llh::lots + obj.lots);
    temp.setHeaps(llh::heaps + obj.heaps);
    temp.simplify();
    return temp;
};

// This is the overloaded - operator which allows us to subtract 2 instances or objects of our llh class and returns an object back to us.

llh llh::operator-(const llh& obj){
    llh temp;
    temp.setLittles(this->littles - obj.littles);
    temp.setLots(this->lots - obj.lots);
    temp.setHeaps(heaps - obj.heaps);

    if(temp.littles<0){
        temp.setLots(temp.lots - (temp.littles / 7) +1);
        temp.setLittles(7 - abs(temp.littles%7));
    }

    if(temp.lots<0){
        temp.setHeaps(temp.heaps - ((temp.lots) / 23) +1);
        temp.setLots(23- abs(temp.littles%23)) ;
    }

    temp.simplify();
    return temp;
};

// This is the overloaded == operator which allows us to compare 2 instances or objects of our llh class.

bool llh::operator==(const llh& obj){
    return (littles == obj.littles) &&
           (lots == obj.lots) &&
           (heaps == obj.heaps);
}

// This is the overloaded * operator which allows us to multiply 2 instances or objects of our llh class and returns an object type.

llh llh::operator*(const llh& obj) {
    llh temp(this->convert_to_little() * obj.convert_to_little());
    return temp;
}
int llh::convert_to_little() const{
    return 7*(23*heaps + lots) + littles;
}

// This is the overloaded / operator which allows us to divide 2 instances or objects of our llh class and returns an object type.


llh llh::operator/(const llh& obj){
    int temp1 = this->convert_to_little();
    int temp2 = obj.convert_to_little();
    llh temp;
    if (temp2 == 0) {
        std::cout << "Error: Division by zero" << std::endl;
    }
    else {
        temp.setLittles(temp1/temp2);
        temp.simplify();
    }
    return temp;
};

// This is the overloaded string operator which allows us to convert our object into a string so that we can use cout or any of the string manipulation functions or objects on these object data types and it returns a string.


llh::operator std::string() const{
    return "Littles: " + std::to_string(littles) + ", Lots: " + std::to_string(lots) + ", Heaps: " + std::to_string(heaps);
}
