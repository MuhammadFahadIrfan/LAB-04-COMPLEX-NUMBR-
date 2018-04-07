#include <iostream>
using namespace std;
#include "complex.h"

int main()
{
	complex z1 (2, 3);
		complex z2(z1);
		complex z3;
		z3 = z1.add1(z1, z2);
		z3.display();
		z3 = z1.add2(z1);
    	z3 = z1.sub(z1);
      cout<<"A D D  B Y  D O U B L E  P A R A M E T E R"<<endl;
		z3.display();
    cout<<"A D D  B Y  S I N G L E  P A R A M E T E R"<<endl;
		z3.display();
    cout<<"S U B   B Y  D O U B L E  P A R A M E T E R"<<endl;
    z3.display();
    
	system("pause");
	return (0);
}