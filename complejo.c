#include "complejo.h"
#define PI  3.1415926536

compl compl_create(const real rl,const real img){
    /* DESC: Constructor del tipo */

    compl c; 
    c.mod = sqrtl(rl*rl + img*img);
    if (rl > 0){
      c.ang = (atanl(img/rl));
    }else if ((rl < 0) && (img >= 0)) {
            c.ang = atanl((img/rl)+ PI);
    }else if ((rl < 0) && (img < 0)) {
      c.ang = (atanl (img/rl)) - PI;
    }else if ((rl == 0) &&(img > 0)){
      c.ang = PI / 2;
    }else if ((rl == 0) && (img < 0)){
      c.ang = -PI/2;
    }else if ((rl == 0) && (img == 0)){
      c.ang = 0;
    }              
                    
    return c;
}

compl compl_suma(const compl a, const compl b){
    compl z;

    real x, y, k, w ;
    x = a.mod * cosl(a.ang);
    y = a.mod * sinl(a.ang);
    w = b.mod * cosl(b.ang);
    k = b.mod * sinl(b.ang);

    z = compl_create((x + w),(y + k));
    return z;

}
compl compl_resta(const compl a, const compl b){
    compl z;

    real x, y, k, w ;
    x = a.mod * cosl(a.ang);
    y = a.mod * sinl(a.ang);
    w = b.mod * cosl(b.ang);
    k = b.mod * sinl(b.ang);

    z = compl_create((x - w),(y - k));
    return z;

}
compl compl_prod(const compl a, const compl b){
    compl z;
    z.mod = a.mod * b.mod;
    z.ang = a.ang + b.ang;
    return z;

}
void compl_print(const compl c){
    /* DESC: Imprime en pantalla c con formato a + i b. */
    real x,y;
    x = c.mod * cosl(c.ang); 
    y = c.mod * sinl(c.ang);

    printf("el numero complejo es : \t %Lf + i * %Lf \n",x ,y);
}

compl compl_leer(void){
    /* DESC: Lee por teclado y construye. */
    real x, y;
    compl z;
    printf("ingrese la parte real : \t");
    scanf("%Lf" , &x);

    printf("Ingrese la parte imaginaria : \t");
    scanf("%Lf", &y);

    z = compl_create(x,y);
    return z;
}


