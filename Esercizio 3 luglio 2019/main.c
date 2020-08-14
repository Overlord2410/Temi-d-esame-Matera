//
//  main.c
//  Esercizio 3 luglio 2019
//
//  Created by Matteo Rigamonti on 23/07/2020.
//  Copyright © 2020 Matteo Rigamonti. All rights reserved.
//

/*
Quesito3(5punti). Si supponga di avere,già presente in memoria, una matrice quadrata di interi di dimensione NxN, N costante predefinita. Si scriva una funzione ricorsiva che riceve come parametro la matrice (più altri parametri che si ritenga siano necessari) e verifica se la matrice è simmetrica, cioè se tutti gli elementi in posizioni simmetriche rispetto alla diagonale principale hanno stesso valore.
 */

#include <stdio.h>
#define N 5

int is_simmetric(int mat[N][N]){
    int i,j, flag = 1;
    
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (mat[i][j] != mat[j][i]) {
                flag = 0;
            }
        }
    }
    return flag;
}


//per "scorrere" la matrice in modo ricorsivo si usano gli indici i,j come parametri
//il primo caso base, quello in cui si controlla se i == N serve per capire se si è
//arrivati alla fine della matrice. Arrivati alla fine senza errori pertanto ritorniamo
//il valore di verità.
//il secondo caso base è il vero e proprio controllo di simmetricità della matrice
//che ritorna il valore "falso" se la matrice non è simmetrica

int is_simmetric_recursive(int mat[N][N], int i, int j){
    if (i == N){
        return 1;//True
    }else if (mat[i][j] != mat[j][i]){
        return 0;//False
    }else{
        
        if (j == N){
            return is_simmetric_recursive(mat, i + 1, 0);//a fine riga (j == N) passo alla riga dopo (i + 1) primo elemento (0)
        }else{
            return is_simmetric_recursive(mat, i, j + 1);// in una qualsiasi posizione, incremento j
        }
        
    }
}

int main(int argc, const char * argv[]) {
    
    return 0;
}
