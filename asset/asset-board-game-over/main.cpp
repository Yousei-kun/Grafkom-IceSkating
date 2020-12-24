#include<GL/glut.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON); //board
		glColor3f(0.5, 1, 0);
		glVertex2f(0, 0);
		glVertex2f(20, 0);
		glVertex2f(20, 10);
		glVertex2f(0, 10);
	glEnd();

	glBegin(GL_POLYGON); //gantungan left
		glColor3f(0, 0.5, 0);
		glVertex2f(1, 12);
		glVertex2f(1, 9);
		glVertex2f(2, 9);
		glVertex2f(2, 12);
	glEnd();

	glBegin(GL_POLYGON); //gantungan right
		glColor3f(0, 0.5, 0);
		glVertex2f(18, 12);
		glVertex2f(18, 9);
		glVertex2f(19, 9);
		glVertex2f(19, 12);
	glEnd();

	glBegin(GL_POLYGON); //box-over
		glColor3f(0, 0.5, 0);
		glVertex2f(2, 4);
		glVertex2f(18, 4);
		glVertex2f(18, 8);
		glVertex2f(2, 8);
	glEnd();

	glFlush();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 20.0, 0.0, 20.0);
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
