#include <iostream>

using namespace std;

class Abstraksiklas {
    private: string x, y;

    public:

    void setXY(string a, string b){
        x = a;
        y = b;
    }

    
void display() {
     cout << "y =" << y << endl;
    cout << "y =" << x << endl;

    }
    
};

int main() {
    Abstraksiklas ak;
    ak.setXY ("yogyakarta", "kampus");
    ak.display();

    return 0;
};


