#include <iostream>
#include "lib.h"
using namespace std;
int main()
{
char c;
char v;
cin >> c;
if(checkinput(c))
{
    v=conv(c);
    cout<<v;
}
else
    cout << "errore" <<endl;
return 0;
}
