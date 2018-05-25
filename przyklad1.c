#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>

int Max(int* x, int n){
int i=0;
int k=n;
int max=0;

while(i<n){
    if (x[i]%3==0){
        max= x[i]; // najpierw przypisac do max
        k=i;
        i=n; // potem zmieniac wartosc i

    }
    else { i=i+1;}
}

    int j=k+1;

    while(j<n){
    if((x[j]%3)==0)
    {
        if (x[j]>max){
            max=x[j];
        }
    }
    j=j+1;

    }

return max;


}


void main(){
int n;

printf("Wprowadz liczbe n:\n");
scanf("%i", &n);
printf("Wprowadzona liczba n to: %i\n",n); // potwierdzenie przyjecia wartosci

int *x =(int *)malloc(sizeof(*x)*n); // przypisanie wskaznikowi x rozmiaru int (4 bajty) * ilosc elementow n

int i = 0;
while(i<n){
printf("Wprowadz x[%i] element: \n", i);
scanf("%i", &x[i]);
printf("Wprowadzony element x[%i] to: %i \n",i, x[i]);  // potwierdzenie przyjecia wartosci
i++;
}

printf("Max zwracane przez funkcje max to: %i", Max(x,n));
printf("\n************ KONIEC PROGRAMU ************\n");

free(x); // zwalnianie pamieci przydzielonej na koniec programu
}
