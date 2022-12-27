#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int x=1;
    int y=2;
    int z=3;
    int t=0;
    string m;
    ifstream f("input.txt");
    while (getline(f,m)){
        string o=m.substr(0,1);
        string i=m.substr(2,3);
        if ((o=="A" && i=="X") || (o=="B" && i=="Y") || (o=="C" && i=="Z")) t+=3+int(i[0])-87;
        else if ((o=="A" && i=="Z") || (o=="B" && i=="X") || (o=="C" && i=="Y")) t+=int(i[0])-87;
        else t+=6+int(i[0])-87;
        }
        cout<<t<<endl;
}