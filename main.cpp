#include <iostream>
#include "lib.h"
using namespace std;

int main() {
char c;
    char v;
    cin>>c;
    if (checkimput(x:c)){
        v=conversione(x:c);
        cout<<v;
        }else {
        cout<<"errore"<<endl;
        }
    return 0;
