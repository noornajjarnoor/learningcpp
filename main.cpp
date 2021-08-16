#include <iostream>
#include "input.h"
int main(){
    int x{ getinteger() };
	int y{ getinteger() };
 
	std::cout << x << " + " << y << " is " << x + y << '\n';
	return 0;
}