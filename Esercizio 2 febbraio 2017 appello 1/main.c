//
//  main.c
//  Esercizio 2 febbraio 2017 appello 1
//
//  Created by Matteo Rigamonti on 26/07/2020.
//  Copyright © 2020 Matteo Rigamonti. All rights reserved.
//

/*
 Quesito 2 (8 punti). Sia data una matrice quadrata di dimensione N x N, N costante predefinita. Si definisca una funzione ricorsiva che, ricevuta in input la matrice, restituisca 1 se la matrice è simmetrica, 0 se non lo è.
 */

#include <stdio.h>
#define N 10

int funzione(int mat[N][N]){
    int i,j;
    int flag = 1;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (mat[i][j] != mat[j][i]) {
                flag = 0;
            }
        }
    }
    return flag;
}

//spiegazione in esercizio 3 luglio 2019
int is_simmetric_recursive(int mat[N][N], int i, int j){
     if (i == N){
         return 1;//True
     }else if (mat[i][j] != mat[j][i]){
         return 0;//False
     }else{

         if (j == N){
             return is_simmetric_recursive(mat, i + 1, 0);
         }else{
             return is_simmetric_recursive(mat, i, j + 1);
         }

     }
 }

int main(int argc, const char * argv[]) {
    
    return 0;
}
