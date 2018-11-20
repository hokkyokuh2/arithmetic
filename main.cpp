#include <iostream>
#include <string>
#include "cal.h"

using namespace std;


int main(){
Calculator ari;
cout << "２つの変数を入力してください"<<endl;
cin >> ari.a;
cin >> ari.b;
cout <<"a="<<ari.a<<endl;
cout <<"b="<<ari.b<<endl;

ari.add();
ari.sub();
ari.mul();
ari.div();

return 0;
}