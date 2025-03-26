//============================================================================
// Name        : Humaiyon Abdullah
// Roll Number : i210662
// Section     : B
// Author      : FAST CS Department
// Version     : Alpha 0.4
// Copyright   : (c) Reserved
// Description : Basic 2D game of Rush Hour...
//============================================================================

#ifndef RushHour_CPP_
#define RushHour_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<fstream>
#include<cmath> 
using namespace std;

void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); 
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}

int scor=0;			//Declaring variables for everything
int xI = 20 , yI = 780;
int x1 = 100, y2 = 400;
int x2 = 60 , y3 = 200;
int x3 = 760, y4 = 100;
int x4 = 480, y5 = 280;
int n1 = 960, m1 = 110; 
int n2 = 960, m2 = 800;
int n3 = 960, m3 = 640;
int n4 = 160, m4 = 110;
int n5 = 100, m5 = 100;
bool person=true  , loc=true;
bool person1=true , loc1=true;
bool person2=true , loc2=true;
bool person3=true , loc3=true;
bool start1=false , menu1=true;
bool leaderboard=false;
bool select1=false;
bool conti=false;
int randomloc;
int color;
int sco=0;
int time1=0,time2=0,time3=0;
bool time6=false;
bool neg=true;
bool neg1=true;
bool neg2=true;
bool neg3=true;
bool neg4=true;
bool neg5=true;
bool neg6=true;
bool neg7=true;
bool neg8=true;
bool neg9=true;
bool neg10=true;
bool neg11=true;
bool neg12=true;
bool neg12t=false;
bool neg13=true;
bool neg14=true;
bool checkss=true;
int counte=0;
bool fini=false;
int speedsl=10;
bool sl=true;
int arr[10]={0,0,0,0,0,0,0,0,0,0};	//Functions for drop off locations
void location () {

	DrawSquare(20, 80, 40, colors[YELLOW]);
}
void location1 () {

	DrawSquare(20, 780, 40, colors[YELLOW]);
}
void location2 () {

	DrawSquare(220, 80, 40, colors[YELLOW]);
}
void location3 () {

	DrawSquare(550, 580, 40, colors[YELLOW]);
}

void woman() {			//Functions for the passengers
	DrawLine( n1 , m1 -32 ,  n1 , m1 , 5 , colors[GOLD] );
	DrawLine( n1-10 , m1-10  ,  n1+10 , m1-10 , 5 , colors[GOLD] );
	DrawCircle(n1,m1,10,colors[PURPLE]);
}
void woman1() {
	DrawLine( n2 , m2 -32 ,  n2 , m2 , 5 , colors[MAGENTA] );
	DrawLine( n2-10 , m2-10  ,  n2+10 , m2-10 , 5 , colors[MAGENTA] );
	DrawCircle(n2,m2,10,colors[PURPLE]);
}
void woman2() {
	DrawLine( n3 , m3 -32 ,  n3 , m3 , 5 , colors[CADET_BLUE] );
	DrawLine( n3-10 , m3-10  ,  n3+10 , m3-10 , 5 , colors[CADET_BLUE] );
	DrawCircle(n3,m3,10,colors[PURPLE]);
}
void woman3() {
	DrawLine( n4 , m4 -32 ,  n4 , m4 , 5 , colors[VIOLET] );
	DrawLine( n4-10 , m4-10  ,  n4+10 , m4-10 , 5 , colors[VIOLET] );
	DrawCircle(n4,m4,10,colors[PURPLE]);
}

void drawCar() {		//Functions for Cars including taxi
	if (color==1)
	{
	DrawSquare(xI, yI, 40, colors[YELLOW]);
	}
	if (color==2)
	{
	DrawSquare(xI, yI, 40, colors[RED]);
	}
	DrawCircle(xI+10,yI+8,6,colors[WHITE]);
	DrawCircle(xI+28,yI+8,6,colors[WHITE]);
	DrawSquare(xI+12, yI+20, 15, colors[ORANGE]);
	glutPostRedisplay();
}
void drawCar1() {
	DrawSquare(x1, y2, 40, colors[RED]);
	DrawCircle(x1+10,y2+8,6,colors[WHITE]);
	DrawCircle(x1+28,y2+8,6,colors[WHITE]);
	glutPostRedisplay();
}
void drawCar2() {
	DrawSquare(x2, y3, 40, colors[GOLD]);
	DrawCircle(x2+10,y3+8,6,colors[WHITE]);
	DrawCircle(x2+28,y3+8,6,colors[WHITE]);
	glutPostRedisplay();
}
void drawCar3() {
	DrawSquare(x3, y4, 40, colors[GREEN]);
	DrawCircle(x3+10,y4+8,6,colors[WHITE]);
	DrawCircle(x3+28,y4+8,6,colors[WHITE]);
	glutPostRedisplay();
}
void drawCar4() {
	DrawSquare(x4, y5, 40, colors[BLUE]);
	DrawCircle(x4+10,y5+8,6,colors[WHITE]);
	DrawCircle(x4+28,y5+8,6,colors[WHITE]);
	glutPostRedisplay();
}

