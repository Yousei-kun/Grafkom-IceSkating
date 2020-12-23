#include<GL/glut.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	/* shadow */
	glBegin(GL_POLYGON); /* bot */
		glColor3f(0, 0, 0.5);
		glVertex2f(30, 0);
		glVertex2f(75, 0);
		glVertex2f(75, 10);
		glVertex2f(30, 10);
	glEnd();

	glBegin(GL_POLYGON); /* bot to mid*/
		glColor3f(0, 0, 0.5);
		glVertex2f(10, 10);
		glVertex2f(90, 10);
		glVertex2f(90, 30);
		glVertex2f(10, 30);
	glEnd();

	glBegin(GL_POLYGON); /* mid */
		glColor3f(0, 0, 0.5);
		glVertex2f(10, 30);
		glVertex2f(100, 30);
		glVertex2f(100, 60);
		glVertex2f(90, 60);
		glVertex2f(90, 70);
		glVertex2f(10, 70);
	glEnd();

	glBegin(GL_POLYGON); /* left to mid */
		glColor3f(0, 0, 0.5);
		glVertex2f(0, 30);
		glVertex2f(10, 30);
		glVertex2f(10, 55);
		glVertex2f(0, 55);
	glEnd();

	glBegin(GL_POLYGON); /* mid to top */
		glColor3f(0, 0, 0.5);
		glVertex2f(15, 70);
		glVertex2f(15, 80);
		glVertex2f(85, 80);
		glVertex2f(85, 70);
	glEnd();

	glBegin(GL_POLYGON); /* mid to top */
		glColor3f(0, 0, 0.5);
		glVertex2f(15, 85);
		glVertex2f(15, 80);
		glVertex2f(80, 80);
		glVertex2f(80, 85);
	glEnd();

	glBegin(GL_POLYGON); /* top to top */
		glColor3f(0, 0, 0.5);
		glVertex2f(20, 85);
		glVertex2f(20, 95);
		glVertex2f(80, 95);
		glVertex2f(80, 85);
	glEnd();

	glBegin(GL_POLYGON); /* top */
		glColor3f(0, 0, 0.5);
		glVertex2f(35, 95);
		glVertex2f(35, 100);
		glVertex2f(70, 100);
		glVertex2f(70, 95);
	glEnd();

	glBegin(GL_POLYGON); /* last top */
		glColor3f(0, 0, 0.5);
		glVertex2f(45, 100);
		glVertex2f(45, 105);
		glVertex2f(65, 105);
		glVertex2f(65, 100);
	glEnd();

	/* lighting */
	glBegin(GL_POLYGON); /* square 1 */
		glColor3f(0, 0.5, 1);
		glVertex2f(50, 15);
		glVertex2f(70, 15);
		glVertex2f(70, 25);
		glVertex2f(50, 25);
	glEnd();

	glBegin(GL_POLYGON); /* square 2*/
		glColor3f(0, 0.5, 1);
		glVertex2f(50, 90);
		glVertex2f(50, 80);
		glVertex2f(65, 80);
		glVertex2f(65, 90);
	glEnd();

	glBegin(GL_POLYGON); /* square 2 - right*/
		glColor3f(0, 0.5, 1);
		glVertex2f(65, 80);
		glVertex2f(70, 80);
		glVertex2f(70, 85);
		glVertex2f(65, 85);
	glEnd();

	glBegin(GL_POLYGON); /* square 3 - left*/
		glColor3f(0, 0.5, 1);
		glVertex2f(20, 65);
		glVertex2f(30, 65);
		glVertex2f(30, 80);
		glVertex2f(20, 80);
	glEnd();

	glBegin(GL_POLYGON); /* square 3 - mid*/
		glColor3f(0, 0.5, 1);
		glVertex2f(30, 50);
		glVertex2f(45, 50);
		glVertex2f(45, 85);
		glVertex2f(30, 85);
	glEnd();

	glBegin(GL_POLYGON); /* square 3 - right*/
		glColor3f(0, 0.5, 1);
		glVertex2f(45, 70);
		glVertex2f(45, 50);
		glVertex2f(50, 50);
		glVertex2f(50, 70);
	glEnd();

	glFlush();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 200.0, 0.0, 200.0);
}

void transform_asset(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glScalef(0.4,0.4,0);
    display();

    glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Sample");
	glutDisplayFunc(transform_asset);

	myinit();
	glutMainLoop();
}
