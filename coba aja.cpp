#include <ncurses\ncurses.h>
int main(){

initscr();
	
	for(int i=0; i<=5; i++){
		mvprintw(i,i,"J");
	}
	
	for(int i=1; i<=6; i++){
		mvprintw(i,i+2,"I");
	}
	
	for(int i=2; i<=7; i++){
		mvprintw(i,i+4,"H");
	}
	
	for(int i=3; i<=8; i++){
		mvprintw(i,i,"A");
	}
	
	for(int i=4; i<=9; i++){
		mvprintw(i,i,"N");
	}
	
getch();
endwin();
}		
	
