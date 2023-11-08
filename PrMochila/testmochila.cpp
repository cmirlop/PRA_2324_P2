#include "mochila.h"
#include <iostream>

int main(){
int p[4] = {1,3,2,4};
int b[4] = {10,20,15,20};
std::cout << mochila(4,p,b,5) << std::endl;

return 0;
}