bool flag = true;
bool flag1 = true;
bool flag2 = true;
bool flag3 = true;
	void moveCar1() {	//Functions to move cars except the taxi
				//Using if else to set limits and speed
	if (y2 > 10 && flag) {
		if(counte<2)
		{
		y2 -= 10;
		}
		else if(counte==2)
		{
		y2 -=15;
		}
		else if(counte==3)
		{
		y2-=20;
		}
		else if(counte>3)
		{
		y2-=25;
		}
		if(y2 < 100)
			
			flag = false;
		

	}
	else if (y2 < 760 && !flag) {
		
		if(counte<2)
		{
		y2 += 10;
		}
		else if(counte==2)
		{
		y2 +=15;
		}
		else if(counte==3)
		{
		y2+=20;
		}
		else if(counte>3)
		{
		y2+=25;
		}
		if (y2 > 750)
			flag = true;
	}
}
void moveCar2() {
	
	if (y3 > 10 && flag1) {
		if(counte==2)
		{
		y3 -=15;
		}
		else if(counte==3)
		{
		y3-=20;
		}
		else if(counte>3)
		{
		y3-=25;
		}
		else if(counte<2)
		{
		y3 -= 10;
		}
		if(y3 < 100)
			
			flag1 = false;
		

	}
	else if (y3 < 760 && !flag1) {
		
		if(counte==2)
		{
		y3 +=15;
		}
		else if(counte==3)
		{
		y3+=20;
		}
		else if(counte>3)
		{
		y3+=25;
		}
		else if(counte<2)
		{
		y3 += 10;
		}
		if (y3 > 750)
			flag1 = true;
	}
}
void moveCar3() {
	
	if (y4 > 10 && flag2) {
		if(counte<2)
		{
		y4 -= 10;
		}
		else if(counte==2)
		{
		y4 -=15;
		}
		else if(counte==3)
		{
		y4-=20;
		}
		else if(counte>3)
		{
		y4-=25;
		}
		if(y4 < 100)
			
			flag2 = false;
		

	}
	else if (y4 < 640 && !flag2) {
		
		if(counte<2)
		{
		y4 += 10;
		}
		else if(counte==2)
		{
		y4 +=15;
		}
		else if(counte==3)
		{
		y4+=20;
		}
		else if(counte>3)
		{
		y4+=25;
		}
		if (y4 > 630)
			flag2 = true;
	}
}
void moveCar4() {
	
	if (x4 > 220 && flag3) {
		if(counte<2)
		{
		x4 -= 10;
		}
		else if(counte==2)
		{
		x4-=15;
		}
		else if(counte==3)
		{
		x4-=20;
		}
		else if(counte>3)
		{
		x4-=25;
		}
		if(x4 < 230)
			
			flag3 = false;
		

	}
	else if (x4 < 660 && !flag3) {
		
		if(counte<2)
		{
		x4 += 10;
		}
		else if(counte==2)
		{
		x4+=15;
		}
		else if(counte==3)
		{
		x4+=20;
		}
		else if(counte>3)
		{
		x4+=25;
		}
		if (x4 > 650)
			flag3 = true;
	}
}


