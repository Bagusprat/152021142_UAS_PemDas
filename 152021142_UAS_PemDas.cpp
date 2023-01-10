#include <limits.h>
#include <iostream>
#include <cmath>


using namespace std;






int main(){
    int x [3];
    int y [3];
    int i;
    double xiyi;
    double sigxi,sigyi,sigxy, sigxiyi,powsigxi,powsigyi,atas,bawah1,bawah2,powtosigx,powtosigy,bawtot,bawx,bawy;
    double r,r2,pkt, koed;





cout<<"Korelasi pearson"<<endl;

for (i = 1; i < 4; i++){

    cout<<"masukkan x" << i <<" : ";cin >> x[i];

    cout<<"masukkan y" << i <<" : ";cin >> y[i];

}



sigxy = ((x[1] * y[1]) + (x[2] * y[2]) + (x[3] * y[3]));
sigxi = x[1] + x[2] + x[3];
sigyi = y[1] + y[2] + y[3];
sigxiyi = sigxi * sigyi;
powsigxi = pow(x[1],pkt) + pow(x[2],pkt) + pow(x[3],pkt);
atas = sigxy-sigxiyi;
powtosigx = pow(sigxi,pkt);
powtosigy = pow(sigyi,pkt);
bawx = (powsigxi-powtosigx);
bawah1 = sqrt(bawx);
bawy =(powsigyi-powtosigy);
bawah2 = sqrt(bawy);
bawtot = bawah1*bawah2;


r =  atas / bawtot;

cout << "sigmaX : " << sigxi << endl;
cout << "sigmaY : " << sigyi  << endl;
cout << "sigmaXY : " << sigxy << endl;
cout << "R = " << r <<endl;
koed = (r2 * 1);
cout << "Koefisien determinasi : " << koed << endl;

if (r >= 0 && r < 0,1 ){
    cout<<"korelasi diabaikan";
}

else if (r >= 0,1 && r < 0,3 ){
    cout<<"korelasi rendah";
}

else if (r >= 0,3 && r < 0,5 ){
    cout<<"korelasi moderat";
}

else if (r >= 0,7){
    cout<<"korelasi diabaikan"<<endl;
}


cout<<""<<endl;
r2 = (pow(r,pkt));








}
