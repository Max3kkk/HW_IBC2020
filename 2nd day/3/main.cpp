#include <iostream>

using namespace std;
//this is the 4th task
int main(){
    int x,y,z,a, minim = INT_MAX;
    cin >> x >> y >> z >> a;
    for (int xx = 0; xx < x; xx++){
        for (int yy = 0; yy < y; yy++){
            for (int zz = 0; zz < z; zz++){
                if (xx * 5 + yy * 2 + zz == a && xx + yy + zz < minim){
                    minim = xx + yy + zz;
                }
            }
        }
    }
    if(minim == INT_MAX){
        cout << "NO";
    } else{
        cout << "YES" << endl << minim;
    }
}