void checksc()		//Function to store scores in file scores.txt
{
string temp=Num2Str(sco);
	fstream myfile;
	myfile.open("scores.txt",ios::out|ios::app);
	if(myfile.is_open())
	{
	myfile<<temp<<endl;
	myfile.close();
	}
	
}
void game1(){		//Function for the playable game
	static bool tempt1=true;
	time6=tempt1;
	string ss,ss2,ss3;
// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			1.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); 

	//For boundaries
	DrawLine( 1010 , 10 ,  1010 , 1000 , 10 , colors[BLACK] );
	DrawLine( 10 , 10 ,  10 , 1000 , 10 , colors[BLACK] );
	DrawLine( 10 , 70 ,  1010 , 70 , 10 , colors[BLACK] );
	DrawLine( 10 , 830 ,  1010 , 830 , 10 , colors[BLACK] );
	
	//For buildings
	DrawSquare(140, 700, 40, colors[BLACK]);
	DrawSquare(179, 700, 40, colors[BLACK]);
	DrawSquare(218, 700, 40, colors[BLACK]);
	DrawSquare(462, 700, 40, colors[BLACK]);
	DrawSquare(500, 700, 40, colors[BLACK]);
	DrawSquare(540, 700, 40, colors[BLACK]);
	DrawSquare(579, 700, 40, colors[BLACK]);
	DrawSquare(618, 700, 40, colors[BLACK]);
	DrawSquare(657, 700, 40, colors[BLACK]);
	DrawSquare(696, 700, 40, colors[BLACK]);
	DrawSquare(735, 700, 40, colors[BLACK]);
	DrawSquare(754, 700, 40, colors[BLACK]);
	DrawSquare(793, 700, 40, colors[BLACK]);
	DrawSquare(832, 700, 40, colors[BLACK]);
	DrawSquare(871, 700, 40, colors[BLACK]);
	DrawSquare(910, 700, 40, colors[BLACK]);
	DrawSquare(949, 700, 40, colors[BLACK]);
	DrawSquare(978, 700, 40, colors[BLACK]);
	DrawSquare(140, 540, 40, colors[BLACK]);
	DrawSquare(179, 540, 40, colors[BLACK]);
	DrawSquare(179, 501, 40, colors[BLACK]);
	DrawSquare(179, 462, 40, colors[BLACK]);
	DrawSquare(260, 540, 40, colors[BLACK]);
	DrawSquare(299, 540, 40, colors[BLACK]);
	DrawSquare(338, 540, 40, colors[BLACK]);
	DrawSquare(338, 577, 40, colors[BLACK]);
	DrawSquare(338, 616, 40, colors[BLACK]);
	DrawSquare(338, 655, 40, colors[BLACK]);
	DrawSquare(520, 540, 40, colors[BLACK]);
	DrawSquare(559, 540, 40, colors[BLACK]);
	DrawSquare(598, 540, 40, colors[BLACK]);
	DrawSquare(598, 579, 40, colors[BLACK]);
	DrawSquare(598, 618, 40, colors[BLACK]);
	DrawSquare(798, 618, 40, colors[BLACK]);
	DrawSquare(798, 579, 40, colors[BLACK]);
	DrawSquare(798, 540, 40, colors[BLACK]);
	DrawSquare(798, 501, 40, colors[BLACK]);
	DrawSquare(798, 462, 40, colors[BLACK]);
	DrawSquare(720, 462, 40, colors[BLACK]);
	DrawSquare(880, 462, 40, colors[BLACK]);
	DrawSquare(520, 462, 40, colors[BLACK]);
	DrawSquare(520, 501, 40, colors[BLACK]);
	DrawLine( 320 , 400 ,  520 , 400 , 25 , colors[BLACK] );
	DrawSquare(400, 419, 40, colors[BLACK]);
	DrawSquare(180, 157, 40, colors[BLACK]);
	DrawSquare(180, 118, 40, colors[BLACK]);
	DrawSquare(180, 79, 40, colors[BLACK]);
	DrawSquare(260, 196, 40, colors[BLACK]);
	DrawSquare(260, 157, 40, colors[BLACK]);
	DrawSquare(260, 118, 40, colors[BLACK]);
	DrawSquare(260, 79, 40, colors[BLACK]);
	DrawSquare(400, 196, 40, colors[BLACK]);
	DrawSquare(439, 196, 40, colors[BLACK]);
	DrawSquare(478, 196, 40, colors[BLACK]);
	DrawSquare(478, 235, 40, colors[BLACK]);
	DrawSquare(638, 196, 40, colors[BLACK]);
	DrawSquare(677, 196, 40, colors[BLACK]);
	DrawSquare(716, 196, 40, colors[BLACK]);
	DrawSquare(677, 235, 40, colors[BLACK]);
	DrawSquare(880, 237, 40, colors[BLACK]);
	DrawSquare(880, 198, 40, colors[BLACK]);
	DrawSquare(880, 159, 40, colors[BLACK]);
	DrawSquare(880, 120, 40, colors[BLACK]);
	
	//for obstacles
	DrawSquare(938, 520, 20, colors[SADDLE_BROWN]);
	DrawSquare(520,790,20,colors[SADDLE_BROWN]);
	
	DrawLine( 320 , 580 ,  320 , 630 , 5 , colors[BROWN] );
	DrawCircle(320,620,15,colors[YELLOW]);
	
	DrawLine( 520 , 80 ,  520 , 130 , 5 , colors[BROWN] );
	DrawCircle(520,120,15,colors[YELLOW]);
	
	DrawLine( 660 , 340 , 660 , 390 , 5 , colors[BROWN] );
	DrawCircle(660,380,15,colors[YELLOW]);
	
	DrawSquare(560, 500, 20, colors[SADDLE_BROWN]);
	DrawSquare(680, 170, 20, colors[SADDLE_BROWN]);
	
	if(time2==60)
	{
	time2=0;
	time3+=1;
	}
	ss=Num2Str(sco);
	ss2=Num2Str(time2);
	ss3=Num2Str(time3);
	
	//for timer and score
	DrawString( 40, 20, "Score=", colors[BLACK]);
	DrawString( 160, 20, ss , colors[BLACK]);
	DrawString( 660, 20, "TIMER: ", colors[BLACK]);
	DrawString( 860, 20, ss2 , colors[BLACK]);
	DrawString( 830, 20, ":", colors[BLACK]);
	DrawString( 800, 20, ss3 , colors[BLACK]);

	//calling functions to draw cars, passengers and locations
	drawCar();
	drawCar1();
	if(counte>=2)
	{
	drawCar2();
	neg12t=true;
	}
	if(counte>=4)
	{
	drawCar3();
	}
	if(counte>=6)
	{
	drawCar4();
	}
	if (person==true)
	{
		woman();
	}
	if (loc == !true)
	{
		location();
	}
	if (person1==true)
	{
		woman1();
	}
	if (loc1 == !true)
	{
		location1();
	}
	if (person2==true)
	{
		woman2();
	}
	if (loc2 == !true)
	{
		location2();
	}
	if (person3==true)
	{
		woman3();
	}
	if (loc3 == !true)
	{
		location3();
	}
	tempt1=false;
	if(time3>=3)
	{
	fini=true;
	}
	if(time3==3&&checkss==true)
	{
	checksc();
	checkss=false;
	}
}
void carselec(){		//Function for car select menu
glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			1.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); 
	DrawLine( 370 , 540 ,  650 , 540 , 40 , colors[WHITE] );
	DrawString( 440, 530, "RED CAR", colors[WHITE]);
	DrawLine( 370 , 460 ,  650 , 460 , 40 , colors[SADDLE_BROWN] );
	DrawString( 410, 450, "GREEN CAR", colors[WHITE]);
	DrawLine( 370 , 380 ,  650 , 380 , 40 , colors[SADDLE_BROWN] );
	DrawString( 440, 370, "RED CAR", colors[WHITE]);
	DrawString( 400, 680, "CAR SELECT:", colors[BLACK]);

}

