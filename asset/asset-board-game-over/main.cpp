#include<GL/glut.h>

void bg() {
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON); //board
		glColor3ub(255, 0, 0);
		glVertex2f(80, 200);
		glVertex2f(520, 200);
		glColor3ub(255, 255, 0);
		glVertex2f(520, 260);
		glVertex2f(80, 260);
	glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 0);
		glVertex2f(80, 260);
		glVertex2f(520, 260);
		glColor3ub(255, 0, 0);
		glVertex2f(520, 320);
		glVertex2f(80, 320);
    glEnd();
	glFlush();
}
void garis (){
    glLineWidth(10);
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2f(80, 200);
    glVertex2f(520, 200);
    glVertex2f(520, 320);
    glVertex2f(80, 320);
    glEnd();
}
void game (){
    glLineWidth(8);
    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(120, 280);
    glVertex2f(100, 280);
    glVertex2f(100, 240);
    glVertex2f(120, 240);
    glVertex2f(120, 260);
    glVertex2f(105, 260);

    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(140, 240);
    glVertex2f(140, 280);
    glVertex2f(160, 280);
    glVertex2f(160, 240);
    glVertex2f(160, 260);
    glVertex2f(140, 260);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(180, 240);
    glVertex2f(180, 280);
    glVertex2f(190, 280);
    glVertex2f(190, 240);
    glVertex2f(190, 280);
    glVertex2f(200, 280);
    glVertex2f(200, 240);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(240, 280);
    glVertex2f(220, 280);
    glVertex2f(220, 260);
    glVertex2f(240, 260);
    glVertex2f(220, 260);
    glVertex2f(220, 240);
    glVertex2f(240, 240);
    glEnd();
    glFlush();
}
void over (){
    glLineWidth(8);
    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(360, 240);
    glVertex2f(360, 280);
    glVertex2f(380, 280);
    glVertex2f(380, 240);
    glVertex2f(360, 240);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(400, 280);
    glVertex2f(400, 260);
    glVertex2f(410, 240);
    glVertex2f(420, 260);
    glVertex2f(420, 280);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(460, 280);
    glVertex2f(440, 280);
    glVertex2f(440, 260);
    glVertex2f(460, 260);
    glVertex2f(440, 260);
    glVertex2f(440, 240);
    glVertex2f(460, 240);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(480, 240);
    glVertex2f(480, 280);
    glVertex2f(500, 280);
    glVertex2f(500, 260);
    glVertex2f(480, 260);
    glVertex2f(490, 260);
    glVertex2f(500, 240);
    glEnd();
    glFlush();
}
static void display(void){
    bg();
    garis();
    game();
    over();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 600, 0.0, 600);
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
