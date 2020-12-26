#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

#include<GL/glut.h>
//header
#include "batu.h"
#include "chara.h"
#include "menu.h"
#include <iostream>

int charaPosition[2] = { 0,40 };
int stones[29][2];
int index = 0;
bool left, right;
bool stop;
bool menuAwal;



void segidelapan(float titikA1, float titikB1, float titikA2, float titikB2, float titikA3, float titikB3, float titikA4, float titikB4, float titikA5, float titikB5, float titikA6, float titikB6, float titikA7, float titikB7, float titikA8, float titikB8) {
	glBegin(GL_POLYGON);

	glVertex2f(titikA1, titikB1);
	glVertex2f(titikA2, titikB2);
	glVertex2f(titikA3, titikB3);
	glVertex2f(titikA4, titikB4);
	glVertex2f(titikA5, titikB5);
	glVertex2f(titikA6, titikB6);
	glVertex2f(titikA7, titikB7);
	glVertex2f(titikA8, titikB8);

	glEnd();
}
void kotak(float titikA1, float titikB1, float titikA2, float titikB2, float titikA3, float titikB3, float titikA4, float titikB4) {
	glBegin(GL_QUADS);

	glVertex2f(titikA1, titikB1);
	glVertex2f(titikA2, titikB2);
	glVertex2f(titikA3, titikB3);
	glVertex2f(titikA4, titikB4);

	glEnd();
}


void batu(float titikA1, float titikB1, float titikA2, float titikB2, float titikA3, float titikB3, float titikA4, float titikB4, float titikA5, float titikB5, float titikA6, float titikB6) {
	glBegin(GL_POLYGON);

	glVertex2f(titikA1, titikB1);
	glVertex2f(titikA2, titikB2);
	glVertex2f(titikA3, titikB3);
	glVertex2f(titikA4, titikB4);
	glVertex2f(titikA5, titikB5);
	glVertex2f(titikA6, titikB6);
	glEnd();
}
void garistembok(float titikA1, float titikB1, float titikA2, float titikB2, float titikA3, float titikB3, float titikA4, float titikB4, float titikA5, float titikB5, float titikA6, float titikB6) {
	glLineWidth(5);
	glBegin(GL_LINE_STRIP);

	glVertex2f(titikA1, titikB1);
	glVertex2f(titikA2, titikB2);
	glVertex2f(titikA3, titikB3);
	glVertex2f(titikA4, titikB4);
	glVertex2f(titikA5, titikB5);
	glVertex2f(titikA6, titikB6);
	glEnd();
}
void pojok() {
	glColor3ub(40, 200, 200);
	kotak(0, 0, 40, 0, 40, 40, 0, 40);
}
void dasar() {
	glColor3ub(165, 185, 195);
	kotak(0, 0, 0, 600, 600, 600, 600, 0);
}
void tembokbawahatas() {
	glColor3ub(40, 200, 200);
	batu(40, 0, 40, 35, 45, 40, 75, 40, 80, 35, 80, 0);
	batu(40, 600, 40, 560, 45, 555, 75, 555, 80, 560, 80, 600);
}

void pagarbawahatas() {
	glColor3f(0, 0, 255);
	garistembok(40, 0, 40, 35, 45, 40, 75, 40, 80, 35, 80, 0);
	garistembok(40, 600, 40, 560, 45, 555, 75, 555, 80, 560, 80, 600);
}

void tembok() {
	glColor3ub(40, 200, 200);
	batu(0, 40, 35, 40, 40, 45, 40, 75, 35, 80, 0, 80);
	batu(600, 40, 560, 40, 555, 45, 555, 75, 560, 80, 600, 80);
	//tembokhadap kanan tengah
}
void pagar() {
	glColor3f(0, 0, 255);
	garistembok(0, 40, 35, 40, 40, 45, 40, 75, 35, 80, 0, 80);
	garistembok(600, 40, 560, 40, 555, 45, 555, 75, 560, 80, 600, 80);
}

void bata() {
	glColor3ub(40, 200, 200);
	segidelapan(5, 0, 35, 0, 40, 5, 40, 35, 35, 40, 5, 40, 0, 35, 0, 5);
}
void hiasanatasbawah() {
	glPushMatrix();
	glTranslatef(40, 0, 0);
	hiasan();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(40, 560, 0);
	hiasan();
	glPopMatrix();

}

void hiasankanankiri() {
	glPushMatrix();
	glTranslatef(0, 40, 0);
	hiasan();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(560, 40, 0);
	hiasan();
	glPopMatrix();
}

