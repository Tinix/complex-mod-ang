#include "expcompl.h"

compl expcompl (compl x, int y){
    compl r;

    r = compl_create (1, 0);

    while (y != 0){
        r = compl_prod (x, r);
        y = y - 1;
    }
    return r;
}   
