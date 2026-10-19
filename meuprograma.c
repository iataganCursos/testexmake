// gcc meuprograma.c -o meuprograma -l ncurses
#include <curses.h> //<-- Inclua esta biblioteca em nosso projeto.
#include <stdio.h>

int main(int argc, char **argv){

   initscr();
   keypad(stdscr, true);

   start_color(); // Esta função torna possível o uso das cores
   // Fundo da Tela
   init_pair(1,COLOR_WHITE,COLOR_YELLOW); // Texto(Branco) | Fundo(Amarelo)
   bkgd(COLOR_PAIR(1));  // Aqui nós definiremos que a cor de fundo da tela.

   init_pair(2,COLOR_RED,COLOR_WHITE);    //Texto(Vermelho) | Fundo(Branco)
   attron(COLOR_PAIR(2)); // Estamos alterando a cor da letra
   printw("Texto Vermelho Fundo Branco\n");

   init_pair(3,COLOR_WHITE,COLOR_BLUE);   //Texto(branco) | Fundo(Azul)
   attron(COLOR_PAIR(3)); // Estamos alterando a cor da letra
   printw("Texto Branco   Fundo Azul  \n");

   init_pair(4,COLOR_WHITE,COLOR_GREEN);   //Texto(branco) | Fundo(Verde)
   attron(COLOR_PAIR(4)); // Estamos alterando a cor da letra
   printw("Texto Branco   Fundo Verde \n");

   init_pair(5,COLOR_BLACK,COLOR_WHITE);   //Texto(preto) | Fundo(branco)
   attron(COLOR_PAIR(5)); // Estamos alterando a cor da letra
   printw("Precione qualquer tecla para sair.");
   getch();
   endwin();

   return 0;

}