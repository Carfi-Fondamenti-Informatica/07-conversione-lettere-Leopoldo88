#include <iostream>
using namespace std;

int main(){
    char x,mai, min;
    cout<<"Inserisci una lettera: ";
    cin>>x;
    if(maiuscola(x, mai, min)==true){
    cout<<boolalpha<<maiuscola(x, mai, min)<<endl;
    cout<<"La lettera convertita e': "<<min;
}
    else{
    cout<<"No"<<endl;
} 
return 0;
}
