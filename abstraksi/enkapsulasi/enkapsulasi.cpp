#include <iostream>
using namespace std;
 class remoteLampu {
    private:
    string saklarNO[10];
    public:
        void setsaklarNo(int i, string value) {
            saklarNo[i] = value;
        }
        string getsaklarNO(int i){
                return saklarNo[i];
        }
 }