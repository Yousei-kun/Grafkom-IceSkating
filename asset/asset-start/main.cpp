#include<GL/glut.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT);

    //box
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(2, 8);
		glVertex2f(3, 8);
		glVertex2f(3, 12);
		glVertex2f(2, 12);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(3, 7);
		glVertex2f(17, 7);
		glVertex2f(17, 8);
		glVertex2f(3, 8);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(17, 8);
		glVertex2f(18, 8);
		glVertex2f(18, 12);
		glVertex2f(17, 12);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(17, 12);
		glVertex2f(17, 13);
		glVertex2f(3, 13);
		glVertex2f(3, 12);
	glEnd();

	//s
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(4.5, 11);
		glVertex2f(6.5, 11);
		glVertex2f(6.5, 11.5);
		glVertex2f(4.5, 11.5);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(4.5, 9.5);
		glVertex2f(6.5, 9.5);
		glVertex2f(6.5, 10.5);
		glVertex2f(4.5, 10.5);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(4.5, 8.5);
		glVertex2f(6.5, 8.5);
		glVertex2f(6.5, 9);
		glVertex2f(4.5, 9);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(4.5, 10.5);
		glVertex2f(5.5, 10.5);
		glVertex2f(5.5, 11);
		glVertex2f(4.5, 11);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(5.5, 9);
		glVertex2f(6.5, 9);
		glVertex2f(6.5, 9.5);
		glVertex2f(5.5, 9.5);
	glEnd();

	//t
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(7, 11.5);
		glVertex2f(8.5, 11.5);
		glVertex2f(8.5, 10.5);
		glVertex2f(7, 10.5);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(7.5, 8.5);
		glVertex2f(8, 8.5);
		glVertex2f(8, 10.5);
		glVertex2f(7.5, 10.5);
	glEnd();

	//a
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(9, 8.5);
		glVertex2f(9.5, 8.5);
		glVertex2f(9.5, 11.5);
		glVertex2f(9, 11.5);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(10.5, 8.5);
		glVertex2f(11, 8.5);
		glVertex2f(11, 11.5);
		glVertex2f(10.5, 11.5);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(9.5, 9.5);
		glVertex2f(10.5, 9.5);
		glVertex2f(10.5, 10);
		glVertex2f(9.5, 10);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(9.5, 10.5);
		glVertex2f(10.5, 10.5);
		glVertex2f(10.5, 11.5);
		glVertex2f(9.5, 11.5);
	glEnd();

	//r
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(11.5, 8.5);
		glVertex2f(12, 8.5);
		glVertex2f(12, 11.5);
		glVertex2f(11.5, 11.5);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(12, 11);
		glVertex2f(13, 11);
		glVertex2f(13, 11.5);
		glVertex2f(12, 11.5);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(12, 10);
		glVertex2f(13, 10);
		glVertex2f(13, 10.5);
		glVertex2f(12, 10.5);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(12.5, 10.5);
		glVertex2f(13, 10.5);
		glVertex2f(13, 11);
		glVertex2f(12.5, 11);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(12.5, 8.5);
		glVertex2f(13, 8.5);
		glVertex2f(13, 9.5);
		glVertex2f(12.5, 9.5);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(12, 9.5);
		glVertex2f(12.5, 9.5);
		glVertex2f(12.5, 10);
		glVertex2f(12, 10);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(12, 9.5);
		glVertex2f(12.5, 9.5);
		glVertex2f(12.5, 10);
		glVertex2f(12, 10);
	glEnd();

	//t
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(14, 8.5);
		glVertex2f(14.5, 8.5);
		glVertex2f(14.5, 10.5);
		glVertex2f(14, 10.5);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0, 0, 0.5);
		glVertex2f(13.5, 10.5);
		glVertex2f(15, 10.5);
		glVertex2f(15, 11.5);
		glVertex2f(13.5, 11.5);
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
