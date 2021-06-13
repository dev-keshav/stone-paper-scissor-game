#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int game(char you, char computer){
        
        if(you==computer)
        return -1;
        
        if(you=='s' && computer=='p')
        return 0;
        
            else if(you=='p' && computer=='s')
            return 1;
            
        if(you=='p' && computer=='z')
        return 0;
        
            else if(you=='z' && computer=='p')
            return 1;
        
        if(you=='s' && computer=='z')
        return 1;
        
            else if(you=='z' && computer=='s')
            return 0;
    }
    
    int main(){
        
        int n;
        char you, computer, result;
        
    // For computer
        srand(time(0));
        n=rand() %100;
        
        if(n<33)
        computer='s';
        
        else if(n>33 && n<66)
        computer='p';
        
        else
        computer='z';
        
    // For user
        printf("\n\n\n\t\t\tEnter s for Stone, p for paper, z for Scissor\n\t\t\t");
        printf("----> ");
        
        scanf("%c", &you);
        
        result=game(you, computer);
        
        if(result == -1){
        printf("\n\n\t\t\tGame draw!\n");
        }
        
        else if(result == 1){
        printf("\n\n\t\t\tYou have won the game!\n");
        }
        
        else{
        printf("\n\n\t\t\tYou have lost the game!\n");
        }
        
        printf("\n\t\t\tYou choose: %c and computer choose: %c", you, computer);
        
        return 0;
        
    }
    

 