void rangkai() {
	//pojokan
	glPushMatrix();
	pojok();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 560, 0);
	pojok();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(560, 560, 0);
	pojok();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(560, 0, 0);
	pojok();
	glPopMatrix();

	//tembok kiri kanan - revisi Ivan 24/20

	glPushMatrix();
	glTranslatef(0, 40, 0);
	tembok();
	pagar();
	hiasankanankiri();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 80, 0);
	tembok();
	pagar();
	hiasankanankiri();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 120, 0);
	tembok();
	pagar();
	hiasankanankiri();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 160, 0);
	tembok();
	pagar();
	hiasankanankiri();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 200, 0);
	tembok();
	pagar();
	hiasankanankiri();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 240, 0);
	tembok();
	pagar();
	hiasankanankiri();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 280, 0);
	tembok();
	pagar();
	hiasankanankiri();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 320, 0);
	tembok();
	pagar();
	hiasankanankiri();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 360, 0);
	tembok();
	pagar();
	hiasankanankiri();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 400, 0);
	tembok();
	pagar();
	hiasankanankiri();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 440, 0);
	tembok();
	pagar();
	hiasankanankiri();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 480, 0);
	tembok();
	pagar();
	hiasankanankiri();
	glPopMatrix();
	// tembok bawah atas
	glPushMatrix();
	tembokbawahatas();
	pagarbawahatas();
	hiasanatasbawah();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(40, 0, 0);
	tembokbawahatas();
	pagarbawahatas();
	hiasanatasbawah();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(80, 0, 0);
	tembokbawahatas();
	pagarbawahatas();
	hiasanatasbawah();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(120, 0, 0);
	tembokbawahatas();
	pagarbawahatas();
	hiasanatasbawah();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(160, 0, 0);
	tembokbawahatas();
	pagarbawahatas();
	hiasanatasbawah();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(200, 0, 0);
	tembokbawahatas();
	pagarbawahatas();
	hiasanatasbawah();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(240, 0, 0);
	tembokbawahatas();
	pagarbawahatas();
	hiasanatasbawah();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(280, 0, 0);
	tembokbawahatas();
	pagarbawahatas();
	hiasanatasbawah();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(320, 0, 0);
	tembokbawahatas();
	pagarbawahatas();
	hiasanatasbawah();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(360, 0, 0);
	tembokbawahatas();
	pagarbawahatas();
	hiasanatasbawah();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(400, 0, 0);
	tembokbawahatas();
	pagarbawahatas();
	hiasanatasbawah();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(440, 0, 0);
	tembokbawahatas();
	pagarbawahatas();
	hiasanatasbawah();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(480, 0, 0);
	tembokbawahatas();
	pagarbawahatas();
	hiasanatasbawah();
	glPopMatrix();
}

void addStones(int numx, int numy) {
	stones[index][0] = numx;
	stones[index][1] = numy;
	index += 1;
}

