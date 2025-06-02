#include <iostream>
using namespace std;

class seseorang {
    public:
virtual void pesan()= 0;
// virtual void pesan(){
// cout << "orang dibuat dengan umur" << umur << "\n" << endl;
    //}
};

#include <iostream>
using namespace std;

class joko : public seseorang {
public:
    void pesan() {
        cout << "pesan dari joko " << endl;
    }
};


class lia : public seseorang {
public:
    void pesan() {
        cout << "pesan dari lia " << endl;
    }
};