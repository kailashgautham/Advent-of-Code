#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string m;
    int l1=0;
    int l2=0;
    int l3=0;
    int c=0;
    int a=0;
    ifstream f("input.txt");
    while (getline(f,m)){
        if (m == ""){
            if (c>l1) {l3=l2;l2=l1;l1=c;}
            else if(c>l2) {l3=l2;l2=c;}
            else if(c>l3) {l3=c;}
            c=0;
        }
        else{
            a = stoi(m);
            c+=a;
        }
    }
    cout<<l1+l2+l3<<endl;
}