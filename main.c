//
//  main.c
//  Murk
//
//  Created by Tyler Law on 4/22/14.
//  Copyright (c) 2014 Tyler Law. All rights reserved.
//

// NOTES :::::: I WANT TO ELIMINATE THE INFINITE LOOP THAT HAPPENS IF YOU FIRST
// SELECT RIGHT, THEN RIGHT, THEN LEFT.  LEFT IS SUPPOSED TO BE THE ONLY DOOR
// YOU ARE ALLOWED TO GO THROUGH INITIALLY, WHICH IS WHY I PLACED THE ENTIRE
// INTRO CODE INTO ITS OWN FUNCTION.  I THINK IT HAS SOMETHING TO DO WITH
// RETURNING A VALUE, BUT I HAVEN'T BEEN SUCCESSFUL YET.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include "ReplaceReturn.h"
#include "IntroSequence.h"


//Array is for 'Press enter to continue' effect
char space[3];
char playername[30];
int j = 0;



int main(int argc, const char * argv[])
{
    printf("DETH\nDETH TO ALL\n\n[Logo (alt: Murk)]\n\n");
    
    //Game begins, get name
    printf("ENTER YOUR STUPID NAME, ASSHOLE: ");
    fgets(playername, 30, stdin);
    ReplaceReturn(playername);
    printf("\nYOU WILL DIE TO-NITE, %s! (Press enter to continue)", playername);
    fgets(space, 2, stdin);
    
    //Intro
    printf("\nYOU ARE NOTHING.\nYOU HAVE NO BONES.\nYOU ARE NOT EVEN A MEAT ");
    printf("BAG.");
    fgets(space, 2, stdin);
    printf("\n\n\n..........");
    fgets(space, 2, stdin);
    printf("\n\n\nSSSSSSSSSSSSSS..........");
    fgets(space, 2, stdin);
    printf("\n\n\nTHERE ARE TWO ");
    printf("DIMENSIONS IN FRONT OF YOU.");
    fgets(space, 2, stdin);
    printf("\nWHICH DO YOU CHOOSE? ");
    printf("(Enter 'Left' ");
    printf("or 'Right'): ");
    
    char dir1[7];
    fgets(dir1, 7, stdin);
    ReplaceReturn(dir1);
    
    //Loop to identify user input with invalid command catch
    int i = 0;
    while (i < 1) {
        
        if (strcmp(dir1, "Left") == 0) {
            printf("\nYOU CHOOSE THE LEFT DIMENSION.");
            i++;
            break;
        } else if (strcmp(dir1, "left") == 0) {
            printf("\nYOU CHOOSE THE LEFT DIMENSION.");
            i++;
            break;
        } else if (strcmp(dir1, "Right") == 0) {
            printf("\nYOU CHOOSE THE RIGHT DIMENSION.");
            i++;
            break;
        } else if (strcmp(dir1, "right") == 0) {
            printf("\nYOU CHOOSE THE RIGHT DIMENSION.");
            i++;
            break;
        } else 
            printf("Enter a valid command, idiot: ");
            fgets(dir1, 7, stdin);
            ReplaceReturn(dir1);
    }
    
    if (strcmp(dir1, "Right") == 0) {
        fgets(space, 2, stdin);
        printf("\nYOU CHOSE WRONG!\nYOU ARE DEAD BEFORE YOU EVEN EXISTED!");
        fgets(space, 2, stdin);
        printf("\nWHAT A FOOL.");
        fgets(space, 2, stdin);
        printf("\nGAME OVER");
        fgets(space, 2, stdin);
        printf("\n[Press enter to restart]");
        fgets(space, 2, stdin);
        
        Intro();
            
    }
        
    else if (strcmp(dir1, "right") == 0) {
        fgets(space, 2, stdin);
        printf("\nYOU CHOSE WRONG!\nYOU ARE DEAD BEFORE YOU EVEN EXISTED!");
        fgets(space, 2, stdin);
        printf("\nWHAT A FOOL.");
        fgets(space, 2, stdin);
        printf("\nGAME OVER");
        fgets(space, 2, stdin);
        printf("\n[Press enter to restart]");
        fgets(space, 2, stdin);
        Intro();
            
            
           
        
        
    } else
        printf("Yay");
    
    printf("Yay");
    

    return 0;
}



