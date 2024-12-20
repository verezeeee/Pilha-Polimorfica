#include <iostream>
using namespace std;

class Item {
private:
    int _key;
    int _val;

public:
    Item(){
        _key = 0;
        _val = 0;
    }

    Item(int key, int val){
        _key = key;
        _val = val;
    }

    friend bool operator>(const Item &i1, const Item &i2) {
        return i1._val > i2._val;
    }

    friend std::ostream & operator<<(std::ostream &out, const Item &i) {
        out << "(" << i._key << "," << i._val << ")";
        return out;
    }
};