void winwin()		//function for finishing outcome
{
glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			1.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); 
	if(sco>=100){
	DrawLine( 340 , 460 ,  680 , 460 , 40 , colors[SADDLE_BROWN] );
	DrawString( 360, 450, "YOU WON SENPAI!", colors[WHITE]);
	}
	if(sco<100){
	DrawLine( 340 , 460 ,  680 , 460 , 40 , colors[SADDLE_BROWN] );
	DrawString( 360, 450, "You Lost :(", colors[WHITE]);
	}
}
void menu()		//Function for menu
{
glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			1.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); 
	if (conti==true)
	{
	DrawLine( 370 , 540 ,  650 , 540 , 40 , colors[SADDLE_BROWN] );
	DrawString( 430, 530, "Continue <3", colors[WHITE]);
	}
	else
	{
	DrawLine( 370 , 540 ,  650 , 540 , 40 , colors[SADDLE_BROWN] );
	DrawString( 460, 530, "Start <3", colors[WHITE]);
	}
	DrawLine( 370 , 460 ,  650 , 460 , 40 , colors[SADDLE_BROWN] );
	DrawString( 410, 450, "LeaderBoard", colors[WHITE]);
	DrawLine( 370 , 380 ,  650 , 380 , 40 , colors[SADDLE_BROWN] );
	DrawString( 460, 370, "Exit :(", colors[WHITE]);
	DrawString( 400, 680, "RUSH HOUR!", colors[BLACK]);
	drawCar2();
}

void leader(){		//Function for leaderboard
glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			1.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT);
	DrawLine(320,800,660,800,50,colors[SADDLE_BROWN]);
	DrawString( 400, 800, "LeaderBoard", colors[WHITE]); 
	int ii=70,j=700;
	int k=1;
	int n=0;
	fstream myfile;
	myfile.open("scores.txt",ios::in);	//to get values stored in scores.txt
	if(myfile.is_open())
	{
		string out1,out2;
		while(getline(myfile,out1)&&k<11)
		{
		
		
		arr[n]=stoi(out1);
		n++;
		k++;
		
		}
		for (int i=0;i<10;i++)		//bubble sorting
		{
			for(int j=i+1;j<10;j++)
			{
				if (arr[j]>arr[i])
				{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				}
			}
		}
		k=1;
		for (int i=0;i<10;i++)		//displaying highscores
		{
		string kk=Num2Str(k);
		out2=Num2Str(arr[i]);
		DrawString( 10, j, kk, colors[BLACK]);
		DrawString( 50, j, ".", colors[BLACK]);
		DrawString( 70, j, out2, colors[BLACK]);
		j-=50;
		k++;
		}
	myfile.close();
	}	
	
}
void GameDisplay()/**/{	//Function to display everything collectively
	
	if (menu1==true)	//Displaying function according to respective selection
	{
	menu();
	}
	if (start1==true)
	{
	carselec();
	}
	if (select1==true)
	{
	
	game1();
	
	}
	if (leaderboard==true)
	{
	leader();
	}
	if (fini==true)
	{
	winwin();
	}
	glutSwapBuffers(); // do not modify this line..

}



