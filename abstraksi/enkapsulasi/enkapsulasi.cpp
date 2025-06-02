#include <iostream>
using namespace std;
 class remoteLampu {
    private:
    string SaklarNO[10];
    public:
        void setsaklarNo(int i, string value) {
            SaklarNo[i] = value;
        }
        string getsaklarNO(int i){
                return saklarNo[i];
        }
 };

 int main (){
    remoteLampu lampuRumah;

    lampuRumah.setsaklarNo(0, "lampu teras rumah");
    lampuRumah.setsaklarNo(1, "lampu ruang tamu");
    lampuRumah.setsaklarNo(2, "lampu kamar tidur");
    lampuRumah.setsaklarNo(3, "lampu teras rumah");

    cout << lampuRumah.getsaklarNO(0) << endl;
    cout << lampuRumah.getsaklarNO(1) << endl;
    cout << lampuRumah.getsaklarNO(1) << endl;
    cout << lampuRumah.getsaklarNO(3) << endl;
 }