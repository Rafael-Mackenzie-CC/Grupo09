#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int matriz[3][3],i, j;
  
    for ( i=0; i<3; i++ )
        for ( j=0; j<3; j++ ) {
        int r = rand() % 100;
        // printf ("\nElemento[%d][%d] = ", i, j);
        matriz[i][j] = r; 
        }
    
    for ( i=0; i<3; i++ )
        for ( j=0; j<3; j++ ) {
        printf ("\nElemento[%d][%d] = %d\n", i, j,matriz[ i ][ j ]);
        }
    
    int num_menor = matriz[0][0];
    int linha_menor;
    for ( i=0; i<3; i++ )
        for ( j=0; j<3; j++ ) {
            if (matriz[i][j] < num_menor) {
                num_menor = matriz[i][j];
                linha_menor = i;
            }
        }
    printf("\nO menor valor está na linha %d.", linha_menor);
    printf("\nNúmero menor '%d'", num_menor);
    
    return(0);
}