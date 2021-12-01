#include <ncurses\ncurses.h>
int main(){
	
	for(int i=0; i<=5; i++){
		mvprintw(i,i,"J");
	}
	
	for(int i=1; i<=6; i++){
		mvprintw(i,i,"I");
	}
	
	
}		
	
