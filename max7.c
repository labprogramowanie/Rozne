#include <stdio.h>
#include <stdlib.h>
int max7(int *tab, int n){
    int max=0;
for (int i =0; i<n ; i++)
{
    if ((tab[i]%7==0) && (tab[i]>max))
    {
        max = tab[i];
    }
}
return max;
}
void main(){

int n;
int *tab;
printf("Podaj rozmiar tablicy:");
scanf("%d", &n);
tab = malloc (n*sizeof(n));
int i =0;
while(i<n){
        printf("Podaj Tab[%d]: \n",i);
    scanf("%d", &tab[i]);
          printf("Tab[%d]=%d\n",i,tab[i]);
    i++;
}
printf("Max wynosi %d: ",max7(tab,n));


}
