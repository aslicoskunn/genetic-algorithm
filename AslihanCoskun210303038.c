#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Aslıhan Coşkun 210303038

int main(){

    int i,j,kare;
    // Karelerin her biri için ayrı bir değişken atadım.
    char k1='1',k2='2',k3='3',k4='4',k5='5',k6='6',k7='7',k8='8',k9='9';
    // Oyuncular için 20 karakterlik 3 char dizi atadım.
    char oyuncu1[20], oyuncu2[20], oyuncugecici[20];

    printf("\n\n Tic Tac Toe\n\n");
    printf("Oyuncu1'i gir: ");
    scanf("%s",&oyuncu1);
    printf("Oyuncu2'i gir: ");
    scanf("%s",&oyuncu2);

    //Berabere kalındığında tekrar oynanabilmesi için döngü tanımladım.
    for ( j = 0; j <= 2; j++)
    {
    //Eğer j=1 ise berabere kalındığını bildirdim. Oyuncuları değiştirdim ve kareleri varsayılan değerlerine döndürdüm.
        if (j==1)
        {
            printf("Berabere kaldiniz. Oyun tekrar oynanacak.");
            //eğer strcpy fonksiyonu kabul edilmezse for ile char dizisi kopyalama yapılacak.
            strcpy(oyuncugecici, oyuncu1);
            strcpy(oyuncu1, oyuncu2);
            strcpy(oyuncu2, oyuncugecici);
            k1 = '1'; k2 = '2'; k3 = '3'; k4 = '4'; k5 = '5'; k6 = '6'; k7 = '7'; k8 = '8'; k9 = '9';
        }
      //Eğer j=2 ise berabere kalındığını bildirdim ve döngüyü sonlandırdım.
        if (j==2)
        {
            printf("Berabere kaldiniz.");
            break;
        }
      //Oyunun maksimum 9 el oynanması için 1den 9'a kadar döngü tanımladım.
        for(i=1;i<=9;i++){

            //printf("\n%c||%c||%c\n%c||%c||%c\n%c||%c||%c", k1, k2, k3, k4, k5, k6, k7, k8, k9);
            printf("\n %c || %c || %c \n------------\n %c || %c || %c \n------------\n %c || %c || %c ", k1, k2, k3, k4, k5, k6, k7, k8, k9);
         //Eğer mod 1'e eşit ise oyuncu1 aktif durumdsa olur.Girdiği kareye göre o kare işaretini alır ve kazanma durumu konrol edilir.Kazandıysa döngü sonlanır.Kazanamadıysa döngü devam eder.
            if(i%2==1){
                printf("\n %s sayi gir.",oyuncu1);
                scanf("%d",&kare);
                if(kare==1 && k1=='1') {k1='X';}
                else if(kare==2 && k2=='2'){k2='X';}        
                else if(kare==3 && k3=='3'){k3='X';} 
                else if(kare==4 && k4=='4'){k4='X';} 
                else if(kare==5 && k5=='5'){k5='X';} 
                else if(kare==6 && k6=='6'){k6='X';} 
                else if(kare==7 && k7=='7'){k7='X';} 
                else if(kare==8 && k8=='8'){k8='X';}        
                else if(kare==9 && k9=='9'){k9='X';}  
            if((k1==k2 && k2==k3) || (k1==k4 && k4==k7) || (k2==k5 && k5==k8) || (k3==k6 && k6==k9) || (k4==k5 && k5==k6) || (k7==k8 && k8==k9) || (k1==k5 && k5==k9) || (k3==k5 && k5==k7))
            {
                printf("\n %c || %c || %c \n------------\n %c || %c || %c \n------------\n %c || %c || %c \n", k1, k2, k3, k4, k5, k6, k7, k8, k9);
                printf(" %s Kazandiniz.\n",oyuncu1);
                j += 2;
                break;
            }
            }

            //Eğer mod 0'a eşit ise oyuncu2 aktif durumdsa olur.Girdiği kareye göre o kare işaretini alır ve kazanma durumu konrol edilir.Kazandıysa döngü sonlanır.Kazanamadıysa döngü devam eder.
            if(i%2==0){
                printf("\n %s sayi gir.",oyuncu2);
                scanf("%d",&kare);
                if(kare==1 && k1=='1') {k1='O';}
                else if(kare==2 && k2=='2'){k2='O';}        
                else if(kare==3 && k3=='3'){k3='O';} 
                else if(kare==4 && k4=='4'){k4='O';} 
                else if(kare==5 && k5=='5'){k5='O';} 
                else if(kare==6 && k6=='6'){k6='O';} 
                else if(kare==7 && k7=='7'){k7='O';} 
                else if(kare==8 && k8=='8'){k8='O';}        
                else if(kare==9 && k9=='9'){k9='O';}  
            if((k1==k2 && k2==k3) || (k1==k4 && k4==k7) || (k2==k5 && k5==k8) || (k3==k6 && k6==k9) || (k4==k5 && k5==k6) || (k7==k8 && k8==k9) || (k1==k5 && k5==k9) || (k3==k5 && k5==k7))
            {
                printf("\n %c || %c || %c \n------------\n %c || %c || %c \n------------\n %c || %c || %c \n", k1, k2, k3, k4, k5, k6, k7, k8, k9);
                printf(" %s Kazandiniz.\n", oyuncu2);
                j += 2;
                break;
            }
            }


        }
    }

    return 0;

    
}