//Applying limits so that the taxi remains within bounded area
void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT && xI>20 && !((xI==260&&yI>660)&&(xI==260&&yI<740)) && !((xI==380&&yI>500)&&(xI==380&&yI<700)) && !((xI==640&&yI>500)&&(xI==640&&yI<660))&& !((xI==840&&yI>420)&&(xI==840&&yI<660)) && !((xI==220&&yI>420)&&(xI==220&&yI<580)) && !((xI==560&&yI>420)&&(xI==560&&yI<580)) && !((xI==760&&yI>420)&&(xI==760&&yI<510)) && !((xI==920&&yI>420)&&(xI==920&&yI<510)) && !((xI==440&&yI>340)&&(xI==440&&yI<460)) && !((xI==520&&yI>340)&&(xI==520&&yI<420))&& !((xI==920&&yI>80)&&(xI==920&&yI<280)) && !((xI==720&&yI>180)&&(xI==720&&yI<280)) && !((xI==760&&yI>150)&&(xI==760&&yI<240)) && !((xI==520&&yI>150)&&(xI==520&&yI<280)) && !((xI==220&&yI>70)&&(xI==220&&yI<200))  && !((xI==300&&yI>70)&&(xI==300&&yI<240))  ) {
		// what to do when left key is pressed...
		if(color==2){
		xI -= 10;
		}
		if(color==1)
		{
		xI-=5;
		}

	} else if (key
			== GLUT_KEY_RIGHT && xI<960 && !((xI==100&&yI>660)&&(xI==100&&yI<740)) && !((xI==420&&yI>660)&&(xI==420&&yI<740)) && !((xI==290&&yI>500)&&(xI==290&&yI<700)) && !((xI==550&&yI>500)&&(xI==550&&yI<660)) && !((xI==760&&yI>420)&&(xI==760&&yI<660)) && !((xI==100&&yI>500)&&(xI==100&&yI<580)) && !((xI==140&&yI>420)&&(xI==140&&yI<510)) && !((xI==220&&yI>500)&&(xI==220&&yI<580)) && !((xI==480&&yI>420)&&(xI==480&&yI<580)) && !((xI==680&&yI>420)&&(xI==680&&yI<510)) && !((xI==840&&yI>420)&&(xI==840&&yI<510)) && !((xI==140&&yI>70)&&(xI==140&&yI<200))  && !((xI==220&&yI>70)&&(xI==220&&yI<240)) && !((xI==360&&yI>140)&&(xI==360&&yI<240)) && !((xI==430&&yI>180)&&(xI==430&&yI<280)) && !((xI==590&&yI>150)&&(xI==590&&yI<240)) && !((xI==630&&yI>180)&&(xI==630&&yI<280)) && !((xI==840&&yI>80)&&(xI==840&&yI<280)) && !((xI==280&&yI>340)&&(xI==280&&yI<420)) && !((xI==360&&yI>340)&&(xI==360&&yI<460))){
		if(color==2){
		xI += 10;
		}
		if(color==1)
		{
		xI+=5;
		}
	} else if (key
			== GLUT_KEY_UP && yI<780&& !((xI>100&&yI==660)&&(xI<260&&yI==660)) && !((xI>420&&yI==660)&&(xI<970&&yI==660)) && !((xI>140&&yI==420)&&(xI<220&&yI==420)) && !((xI>100&&yI==500)&&(xI<150&&yI==500)) && !((xI>220&&yI==500)&&(xI<380&&yI==500)) && !((xI>480&&yI==420)&&(xI<560&&yI==420)) && !((xI>520&&yI==500)&&(xI<640&&yI==500)) && !((xI>680&&yI==420)&&(xI<760&&yI==420)) && !((xI>760&&yI==420)&&(xI<840&&yI==420)) && !((xI>840&&yI==420)&&(xI<920&&yI==420)) && !((xI>360&&yI==150)&&(xI<520&&yI==150)) && !((xI>590&&yI==150)&&(xI<760&&yI==150)) && !((xI>840&&yI==80)&&(xI<920&&yI==80)) && !((xI>280&&yI==340)&&(xI<520&&yI==340)) )  {
		if(color==2){
		yI += 10;
		}
		if(color==1)
		{
		yI+=5;
		}
	}

	else if (key
			== GLUT_KEY_DOWN && yI > 80 && !((xI>100&&yI==740)&&(xI<260&&yI==740)) && !((xI>420&&yI==740)&&(xI<970&&yI==740)) && !((xI>290&&yI==700)&&(xI<380&&yI==700)) && !((xI>550&&yI==660)&&(xI<640&&yI==660)) && !((xI>760&&yI==660)&&(xI<840&&yI==660)) && !((xI>480&&yI==580)&&(xI<640&&yI==580)) && !((xI>100&&yI==580)&&(xI<220&&yI==580)) && !((xI>220&&yI==580)&&(xI<380&&yI==580)) && !((xI>680&&yI==510)&&(xI<760&&yI==510)) && !((xI>840&&yI==510)&&(xI<920&&yI==510))  && !((xI>360&&yI==460)&&(xI<440&&yI==460)) && !((xI>280&&yI==420)&&(xI<520&&yI==420)) && !((xI>430&&yI==280)&&(xI<520&&yI==280))&& !((xI>360&&yI==240)&&(xI<520&&yI==240)) && !((xI>220&&yI==240)&&(xI<300&&yI==240)) && !((xI>140&&yI==200)&&(xI<220&&yI==200)) && !((xI>840&&yI==280)&&(xI<920&&yI==280)) && !((xI>590&&yI==240)&&(xI<760&&yI==240)) && !((xI>630&&yI==280)&&(xI<720&&yI==280))) {
		if(color==2){
		yI -= 10;
		}
		if(color==1)
		{
		yI-=5;
		}
	}



	glutPostRedisplay();

}


