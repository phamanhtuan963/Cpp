#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int baseHP1, wp1, baseHP2, wp2, ground;
    double fp, RealHP1, RealHP2;
    
    cin >> baseHP1 >> wp1 >> baseHP2 >> wp2 >> ground;
    if(wp1 == 2){
        wp1 = 1;
    }
    if(wp2 == 2){
        wp2 = 1;
    }
    if(wp1 == 1){
        RealHP1 = baseHP1;
    }
    if(wp1 == 0){
        RealHP1 = baseHP1/10;
    }
    if(wp2 == 1){
        RealHP2 = baseHP2;
    }
    if(wp2 == 0){
        RealHP2 = baseHP2/10;
    }
    if(ground == baseHP1){
        RealHP1 = RealHP1 + (RealHP1 * 0.1);
        if(RealHP1 > 999){
            RealHP1 = 999;
        }
    }
    if(ground == baseHP2){
        RealHP2 = RealHP2 + (RealHP2 * 0.1);
        if(RealHP2 > 999){
            RealHP2 = 999;
        }
    }
    fp = (RealHP1 - RealHP2 + 999) / 2000;
    if ((fp<0.5 && wp1==2) || (fp>0.5 && wp2==2)){
        fp=0.5;
    }
    cout << setprecision(2) << fixed << fp << endl;

    return 0;
}
