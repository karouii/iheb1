@file[<name>].
/**
* @file main.c
* @brief Testing Program.
* @author C Team
* @version 0.1
* @date Apr 01, 2015
*
* Testing program for background scrollilng
*
*/
#include "fin.h"
void fin (personnage* perso,SDL_Surface* screen,SDL_Rect* positionecran1,int* compteur2,int* statut){
SDL_Surface bs_lost;
SDL_Surface bs_win;
bs_win= IMG_Load("win.png");
if (bs_win == NULL){
printf("Unable to load png: %s\n",SDL_GetError());
    }
bs_lost = IMG_Load("gameovers.png");
if (bs_lost == NULL){
printf("Unable to load png: %s\n",SDL_GetError());
    }	
if (perso->vie == 0){ //Menu Game over

			SDL_BlitSurface(bs_lost,NULL,screen,&positionecran1);
			SDL_Dilay(5000);
			
		}
if (compteur2 == 5){ //Menu Game over
			SDL_BlitSurface(bs_lost,NULL,screen,&positionecran1);
			SDL_Dilay(5000);
			
		}
else if (statut == 1){ //Menu Win
			SDL_BlitSurface(bs_win,NULL,screen,&positionecran1);
			SDL_Dilay(5000);
}
}

