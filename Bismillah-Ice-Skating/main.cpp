/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
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

void segidelapan (float titikA1, float titikB1, float titikA2, float titikB2, float titikA3, float titikB3, float titikA4, float titikB4, float titikA5, float titikB5, float titikA6, float titikB6, float titikA7, float titikB7, float titikA8, float titikB8){
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
void kotak (float titikA1, float titikB1, float titikA2, float titikB2, float titikA3, float titikB3, float titikA4, float titikB4){
    glBegin(GL_QUADS);

    glVertex2f(titikA1, titikB1);
	glVertex2f(titikA2, titikB2);
	glVertex2f(titikA3, titikB3);
	glVertex2f(titikA4, titikB4);

	glEnd();
}


void batu (float titikA1, float titikB1, float titikA2, float titikB2, float titikA3, float titikB3, float titikA4, float titikB4, float titikA5, float titikB5, float titikA6, float titikB6){
    glBegin(GL_POLYGON);

    glVertex2f(titikA1, titikB1);
	glVertex2f(titikA2, titikB2);
	glVertex2f(titikA3, titikB3);
	glVertex2f(titikA4, titikB4);
	glVertex2f(titikA5, titikB5);
	glVertex2f(titikA6, titikB6);
	glEnd();
}
void garistembok (float titikA1, float titikB1, float titikA2, float titikB2, float titikA3, float titikB3, float titikA4, float titikB4, float titikA5, float titikB5, float titikA6, float titikB6){
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
void pojok(){
    glColor3ub(40,200,200);
    kotak(0,0, 40,0, 40,40, 0,40);
}
void dasar(){
    glColor3ub(165,185,195);
    kotak(0,0, 0,600, 600,600, 600,0);
}
void tembokbawahatas(){
    glColor3ub(40,200,200);
    batu(40,0, 40,35, 45,40, 75,40, 80,35, 80,0);
    batu(40,600, 40,560, 45,555, 75,555, 80,560, 80,600);
}

void pagarbawahatas (){
    glColor3f(0,0,255);
    garistembok(40,0, 40,35, 45,40, 75,40, 80,35, 80,0);
    garistembok(40,600, 40,560, 45,555, 75,555, 80,560, 80,600);
}

void tembok(){
    glColor3ub(40,200,200);
    batu(0,40, 35,40, 40,45, 40,75, 35,80, 0,80);
    batu(600,40 , 560,40, 555,45, 555,75, 560,80, 600,80);
    //tembokhadap kanan tengah
}
void pagar(){
    glColor3f(0,0,255);
    garistembok(0,40, 35,40, 40,45, 40,75, 35,80, 0,80);
    garistembok(600,40, 560,40, 555,45, 555,75, 560,80, 600,80);
}

void bata(){
    glColor3ub(40,200,200);
    segidelapan(5,0, 35,0, 40,5, 40,35, 35,40, 5,40, 0,35, 0,5);
}
void hiasanatasbawah(){
    glPushMatrix();
    glTranslatef(40,0,0);
    hiasan();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(40,560,0);
    hiasan();
    glPopMatrix();

}

void hiasankanankiri(){
    glPushMatrix();
    glTranslatef(0,40,0);
    hiasan();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(560,40,0);
    hiasan();
    glPopMatrix();
}

void rangkai(){
    //pojokan
    glPushMatrix();
        pojok();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,560,0);
        pojok();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(560,560,0);
        pojok();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(560,0,0);
        pojok();
    glPopMatrix();

    //tembok kiri kanan
    glPushMatrix();
        tembok();
        pagar();
        hiasankanankiri();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,40,0);
        tembok();
        pagar();
        hiasankanankiri();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,80,0);
        tembok();
        pagar();
        hiasankanankiri();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,120,0);
        tembok();
        pagar();
        hiasankanankiri();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,160,0);
        tembok();
        pagar();
        hiasankanankiri();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,200,0);
        tembok();
        pagar();
        hiasankanankiri();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,240,0);
        tembok();
        pagar();
        hiasankanankiri();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,280,0);
        tembok();
        pagar();
        hiasankanankiri();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,320,0);
        tembok();
        pagar();
        hiasankanankiri();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,360,0);
        tembok();
        pagar();
        hiasankanankiri();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,400,0);
        tembok();
        pagar();
        hiasankanankiri();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,440,0);
        tembok();
        pagar();
        hiasankanankiri();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0,480,0);
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
        glTranslatef(40,0,0);
        tembokbawahatas();
        pagarbawahatas();
        hiasanatasbawah();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(80,0,0);
        tembokbawahatas();
        pagarbawahatas();
        hiasanatasbawah();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(120,0,0);
        tembokbawahatas();
        pagarbawahatas();
        hiasanatasbawah();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(160,0,0);
        tembokbawahatas();
        pagarbawahatas();
        hiasanatasbawah();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(200,0,0);
        tembokbawahatas();
        pagarbawahatas();
        hiasanatasbawah();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(240,0,0);
        tembokbawahatas();
        pagarbawahatas();
        hiasanatasbawah();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(280,0,0);
        tembokbawahatas();
        pagarbawahatas();
        hiasanatasbawah();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(320,0,0);
        tembokbawahatas();
        pagarbawahatas();
        hiasanatasbawah();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(360,0,0);
        tembokbawahatas();
        pagarbawahatas();
        hiasanatasbawah();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(400,0,0);
        tembokbawahatas();
        pagarbawahatas();
        hiasanatasbawah();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(440,0,0);
        tembokbawahatas();
        pagarbawahatas();
        hiasanatasbawah();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(480,0,0);
        tembokbawahatas();
        pagarbawahatas();
        hiasanatasbawah();
    glPopMatrix();
}
void rintangan(){
    //1
    glPushMatrix();
        glTranslatef(40,120,0);
        bata();
        hiasan();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(40,280,0);
        bata();
        hiasan();
    glPopMatrix();
    //2
    glPushMatrix();
        glTranslatef(80,40,0);
        bata();
        hiasan();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(80,200,0);
        bata();
        hiasan();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(80,360,0);
        bata();
        hiasan();
    glPopMatrix();
    //3
    glPushMatrix();
        glTranslatef(120,40,0);
        bata();
        hiasan();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(120,80,0);
        bata();
        hiasan();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(120,120,0);
        bata();
        hiasan();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(120,160,0);
        bata();
        hiasan();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(120,200,0);
        bata();
        hiasan();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(120,240,0);
        bata();
        hiasan();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(120,280,0);
        bata();
        hiasan();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(120,320,0);
        bata();
        hiasan();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(120,360,0);
        bata();
        hiasan();
    glPopMatrix();
    //4
    glPushMatrix();
        glTranslatef(160,40,0);
        bata();
        hiasan();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(160,160,0);
        bata();
        hiasan();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(160,480,0);
        bata();
        hiasan();
    glPopMatrix();
    //5
    glPushMatrix();
        glTranslatef(200,280,0);
        bata();
        hiasan();
    glPopMatrix();
    //6
    glPushMatrix();
        glTranslatef(240,280,0);
        bata();
        hiasan();
    glPopMatrix();
    //7
    glPushMatrix();
        glTranslatef(280,400,0);
        bata();
        hiasan();
    glPopMatrix();
    //8
    glPushMatrix();
        glTranslatef(320,320,0);
        bata();
        hiasan();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(320,520,0);
        bata();
        hiasan();
    glPopMatrix();
    //9
    //10
    glPushMatrix();
        glTranslatef(400,480,0);
        bata();
        hiasan();
    glPopMatrix();
    //11
    glPushMatrix();
        glTranslatef(440,40,0);
        bata();
        hiasan();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(440,80,0);
        bata();
        hiasan();
    glPopMatrix();
    //12
    glPushMatrix();
        glTranslatef(480,240,0);
        bata();
        hiasan();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(480,400,0);
        bata();
        hiasan();
    glPopMatrix();
    //13
    glPushMatrix();
        glTranslatef(520,80,0);
        bata();
        hiasan();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(520,200,0);
        bata();
        hiasan();
    glPopMatrix();
}


static void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    dasar();
    rangkai();
    rintangan();
    glFlush();
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
	glutInitWindowSize(600,600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Lapangan");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();
}
