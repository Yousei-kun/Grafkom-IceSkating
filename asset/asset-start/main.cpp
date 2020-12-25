#include<GL/glut.h>

void box(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4){
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(x1, y1);
		glVertex2f(x2, y2);
		glVertex2f(x3, y3);
		glVertex2f(x4, y4);
	glEnd();
}

void start() {
	glClear(GL_COLOR_BUFFER_BIT);

	//S
	box(20,10,50,10,50,20,20,20);
	box(40,20,50,20,50,30,40,30);
	box(20,30,50,30,50,40,20,40);
	box(20,40,30,40,30,50,20,50);
	box(20,50,50,50,50,60,20,60);

	//T
	box(70,10,80,10,80,50,70,50);
	box(60,50,90,50,90,60,60,60);

	//A
	box(100,10,110,10,110,60,100,60);
	box(110,30,120,30,120,40,110,40);
	box(110,50,120,50,120,60,110,60);
	box(120,10,130,10,130,60,120,60);

	//R
	box(140,10,150,10,150,60,140,60);
	box(150,50,170,50,170,60,150,60);
	box(150,30,170,30,170,40,150,40);
	box(160,40,170,40,170,50,160,50);
	box(150,20,160,20,160,30,150,30);
	box(160,10,170,10,170,20,160,20);

	//T
	box(190,10,200,10,200,50,190,50);
	box(180,50,210,50,210,60,180,60);

	glFlush();
}

void f1(){

    //F
	box(40,70,50,70,50,120,40,120);
	box(50,110,70,110,70,120,50,120);
	box(50,90,70,90,70,100,50,100);

	//1
	box(80,70,110,70,110,80,80,80);
	box(90,80,100,80,100,120,90,120);
	box(80,110,90,110,90,120,80,120);

    glFlush();
}

void to(){
    //T
	box(120,70,130,70,130,110,120,110);
	box(110,110,140,110,140,120,110,120);


	//O
	box(150,80,160,80,160,110,150,110);
	box(180,80,190,80,190,110,180,110);
	box(160,70,180,70,180,80,160,80);
	box(160,110,180,110,180,120,160,120);

	glFlush();
}
void display(){
    start();
    f1();
    to();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 240.0, 0.0, 240.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Sample");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();
}
