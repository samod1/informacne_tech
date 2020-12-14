//
//  main.c
//  Skuska
//
//  Created by Samuel Domin on 30/01/2019.
//  Copyright © 2019 Samuel Domin. All rights reserved.
//

//Zadanie (Exam Task)
/*Budete pracovat s 2 poliami celych cisel. V programe nacitajte 2 cele cisla n1 a n2.
 Su to velkosti poli pole1 pole2. Nasledne nacitajte n1 prvkov pole1 a potom n2 prvkov pole2.
 Vystupom programu bude sucet hodnot tohto pola, ktoreho aritmeticky priemer je vacsi- suma_max.
 
 Pre vypocet priemerov vytvorte funkciu ktora bude mat 2 parametre: Samotne pole a skutocnu velkost pola.
 Funkcia vrati hodnotu aritmetickeho priemeru pola
 Vypocet suctu prvkov pola rieste ako funkciu. Parametre a navratovu hodnotu si urcte sami.*/
#include <stdio.h>
#include <stdlib.h>

//Funkcie (Side Functions)

float suma_max (int A[], int velkost)
{
    int sucet=0;
    float avg=0.0;
    
    for(int i=0;i<velkost;i++)
    {
        sucet+=A[i];
    }
    
    avg= (float) sucet/velkost;
    return avg;
    
}

//Hlavna Funkcia (Main Function)
int main()
{
    int n1;
    int n2;
    int pole1[4096];
    int pole2[4096];
    int sucet2=0;
    int sucet1=0;
    
    //Nacitanie velkosti pola
    printf("Zadaj velkost prveho pola:");
    scanf("%d",&n1);
    printf("Zadaj velkost prveho pola:");
    scanf("%d",&n2);
    
    //Zadavanie prvkov do pola
    for(int i=0;i<n1;i++)
    {
        printf("Zadaj %d. prvok  pola P :", i+1);
        scanf("%d",&pole1[i]);
        sucet1+=pole1[i];
        
    }
    
    printf("\n");
    
    for(int i=0;i<n2;i++)
    {
        printf("Zadaj %d. prvok  pola Q :", i+1);
        scanf("%d",&pole2[i]);
        sucet2+=pole2[i];
        
    }
    
    printf("\n",sucet1);
    
    // Overenie cisiel a vypis na obrazovku
    if(suma_max(pole1,n1)>=suma_max(pole2,n2))
    {
        printf("%d\n",sucet1);
    }
    
    else
    {
        printf("%d\n",sucet2);
    }
    
    return 0;
}
