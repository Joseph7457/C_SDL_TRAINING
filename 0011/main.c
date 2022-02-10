#include <stdio.h>
#include <SDL2/SDL.h>
#include <stdlib.h>
#include "draw.h"


int main()
{

SDL_Init(SDL_INIT_VIDEO);
char fini = 0;

SDL_Window *fenetre = SDL_CreateWindow("Ce qui se conçoit bien s'énonce clairement",
                              0, 0, 
                              800, 800, 
                              SDL_WINDOW_OPENGL);
SDL_Renderer *rendu = SDL_CreateRenderer(fenetre, -1, SDL_RENDERER_ACCELERATED);

if (fenetre == NULL) {
        printf("N'as point pu créer de fenêtre: %s\n", SDL_GetError());
        return 1;
    }


while(!fini)
    {
        SDL_RenderClear(rendu);
        SDL_RenderPresent(rendu);
        printf("Troisième Milestone\n");
        draw();
        fini = 1;
    }   


SDL_DestroyRenderer(rendu);
SDL_DestroyWindow(fenetre);
printf("\nDeuxième Milestone\n");
SDL_Quit();
}