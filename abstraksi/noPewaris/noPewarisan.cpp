#include <iostream>
using namespace std;

class baseClass {
public:
        virtual void perkenalan(){
                cout << "hallo saya function dari base class" << endl;
        }
};

class derivedclass : public baseClass {
public:
        void perkenalan(){
            cout << "hallo saya function dari derivedclass" << endl;
        }
};

int main (){
    derivedclass a;
    a.perkenalan();
    return 0;
}