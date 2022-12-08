#include<iostream>
bool checkinput(char x)
{

 if(((int)x>=65&&x<=90)||((int)x>=97&&x<=122))
           return true;
    else
        return false;
}
char conv(char x)
{
    char ris;
    if(x>='A'&&x<='Z')
        ris=x+32;
    else 
        ris=x-32;
return ris;
}
  