void PrintableKeys(unsigned char key, int x, int y) {
	randomloc=rand()%4+1;
	if (key == 27) {	//What to do when esc is pressed
		leaderboard=false;
		start1=false;
		select1=false;
		menu1=true;
		conti=true;
		if(fini==true)
		{
		exit(1);
		}
	}

	if (key == 'b' || key == 'B') 
			{
		//do something if b is pressed
		cout << "b pressed" << endl;

	}
	
	if ((person1==true&&person2==true&&person3==true&&person == true && key == 32 &&( ((xI>890 && xI<950) && (yI>70 && yI<120))||((xI>890 && xI<960)&&(yI>110 && yI<140) )))) //When pressed space near person
			{
		
		person = false;
		
		switch (randomloc)
		{
			case 1: loc = false;
			break;
			case 2: loc1 = false;
			break;
			case 3: loc2 = false;
			break;
			case 4: loc3 = false;
			break;
		}
		

	}
	if (key == 32 && (xI==20 && yI==80)) //pressed space on dropoff
			{
		if (person==false)
		{
		person=true;
		}
		else if (person1==false)
		{
		person1=true;
		}
		else if (person2==false)
		{
		person2=true;
		}
		else if (person3==false)
		{
		person3=true;
		}
		loc=true;
		counte++;
		sco+=10;

	}
	if ((person1==true&&person2==true&&person3==true&&person == true && key == 32 &&( (xI>890 && xI<950)&&(yI>740&&yI<810)))) //pressed space near another person
			{
		
		person1 = false;
		switch (randomloc)
		{
			case 1: loc = false;
			break;
			case 2: loc1 = false;
			break;
			case 3: loc2 = false;
			break;
			case 4: loc3 = false;
			break;
		}

	}
	if (key == 32 && (xI==20 && yI==780)) //pressed space on another dropoff location
			{
		
		if (person==false)
		{
		person=true;
		}
		else if (person1==false)
		{
		person1=true;
		}
		else if (person2==false)
		{
		person2=true;
		}
		else if (person3==false)
		{
		person3=true;
		}
		loc1=true;
		counte++;
		sco+=10;

	}
	if ((person1==true&&person2==true&&person3==true&&person == true&& key == 32 && (((xI>890 && xI<920)&&(yI>590&&yI<640))||((xI>920&&xI<960)&&(yI>640&&yI<660))||((xI>920&&xI<960)&&(yI>550&&yI<570))))) //pressed space near another person
			{
		
		person2 = false;
		switch (randomloc)
		{
			case 1: loc = false;
			break;
			case 2: loc1 = false;
			break;
			case 3: loc2 = false;
			break;
			case 4: loc3 = false;
			break;
		}

	}
	if (key == 32 && (xI==220 && yI==80)) //pressed space on another dropoff location
			{
		
		if (person==false)
		{
		person=true;
		}
		else if (person1==false)
		{
		person1=true;
		}
		else if (person2==false)
		{
		person2=true;
		}
		else if (person3==false)
		{
		person3=true;
		}
		loc2=true;
		counte++;
		sco+=10;
	}
	if ((person1==true&&person2==true&&person3==true&&person == true&& key == 32 && (((xI>90 && xI<120)&&(yI>70&&yI<110))||((xI>110&&xI<150)&&(yI>100&&yI<140))))) //pressed space near another person
			{
		
		person3 = false;
		switch (randomloc)
		{
			case 1: loc = false;
			break;
			case 2: loc1 = false;
			break;
			case 3: loc2 = false;
			break;
			case 4: loc3 = false;
			break;
		}

	}
	if (key == 32 && (xI==550 && yI==580)) //pressed space on another dropoff location
			{
		
		
		if (person==false)
		{
		person=true;
		}
		else if (person1==false)
		{
		person1=true;
		}
		else if (person2==false)
		{
		person2=true;
		}
		else if (person3==false)
		{
		person3=true;
		}
		loc3=true;
		counte++;
		sco+=10;

	}
	glutPostRedisplay();
}




