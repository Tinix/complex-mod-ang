#include <stdio.h>
#include "complejo.h"

int main(void)
{
  compl x,
 	y,
	 a,
	 b,
	 c,
	 k,
	res1,
	res2,
	res3;

printf ("\tSea a = 2 + i*3; b = 8 + i; c = 5 + i*7.\n");
printf ("\n");
x = compl_leer();
y = compl_leer();
a = compl_create(2 , 3);
b = compl_create(8 , 1);
c = compl_create(5 , 7);
res1 = compl_prod(a , x);
res2 = compl_prod(b , y);
res3 = compl_resta(res1 , res2);
k = compl_suma(res3, c);


printf ("El resultado de a * x - b * y + c es:\n");
printf ("\n");
compl_print(k);
return 0;
}