//Function fixes fgets problem
void ReplaceReturn(char *mystring) {
    int length = (int) strlen(mystring);
    mystring[length - 1] = 0;
}

void Intro() {
    int k = 0;
    while (k < 1) {
        printf("\nDETH\nDETH TO ALL\n\n[Logo (alt: Murk)]\n\n");
        
        //Game begins, get name
        printf("ENTER YOUR STUPID NAME, ASSHOLE: ");
        fgets(playername, 30, stdin);
        ReplaceReturn(playername);
        printf("\nYOU WILL DIE TO-NITE, %s! (Press enter to continue)", playername);
        fgets(space, 2, stdin);
        
        //Intro
        printf("\nYOU ARE NOTHING.\nYOU HAVE NO BONES.\nYOU ARE NOT EVEN A MEAT ");
        printf("BAG.");
        fgets(space, 2, stdin);
        printf("\n\n\n..........");
        fgets(space, 2, stdin);
        printf("\n\n\nSSSSSSSSSSSSSS..........");
        fgets(space, 2, stdin);
        printf("\n\n\nTHERE ARE TWO ");
        printf("DIMENSIONS IN FRONT OF YOU.");
        fgets(space, 2, stdin);
        printf("\nWHICH DO YOU CHOOSE? ");
        printf("(Enter 'Left' ");
        printf("or 'Right'): ");
        
        char dir2[7];
        fgets(dir2, 7, stdin);
        ReplaceReturn(dir2);
        
        //Loop to identify user input with invalid command catch
        int i = 0;
        while (i < 1) {
            
            if (strcmp(dir2, "Left") == 0) {
                printf("\nYOU CHOOSE THE LEFT DIMENSION.");
                i++;
                
                break;
            } else if (strcmp(dir2, "left") == 0) {
                printf("\nYOU CHOOSE THE LEFT DIMENSION.");
                i++;
                
                break;
            } else if (strcmp(dir2, "Right") == 0) {
                printf("\nYOU CHOOSE THE RIGHT DIMENSION.");
                i++;
                break;
            } else if (strcmp(dir2, "right") == 0) {
                printf("\nYOU CHOOSE THE RIGHT DIMENSION.");
                i++;
                break;
            } else
                printf("Enter a valid command, idiot: ");
            fgets(dir2, 7, stdin);
            ReplaceReturn(dir2);
        }
        
        if (strcmp(dir2, "Right") == 0) {
            fgets(space, 2, stdin);
            printf("\nYOU CHOSE WRONG!\nYOU ARE DEAD BEFORE YOU EVEN EXISTED!");
            fgets(space, 2, stdin);
            printf("\nWHAT A FOOL.");
            fgets(space, 2, stdin);
            printf("\nGAME OVER");
            fgets(space, 2, stdin);
            printf("\n[Press enter to restart]");
            fgets(space, 2, stdin);
            while (j < 1) {
                Intro();
            }
        } else if (strcmp(dir2, "right") == 0) {
            fgets(space, 2, stdin);
            printf("\nYOU CHOSE WRONG!\nYOU ARE DEAD BEFORE YOU EVEN EXISTED!");
            fgets(space, 2, stdin);
            printf("\nWHAT A FOOL.");
            fgets(space, 2, stdin);
            printf("\nGAME OVER");
            fgets(space, 2, stdin);
            printf("\n[Press enter to restart]");
            fgets(space, 2, stdin);
            while (j < 1) {
                Intro();
            }
            
        } else
            
        
            k++;
            printf("%d", k);
    
    
        
        break;
    }

        
}

