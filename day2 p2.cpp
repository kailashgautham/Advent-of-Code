#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int t=0;
    string m;
    ifstream f("input.txt");
    while (getline(f,m)){
        string o=m.substr(0,1);
        string i=m.substr(2,3);
        if (i=="X") 
            t = (o == "A") ? (t + 3) : (o == "B") ? (t + 1) : (t+2);
        else if (i=="Y")
            t+=3+int(o[0])-64;
        else 
            t = (o == "A") ? (t+8) : (o=="B") ? (t+9) : t+7;
        }
        cout<<t<<endl;
}