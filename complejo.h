#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <stdio.h>
#include <math.h>
#include "real.h"

struct scompl {
    real mod, 
         ang;     
};

typedef struct scompl compl;

compl compl_create(const real rl, const real img);
/*
DESC: Constructor del tipo
*/

compl compl_suma(const compl a, const compl b);
/*
DESC: Suma.
*/

compl compl_resta(const compl a, const compl b);
/*
DESC: Resta.
*/

compl compl_prod(const compl a, const compl b);
/*
DESC: Multiplicacion.
*/

void compl_print(const compl c);
/*
DESC: Imprime en pantalla c con formato a + i b.
*/

compl compl_leer(void);
/*
DESC: Lee por teclado en el formato a + i b y construye.
*/
#endif /* COMPLEJO_H */
