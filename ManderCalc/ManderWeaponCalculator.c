#include <stdio.h>
#include <stdlib.h>
#define MAXWEAP             19
#define MAXCOST             28500
#define WEAPCOST            1500
#define EXBOUNTY            140
#define LVL90BOUNTY         150
#define LVL5678BOUNTY       120
#define LVLINGBOUNTY        100
#define TRIALSBOUNTY        60
#define MSQBOUNTY           100
#define ALLIANCEBOUNTY      120
#define NORMALBOUNTY        60
#define FRONTLINEBOUNTY     50

int main(){
    int currentAstronomy;
    int heldWeapons;

    int remainingCost = getNumbers(currentAstronomy, heldWeapons);

    int remainingDays = roulettes(remainingCost);

    printf("Faltam %d Astronomy tomes para voce terminar todas as relics de Endwalker.\nFazendo as roletas selecionadas por voce diariamente, levarao %d dias para finalizar o grind.\n", remainingCost, remainingDays);
    
    system("pause");
    return 0;
}

int getNumbers(int currentAstronomy, int heldWeapons){

    printf("Quantia atual de Astro tomes: ");
    scanf("%d", &currentAstronomy);
    printf("Quantia atual de armas prontas: ");
    scanf("%d%*c", &heldWeapons);
    system("cls");

    int remainingCost = (MAXCOST - (WEAPCOST * heldWeapons)) - currentAstronomy;

    return remainingCost;
}

int roulettes(int remainingCost){
    int dailyBounty = 0;
    char choice;
    char dump;
    printf("Escolha quais roletas quer fazer diariamente (s/n)\nExpert? ");
    choice = getchar();
    dump = getchar();
    system("cls");
    if(choice == 's'){
        dailyBounty += EXBOUNTY;
    }
    // printf("%d", dailyBounty);

    printf("\nLvl 90? ");
    choice = getchar();
    dump = getchar();
    system("cls");
    if(choice == 's'){
        dailyBounty += LVL90BOUNTY;
    }
    // printf("%d", dailyBounty);

    printf("\nLvl 50/60/70/80? ");
    choice = getchar();
    dump = getchar();
    system("cls");
    if(choice == 's'){
        dailyBounty += LVL5678BOUNTY;
    }
    // printf("%d", dailyBounty);

    printf("\nLeveling? ");
    choice = getchar();
    dump = getchar();
    system("cls");
    if(choice == 's'){
        dailyBounty += LVLINGBOUNTY;
    }
    // printf("%d", dailyBounty);

    printf("\nTrials? ");
    choice = getchar();
    dump = getchar();
    system("cls");
    if(choice == 's'){
        dailyBounty += TRIALSBOUNTY;
    }
    // printf("%d", dailyBounty);

    printf("\nMSQ? ");
    choice = getchar();
    dump = getchar();
    system("cls");
    if(choice == 's'){
        dailyBounty += MSQBOUNTY;
    }
    // printf("%d", dailyBounty);

    printf("\nAlliance? ");
    choice = getchar();
    dump = getchar();
    system("cls");
    if(choice == 's'){
        dailyBounty += ALLIANCEBOUNTY;
    }
    // printf("%d", dailyBounty);

    printf("\nNormal Raids? ");
    choice = getchar();
    dump = getchar();
    system("cls");
    if(choice == 's'){
        dailyBounty += NORMALBOUNTY;
    }
    // printf("%d", dailyBounty);

    printf("\nFrontline? ");
    choice = getchar();
    dump = getchar();
    system("cls");
    if(choice == 's'){
        dailyBounty += FRONTLINEBOUNTY;
    }
    // printf("%d", dailyBounty);

    int daysLeft = remainingCost / dailyBounty;
    if(remainingCost % dailyBounty > 0){
        daysLeft++;
    }

    return daysLeft;
}