void Timer(int m) {	//Function to keep moving cars

	
	moveCar1();
	moveCar2();
	moveCar3();
	moveCar4();
			//statements for score deduction of collision with obstacles,persons and cars.
	if(neg==true && (xI>460&&xI<530) && (yI>70&&yI<140))
	{
		if(color==1)
		{
		sco-=2;
		}
		if(color==2)
		{
		sco-=4;
		}
		neg=false;
	}
	else if(neg==false && !((xI>460&&xI<530) && (yI>70&&yI<140)))
	{
	neg=true;
	}
	if(neg1==true && (xI>600&&xI<680) && (yI>300&&yI<400))
	{
		if(color==1)
		{
		sco-=2;
		}
		if(color==2)
		{
		sco-=4;
		}
		neg1=false;
	}
	else if(neg1==false && !((xI>600&&xI<680) && (yI>300&&yI<400)))
	{
	neg1=true;
	}
	if(neg2==true && (xI>260&&xI<300) && (yI>570&&yI<640))
	{
		if(color==1)
		{
		sco-=2;
		}
		if(color==2)
		{
		sco-=4;
		}
		neg2=false;
	}
	else if(neg2==false && !((xI>260&&xI<300) && (yI>570&&yI<640)))
	{
	neg2=true;
	}
	if(neg3==true && (xI>890&&xI<960) && (yI>480&&yI<540))
	{
		if(color==1)
		{
		sco-=2;
		}
		if(color==2)
		{
		sco-=4;
		}
		neg3=false;
	}
	else if(neg3==false && !((xI>890&&xI<960) && (yI>480&&yI<540)))
	{
	neg3=true;
	}
	if(neg4==true && (xI>480&&xI<540) && (yI>750&&yI<810))
	{
		if(color==1)
		{
		sco-=2;
		}
		if(color==2)
		{
		sco-=4;
		}
		neg4=false;
	}
	else if(neg4==false && !((xI>480&&xI<540) && (yI>750&&yI<810)))
	{
	neg4=true;
	}
	if(neg5==true && (xI>520&&xI<580) && (yI>460&&yI<520))
	{
		if(color==1)
		{
		sco-=2;
		}
		if(color==2)
		{
		sco-=4;
		}
		neg5=false;
	}
	else if(neg5==false && !((xI>520&&xI<580) && (yI>460&&yI<520)))
	{
	neg5=true;
	}
	if(neg6==true && (xI>640&&xI<700) && (yI>130&&yI<190))
	{
		if(color==1)
		{
		sco-=2;
		}
		if(color==2)
		{
		sco-=4;
		}
		neg6=false;
	}
	else if(neg6==false && !((xI>640&&xI<700) && (yI>130&&yI<190)))
	{
	neg6=true;
	}
	if(person&&neg7==true && (xI>910&&xI<980) && (yI>70&&yI<120))
	{
		if(color==1)
		{
		sco-=5;
		}
		if(color==2)
		{
		sco-=5;
		}
		neg7=false;
	}
	else if(person&&neg7==false && !((xI>910&&xI<980) && (yI>70&&yI<120)))
	{
	neg7=true;
	}
	if(person1&&neg8==true && (xI>910&&xI<980) && (yI>730&&yI<810))
	{
		if(color==1)
		{
		sco-=5;
		}
		if(color==2)
		{
		sco-=5;
		}
		neg8=false;
	}
	else if(person1&&neg8==false && !((xI>910&&xI<980) && (yI>730&&yI<810)))
	{
	neg8=true;
	}
	if(person2&&neg9==true && (xI>910&&xI<980) && (yI>570&&yI<650))
	{
		if(color==1)
		{
		sco-=5;
		}
		if(color==2)
		{
		sco-=5;
		}
		neg9=false;
	}
	else if(person2&&neg9==false && !((xI>910&&xI<980) && (yI>570&&yI<650)))
	{
	neg9=true;
	}
	if(person3&&neg10==true && (xI>110&&xI<160) && (yI>70&&yI<120))
	{
		if(color==1)
		{
		sco-=5;
		}
		if(color==2)
		{
		sco-=5;
		}
		neg10=false;
	}
	else if(person3&&neg10==false && !((xI>110&&xI<160) && (yI>70&&yI<120)))
	{
	neg10=true;
	}
	if(neg11==true && (xI>x1-40&&xI<x1+40) && (yI>y2-40&&yI<y2+40))
	{
		if(color==1)
		{
		sco-=2;
		}
		if(color==2)
		{
		sco-=4;
		}
		neg11=false;
	}
	else if(neg11==false && !((xI>x1-40&&xI<x1+40) && (yI>y2-40&&yI<y2+40)))
	{
	neg11=true;
	}
	if(counte>=2&&neg12==true && (xI>x2-40&&xI<x2+40) && (yI>y3-40&&yI<y3+40))
	{
		if(color==1)
		{
		sco-=2;
		}
		if(color==2)
		{
		sco-=4;
		}
		neg12=false;
		
	}
	else if(counte>=2&&neg12==false && !((xI>x2-40&&xI<x2+40) && (yI>y3-40&&yI<y3+40)))
	{
	neg12=true;
	}
	if(counte>=4&&neg13==true && (xI>x3-40&&xI<x3+40) && (yI>y4-40&&yI<y4+40))
	{
		if(color==1)
		{
		sco-=2;
		}
		if(color==2)
		{
		sco-=4;
		}
		neg13=false;
		
	}
	else if(counte>=4&&neg13==false && !((xI>x3-40&&xI<x3+40) && (yI>y4-40&&yI<y4+40)))
	{
	neg13=true;
	}
	if(counte>=6&&neg14==true && (xI>x4-40&&xI<x4+40) && (yI>y5-40&&yI<y5+40))
	{
		if(color==1)
		{
		sco-=2;
		}
		if(color==2)
		{
		sco-=4;
		}
		neg14=false;
		
	}
	else if(counte>=6&&neg14==false && !((xI>x4-40&&xI<x4+40) && (yI>y5-40&&yI<y5+40)))
	{
	neg14=true;
	}
	
	
	
	glutTimerFunc(50, Timer, 0);
}