void rintangan() {
	//1
	glPushMatrix();
	glTranslatef(40, 120, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[0][0] = 40;
	stones[0][1] = 120;

	glPushMatrix();
	glTranslatef(40, 280, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[1][0] = 40;
	stones[1][1] = 280;

	//2
	glPushMatrix();
	glTranslatef(80, 40, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[2][0] = 80;
	stones[2][1] = 40;

	glPushMatrix();
	glTranslatef(80, 200, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[3][0] = 80;
	stones[3][1] = 200;

	glPushMatrix();
	glTranslatef(80, 360, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[4][0] = 80;
	stones[4][1] = 360;

	//3
	glPushMatrix();
	glTranslatef(120, 40, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[5][0] = 120;
	stones[5][1] = 40;

	glPushMatrix();
	glTranslatef(120, 80, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[6][0] = 120;
	stones[6][1] = 80;

	glPushMatrix();
	glTranslatef(120, 120, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[7][0] = 120;
	stones[7][1] = 120;

	glPushMatrix();
	glTranslatef(120, 160, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[8][0] = 120;
	stones[8][1] = 160;

	glPushMatrix();
	glTranslatef(120, 200, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[9][0] = 120;
	stones[9][1] = 200;

	glPushMatrix();
	glTranslatef(120, 240, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[10][0] = 120;
	stones[10][1] = 240;

	glPushMatrix();
	glTranslatef(120, 280, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[11][0] = 120;
	stones[11][1] = 280;

	glPushMatrix();
	glTranslatef(120, 320, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[12][0] = 120;
	stones[12][1] = 320;

	glPushMatrix();
	glTranslatef(120, 360, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[13][0] = 120;
	stones[13][1] = 360;
	//4
	glPushMatrix();
	glTranslatef(160, 40, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[14][0] = 160;
	stones[14][1] = 40;

	glPushMatrix();
	glTranslatef(160, 160, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[15][0] = 160;
	stones[15][1] = 160;

	glPushMatrix();
	glTranslatef(160, 480, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[16][0] = 160;
	stones[16][1] = 480;
	//5
	glPushMatrix();
	glTranslatef(200, 280, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[17][0] = 200;
	stones[17][1] = 280;
	//6
	glPushMatrix();
	glTranslatef(240, 280, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[18][0] = 240;
	stones[18][1] = 280;
	//7
	glPushMatrix();
	glTranslatef(280, 400, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[19][0] = 280;
	stones[19][1] = 400;
	//8
	glPushMatrix();
	glTranslatef(320, 320, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[20][0] = 320;
	stones[20][1] = 320;

	glPushMatrix();
	glTranslatef(320, 520, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[21][0] = 320;
	stones[21][1] = 520;
	//9
	//10
	glPushMatrix();
	glTranslatef(400, 480, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[22][0] = 400;
	stones[22][1] = 480;
	//11
	glPushMatrix();
	glTranslatef(440, 40, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[23][0] = 440;
	stones[23][1] = 40;

	glPushMatrix();
	glTranslatef(440, 80, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[24][0] = 440;
	stones[24][1] = 80;
	//12
	glPushMatrix();
	glTranslatef(480, 240, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[25][0] = 480;
	stones[25][1] = 240;

	glPushMatrix();
	glTranslatef(480, 400, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[26][0] = 480;
	stones[26][1] = 400;
	//13
	glPushMatrix();
	glTranslatef(520, 80, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[27][0] = 520;
	stones[27][1] = 80;

	glPushMatrix();
	glTranslatef(520, 200, 0);
	bata();
	hiasan();
	glPopMatrix();
	stones[28][0] = 520;
	stones[28][1] = 200;
}


void charPos() {
	glPushMatrix();
	glTranslated(charaPosition[0], charaPosition[1], 0);

	//glBegin(GL_POLYGON);
	//glColor3f(1, 0, 0);
	//glVertex2f(0, 0);
	//glVertex2f(40, 0);
	//glVertex2f(40, 40);
	//glVertex2f(0, 40);
	//glEnd();

		//std::cout << charaPosition[0];
		//std::cout << charaPosition[1] << "\n";

	if (left == true) {
		glTranslated(0, 0, 0);
		glScaled(1, 1, 0);
	}
	else if (right == true) {
		glTranslated(35, 0, 0);
		glScaled(-1, 1, 0);
	}
	chara();
	glPopMatrix();

}


void charMove2(int data)
{
	charPos();
	glutPostRedisplay();
	glutTimerFunc(100, charMove2, 0);
}
void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);

	if (menuAwal){
        dasar();
        rangkai();
        rintangan();
        charPos();
	} else {
        tampilanMenu();
	}


	if (GetAsyncKeyState(VK_LEFT)) {
		left = true;
		right = false;
	}
	if (GetAsyncKeyState(VK_RIGHT)) {
		right = true;
		left = false;
	}

	glFlush();
}

void pantauGerakan(int key, int x, int y)
{
	if (key == GLUT_KEY_UP)
	{
		stop = false;
		while (stop == false) {
			for (int i = 0; i <= 33; i++) {
				if (charaPosition[1] > stones[i][1]) {
					continue;
				}

				else if ((charaPosition[1] + 50 > stones[i][1]) && (charaPosition[0] == stones[i][0])) {
					stop = true;
					std::cout << "x" << stones[i][0] << "\n" << "y" << stones[i][1] << std::endl;
					break;

				}
			}
			if (stop == false) {
				if (charaPosition[1] > 510) {
					stop = true;
					break;
				}
				charaPosition[1] += 10;
			}

		}
	}

	else if (key == GLUT_KEY_DOWN)
	{
		stop = false;
		while (stop == false) {
			for (int i = 0; i <= 33; i++) {
				if (charaPosition[1] < stones[i][1] + 40) {
					continue;
				}

				else if ((charaPosition[1] - 10 < stones[i][1] + 40) && (charaPosition[0] == stones[i][0])) {
					stop = true;
					std::cout << "x" << stones[i][0] << "\n" << "y" << stones[i][1] << std::endl;
					break;

				}
			}
			if (stop == false) {
				if (charaPosition[1] < 50) {
					stop = true;
					break;
				}
				charaPosition[1] -= 10;
			}
		}
	}

	else if (key == GLUT_KEY_RIGHT)
	{
		stop = false;
		while (stop == false) {
			for (int i = 0; i <= 33; i++) {
				if (charaPosition[0] > stones[i][0]) {
					continue;
				}

				else if ((charaPosition[0] + 50 > stones[i][0]) && (charaPosition[1] == stones[i][1])) {
					stop = true;
					std::cout << "x" << stones[i][0] << "\n" << "y" << stones[i][1] << std::endl;
					break;
				}
			}
			if (stop == false) {
				if (charaPosition[0] > 510) {
					stop = true;
					break;
				}
				charaPosition[0] += 10;
			}
		}
	}

	else if (key == GLUT_KEY_LEFT)
	{
		stop = false;
		while (stop == false) {
			for (int i = 0; i <= 33; i++) {
				if (charaPosition[0] < stones[i][0] + 40) {
					continue;
				}

				else if ((charaPosition[0]-10 < stones[i][0]+40) && (charaPosition[1] == stones[i][1])) {
					stop = true;
					std::cout << "x" << stones[i][0] << "\n" << "y" << stones[i][1] << std::endl;
					break;

				}
			}
			if (stop == false) {
				if (charaPosition[0] < 50) {
					stop = true;
					break;
				}
				charaPosition[0] -= 10;
			}
		}
	}

    if(GLUT_KEY_F1){
        menuAwal = TRUE;
    }

}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Ice Skating");
	glutDisplayFunc(display);
	glutSpecialFunc(pantauGerakan);
	//glutKeyboardFunc(menuAwal);
	glutTimerFunc(1, charMove2, 0);
	myinit();
	glutMainLoop();
}
