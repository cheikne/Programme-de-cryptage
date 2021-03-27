#include <stdio.h>
#include <errno.h>
#include <math.h>
#include <stdarg.h>
// #define TYPEOF(x) _Generic((x), \
//     char: "char", \
//     short: "short", \
//     int: "int", \
//     long: "long", \
//     long long: "long long", \
//     float: "float", \
//     double: "double", \
//     long double: "long double")

enum type { TYPE_INT, TYPE_DOUBLE };
static void affiche(enum type type, ...);
int main(int argc, char const *argv[]){

//     int i = ;

// condition:
//     if (i < )
//     {
//         printf("La variable i vaut %d\n", i);
//         i++;
//         goto condition;
//     }
 int a;
    int b;
      errno = ;
    double x = pow(-, .);

    if (errno == )
        printf("x = %f\n", x);
    else
    printf("Vous avez fmis une valeur negative dans la racine: %d\n",errno);
   /********************************************************/
    affiche(TYPE_INT, );
    affiche(TYPE_DOUBLE, .);
    //Selection generique*******************************
    char *ch =_Generic((x), \
    char: "char", \
    short: "short", \
    int: "int", \
    long: "long", \
    long long: "long long", \
    float: "float", \
    double: "double", \
    long double: "long double");

    printf("type de x : %s\n",ch);
    // printf("type de x : %s\n", TYPEOF(x));

    printf("Entrez deux nombres : ");
    scanf("%d %d", &a, &b);

    int min = (a < b) ? a : b;
    int i;

    for (i = ; i <= min; ++i)
        if (a % i ==  && b % i == )
            goto trouve;

    return ;
trouve:
    printf("le plus petit diviseur de %d et %d est %d\n", a, b, i);
return ;
}



static void affiche(enum type type, ...)
{
    va_list ap;

    va_start(ap, type);

    switch (type)
    {
    case TYPE_INT:
        printf("Un entier : %d.\n", va_arg(ap, int));
        break;

    case TYPE_DOUBLE:
        printf("Un flottant : %f.\n", va_arg(ap, double));
        break;
    }

    va_end(ap);
}