void time69(int x){
if(select1==true){
time2+=1;
}
glutTimerFunc(1000, time69, 0);
}



void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	glutPostRedisplay();
}


void MouseClicked(int button, int state, int x, int y) {
int ske;
//using statements for what happens when user clicks in a certain region

	if (button == GLUT_LEFT_BUTTON&&state&&menu1&&(x>280&&x<460)&&(y>170&&y<210)  ) 
			{
		menu1=false;
		start1=true;
		ske=1;

	}
	if (button == GLUT_LEFT_BUTTON&&state&&menu1&&(x>280&&x<460)&&(y>220&&y<260)  ) 
			{
		
		leaderboard=true;

	}
	if (button == GLUT_LEFT_BUTTON&&state&&menu1&&(x>280&&x<460)&&(y>270&&y<310)  ) 
			{
		
		exit(1); 

	}
	 else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;

	}
	if (button == GLUT_LEFT_BUTTON&&state&&start1&&(x>280&&x<460)&&(y>170&&y<210)&&menu1 ) 
			{

		select1=true;
		color=0;

	}
	if (button == GLUT_LEFT_BUTTON&&state&&start1&&(x>280&&x<460)&&(y>220&&y<260) ) 
			{
		
		select1=true;
		color=1;

	}
	if (button == GLUT_LEFT_BUTTON&&state&&start1&&(x>280&&x<460)&&(y>270&&y<310)  ) 
			{
		
		select1=true;
		color=2;

	}
	glutPostRedisplay();
}

int main(int argc, char*argv[]) {

	int width = 1020, height = 840; 
	
	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Rush Hour by Humaiyon Abdullah"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.
	
	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);
	if(select1==!true)
	{
	glutTimerFunc(1000.0, time69, 0);
	}
	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	
	glutMainLoop();
	return 1;
}
#endif 
