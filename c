#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

#define POPULATİON 5

void main(){

    srand(time(NULL));
    char result[50];
    int generation = 1;
    char target[] = "Kalem";
    int gene = sizeof(target) - 1;
    
    int health;
    int healthList[5];
    char pool[POPULATİON + 1][gene + 1];

    int first, second;
    int index1, index2;

    char member[gene + 1];
    member[gene] = '\0';
    char eb1[gene + 1];
    char eb2[gene + 1];
    eb1[gene] = '\0', eb2[gene] = '\0';

    int random;
    int i, j;
    for(i = 0; i < gene; i++){
        eb1[i] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"[rand() % 52];
        eb2[i] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"[rand() % 52];
    }
    do{
       
        sprintf(result, " %d |%s %s || ", generation,eb1, eb2);
        generation++;
        for(i = 0; i < POPULATİON; i++){
            health = 0;
            for(j = 0; j < gene; j++){
                random = rand() % 100 + 1;
                if(random < 45)
                    member[j] = eb1[j];
                else if(random >= 45 && random < 90)
                    member[j] = eb2[j];
                else if(random >= 90)
                    member[j] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"[rand() % 52];
                if(member[j] == target[j])
                    health++;
            }
            strcpy(pool[i], member);
            healthList[i] = health;
            sprintf(result, "%s %d | ", member, health);
            printf(result);
            if(health == gene)
                break;
        }
        sprintf(result, "\n");
        if(health == gene)
            break;

        first = 0, second = 0;
        index1 = 0, index2 = 0;
        for(i = 0; i < POPULATİON; i++){
            if(healthList[i] > first){
                first = healthList[i];
                index1 = i;
            }
            if(healthList[i] > second && i != index1){
                second = healthList[i];
                index2 = i;
            }
        }
        if(index1 == index2){
            while(index1 == index2){
                index1 = rand() % POPULATİON;
                index2 = rand() % POPULATİON;
            }
        }
        strcpy(eb1, pool[index1]);
        strcpy(eb2, pool[index2]);
        
    }while(1);
    
    printf("Success!\n");
}
