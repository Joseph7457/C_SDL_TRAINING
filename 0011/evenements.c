void evenement_fenetre(char *fin)
{
    switch(evenements.window.event)
    {
      case SDL_WINDOWEVENT_CLOSE:
      *fin = 1; printf("Quatrième milestone\n");
      break;
      default: break;      
    }

}



void gerer_evenements(char *fin)
{
while (SDL_PollEvent(&evenements)) {
  switch (evenements.type) {
case SDL_WINDOWEVENT: evenement_fenetre(fin); break;
default: break;
}
}
}



