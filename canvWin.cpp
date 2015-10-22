#include<simplecpp>
//#include"block.h"

void showMessage(string msg);
void drawCanv(int x, int y);

int main(){
	initCanvas("Battlepults",500,400);
	showMessage("!!!!!!*****  WELCOME TO BATTLEPULTS  *****!!!!!!");wait(0.5);
	showMessage("A Game by Vedant Basu and Arkya Chatterjee");wait(0.5);
	drawCanv(100,100);wait(0.5);
	drawCanv(200,200);wait(0.5);
}

void showMessage(string msg){
	Text t1(250,200,msg);
	wait(3);
}

void drawCanv(int x,int y){
	Circle *canon=new Circle;
	*canon=Circle(x,y,10);
	wait(1);
}
