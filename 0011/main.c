#include <stdio.h>
#include <SDL2/SDL.h>
#include <stdlib.h>

SDL_Window *fenetre;
SDL_Renderer *rendu;
#include "draw.h"

SDL_Event evenements;
#include "evenements.h"

int main()
{

SDL_Init(SDL_INIT_VIDEO);
char fini = 0;

fenetre = SDL_CreateWindow("Ce qui se conçoit bien s'énonce clairement",
                              0, 0, 
                              1000, 800, 
                              SDL_WINDOW_OPENGL);
if (fenetre == NULL) {
        printf("N'as point pu créer de fenêtre: %s\n", SDL_GetError());
        return 1;
    }

rendu = SDL_CreateRenderer(fenetre, -1, SDL_RENDERER_ACCELERATED);

if (rendu == NULL) {
        printf("N'as point pu créer de rendu: %s\n", SDL_GetError());
        return 1;
    }

while(!fini)
    {   gerer_evenements(&fini);
        //printf("Troisième Milestone\n");
        draw();
    }   

SDL_DestroyRenderer(rendu);
SDL_DestroyWindow(fenetre);
//printf("\nDeuxième Milestone\n");
SDL_Quit();
}