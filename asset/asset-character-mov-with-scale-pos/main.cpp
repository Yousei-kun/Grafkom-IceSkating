#include<GL/glut.h>
int charaPosition[2] = {0,0};
bool left, right;

void makeChara() {
    glBegin(GL_QUADS); /* foot */
		glColor3f(0.2, 0.2, 0.2);
		glVertex2f(40, 10);
		glVertex2f(50, 10);
		glVertex2f(50, 5);
		glVertex2f(40, 5);
	glEnd();

	glBegin(GL_QUADS); /* konol */
		glColor3f(0.2, 0.2, 0.2);
		glVertex2f(30, 15);
		glVertex2f(40, 15);
		glVertex2f(40, 10);
		glVertex2f(30, 10);
	glEnd();

	glBegin(GL_POLYGON); /* body */
		glColor3f(0.2, 0.2, 0.2);
		glVertex2f(50, 30);
		glVertex2f(60, 30);
		glVertex2f(60, 25);
		glVertex2f(55, 25);
		glVertex2f(55, 10);
		glVertex2f(50, 10);
	glEnd();

	glBegin(GL_POLYGON); /* hand */
		glColor3f(0.2, 0.2, 0.2);
		glVertex2f(60, 40);
		glVertex2f(65, 40);
		glVertex2f(65, 30);
		glVertex2f(60, 30);
	glEnd();

	glBegin(GL_POLYGON); /* lower shoulder */
		glColor3f(0.2, 0.2, 0.2);
		glVertex2f(55, 45);
		glVertex2f(60, 45);
		glVertex2f(60, 40);
		glVertex2f(55, 40);
	glEnd();

	glBegin(GL_POLYGON); /* shoulder */
		glColor3f(0.2, 0.2, 0.2);
		glVertex2f(50, 50);
		glVertex2f(55, 50);
		glVertex2f(55, 45);
		glVertex2f(50, 45);
	glEnd();

	glBegin(GL_POLYGON); /* chin */
		glColor3f(0, 0, 0);
		glVertex2f(25, 50);
		glVertex2f(45, 50);
		glVertex2f(45, 45);
		glVertex2f(25, 45);
	glEnd();


	glBegin(GL_POLYGON); /* upperchin */
		glColor3f(0, 0, 0);
		glVertex2f(45, 55);
		glVertex2f(55, 55);
		glVertex2f(55, 50);
		glVertex2f(45, 50);
	glEnd();


	glBegin(GL_POLYGON); /* about lower ear */
		glColor3f(0, 0, 0);
		glVertex2f(55, 60);
		glVertex2f(60, 60);
		glVertex2f(60, 55);
		glVertex2f(55, 55);
	glEnd();

	glBegin(GL_POLYGON); /* lower ear */
		glColor3f(0, 0, 0);
		glVertex2f(60, 65);
		glVertex2f(65, 65);
		glVertex2f(65, 60);
		glVertex2f(60, 60);
	glEnd();

	glBegin(GL_POLYGON); /* ear */
		glColor3f(0, 0, 0);
		glVertex2f(65, 75);
		glVertex2f(70, 75);
		glVertex2f(70, 65);
		glVertex2f(65, 65);
	glEnd();

	glBegin(GL_POLYGON); /* hair 1 */
		glColor3f(0, 0, 0);
		glVertex2f(70, 80);
		glVertex2f(75, 80);
		glVertex2f(75, 75);
		glVertex2f(70, 75);
	glEnd();

	glBegin(GL_POLYGON); /* hair 2 */
		glColor3f(0, 0, 0);
		glVertex2f(75, 85);
		glVertex2f(80, 85);
		glVertex2f(80, 80);
		glVertex2f(75, 80);
	glEnd();

	glBegin(GL_POLYGON); /* hair 3 */
		glColor3f(0, 0, 0);
		glVertex2f(80, 90);
		glVertex2f(85, 90);
		glVertex2f(85, 85);
		glVertex2f(80, 85);
	glEnd();

	glBegin(GL_POLYGON); /* hair 4 */
		glColor3f(0, 0, 0);
		glVertex2f(70, 95);
		glVertex2f(80, 95);
		glVertex2f(80, 90);
		glVertex2f(70, 90);
	glEnd();

	glBegin(GL_POLYGON); /* hair 5 */
		glColor3f(0, 0, 0);
		glVertex2f(60, 100);
		glVertex2f(70, 100);
		glVertex2f(70, 95);
		glVertex2f(60, 95);
	glEnd();

	glBegin(GL_POLYGON); /* hair 6 */
		glColor3f(0, 0, 0);
		glVertex2f(55, 105);
		glVertex2f(60, 105);
		glVertex2f(60, 100);
		glVertex2f(50, 100);
		glVertex2f(50, 110);
		glVertex2f(55, 110);
	glEnd();

	glBegin(GL_POLYGON); /* hair top */
		glColor3f(0, 0, 0);
		glVertex2f(45, 115);
		glVertex2f(50, 115);
		glVertex2f(50, 110);
		glVertex2f(45, 110);
	glEnd();

	glBegin(GL_POLYGON); /* hair 7 */
		glColor3f(0, 0, 0);
		glVertex2f(40, 110);
		glVertex2f(45, 110);
		glVertex2f(45, 105);
		glVertex2f(40, 105);
	glEnd();

	glBegin(GL_POLYGON); /* hair 8 */
		glColor3f(0, 0, 0);
		glVertex2f(20, 105);
		glVertex2f(40, 105);
		glVertex2f(40, 100);
		glVertex2f(20, 100);
	glEnd();

	glBegin(GL_POLYGON); /* hair 9 */
		glColor3f(0, 0, 0);
		glVertex2f(15, 100);
		glVertex2f(20, 100);
		glVertex2f(20, 95);
		glVertex2f(15, 95);
	glEnd();

	glBegin(GL_POLYGON); /* hair 10 */
		glColor3f(0, 0, 0);
		glVertex2f(10, 95);
		glVertex2f(15, 95);
		glVertex2f(15, 85);
		glVertex2f(10, 85);
	glEnd();

	glBegin(GL_POLYGON); /* hair 11 */
		glColor3f(0, 0, 0);
		glVertex2f(5, 85);
		glVertex2f(10, 85);
		glVertex2f(10, 75);
		glVertex2f(5, 75);
	glEnd();

	glBegin(GL_POLYGON); /* ear -r */
		glColor3f(0, 0, 0);
		glVertex2f(0, 75);
		glVertex2f(5, 75);
		glVertex2f(5, 65);
		glVertex2f(0, 65);
	glEnd();

	glBegin(GL_POLYGON); /* foot -r */
		glColor3f(0.2, 0.2, 0.2);
		glVertex2f(20, 10);
		glVertex2f(30, 10);
		glVertex2f(30, 5);
		glVertex2f(20, 5);
	glEnd();

	glBegin(GL_POLYGON); /* body -r */
		glColor3f(0.2, 0.2, 0.2);
		glVertex2f(20, 30);
		glVertex2f(10, 30);
		glVertex2f(10, 25);
		glVertex2f(15, 25);
		glVertex2f(15, 10);
		glVertex2f(20, 10);
	glEnd();

	glBegin(GL_POLYGON); /* hand -r */
		glColor3f(0.2, 0.2, 0.2);
		glVertex2f(5, 40);
		glVertex2f(10, 40);
		glVertex2f(10, 30);
		glVertex2f(5, 30);
	glEnd();

	glBegin(GL_POLYGON); /* lower shoulder -r */
		glColor3f(0.2, 0.2, 0.2);
		glVertex2f(10, 45);
		glVertex2f(15, 45);
		glVertex2f(15, 40);
		glVertex2f(10, 40);
	glEnd();

	glBegin(GL_POLYGON); /* shoulder -r */
		glColor3f(0.2, 0.2, 0.2);
		glVertex2f(15, 50);
		glVertex2f(20, 50);
		glVertex2f(20, 45);
		glVertex2f(15, 45);
	glEnd();

	glBegin(GL_POLYGON); /* upperchin -r */
		glColor3f(0, 0, 0);
		glVertex2f(15, 55);
		glVertex2f(25, 55);
		glVertex2f(25, 50);
		glVertex2f(15, 50);
	glEnd();

	glBegin(GL_POLYGON); /* about lower ear -r */
		glColor3f(0, 0, 0);
		glVertex2f(10, 60);
		glVertex2f(15, 60);
		glVertex2f(15, 55);
		glVertex2f(10, 55);
	glEnd();

	glBegin(GL_POLYGON); /* lower ear -r */
		glColor3f(0, 0, 0);
		glVertex2f(5, 65);
		glVertex2f(10, 65);
		glVertex2f(10, 60);
		glVertex2f(5, 60);
	glEnd();

	glBegin(GL_POLYGON); /* ear right left */
		glColor3f(0.2, 0.2, 0.2);
		glVertex2f(60, 80);
		glVertex2f(65, 80);
		glVertex2f(65, 75);
		glVertex2f(60, 75);
	glEnd();

	glBegin(GL_POLYGON); /* ear right left-down */
		glColor3f(0, 0, 0);
		glVertex2f(55, 75);
		glVertex2f(60, 75);
		glVertex2f(60, 70);
		glVertex2f(55, 70);
	glEnd();

	glBegin(GL_POLYGON); /* left ear right fill */
		glColor3f(0, 0, 0);
		glVertex2f(10, 75);
		glVertex2f(15, 75);
		glVertex2f(15, 70);
		glVertex2f(10, 70);
	glEnd();

	glBegin(GL_POLYGON); /* shirt */
		glColor3f(0.051, 0.086, 0.18);
		glVertex2f(20, 45);
		glVertex2f(50, 45);
		glVertex2f(50, 15);
		glVertex2f(20, 15);
	glEnd();

	glBegin(GL_POLYGON); /* pants */
		glColor3f(0.851, 0.698, 0.498);
		glVertex2f(20, 25);
		glVertex2f(50, 25);
		glVertex2f(50, 15);
		glVertex2f(20, 15);
	glEnd();

	glBegin(GL_POLYGON); /* shirt hand */
		glColor3f(0.051, 0.086, 0.18);
		glVertex2f(50, 45);
		glVertex2f(55, 45);
		glVertex2f(55, 40);
		glVertex2f(60, 40);
		glVertex2f(60, 30);
		glVertex2f(50, 30);
	glEnd();

	glBegin(GL_POLYGON); /* shirt hand -r */
		glColor3f(0.051, 0.086, 0.18);
		glVertex2f(20, 45);
		glVertex2f(15, 45);
		glVertex2f(15, 40);
		glVertex2f(10, 40);
		glVertex2f(10, 30);
		glVertex2f(20, 30);
	glEnd();

	glBegin(GL_POLYGON); /* headset */
		glColor3f(1, 0.5, 0);
		glVertex2f(45, 50);
		glVertex2f(50, 50);
		glVertex2f(50, 45);
		glVertex2f(45, 45);
	glEnd();

	glBegin(GL_POLYGON); /* headset -r */
		glColor3f(1, 0.5, 0);
		glVertex2f(20, 50);
		glVertex2f(25, 50);
		glVertex2f(25, 45);
		glVertex2f(20, 45);
	glEnd();

	glBegin(GL_POLYGON); /* haircolor */
		glColor3f(0.925, 0.937, 0.945);
		glVertex2f(25, 100);
		glVertex2f(60, 100);
		glVertex2f(60, 75);
		glVertex2f(25, 75);
	glEnd();


	glBegin(GL_POLYGON); /* band left */
		glColor3f(0.329, 0.431, 0.478);
		glVertex2f(15, 90);
		glVertex2f(55, 90);
		glVertex2f(55, 55);
		glVertex2f(15, 55);
	glEnd();

	glBegin(GL_POLYGON); /* bandleftfill */
		glColor3f(0.329, 0.431, 0.478);
		glVertex2f(10, 85);
		glVertex2f(15, 85);
		glVertex2f(15, 75);
		glVertex2f(10, 75);
	glEnd();

	glBegin(GL_POLYGON); /* bandrightfill */
		glColor3f(0.329, 0.431, 0.478);
		glVertex2f(55, 70);
		glVertex2f(60, 70);
		glVertex2f(60, 60);
		glVertex2f(55, 60);
	glEnd();

	glBegin(GL_POLYGON); /* haircolor-stairs vertical */
		glColor3f(0.925, 0.937, 0.945);
		glVertex2f(50, 90);
		glVertex2f(55, 90);
		glVertex2f(55, 75);
		glVertex2f(50, 75);
	glEnd();

	glBegin(GL_POLYGON); /* ear coloring right */
		glColor3f(1, 0.878, 0.698);
		glVertex2f(60, 65);
		glVertex2f(65, 65);
		glVertex2f(65, 75);
		glVertex2f(60, 75);
	glEnd();

	glBegin(GL_POLYGON); /* ear coloring left */
		glColor3f(1, 0.878, 0.698);
		glVertex2f(5, 75);
		glVertex2f(10, 75);
		glVertex2f(10, 65);
		glVertex2f(5, 65);
	glEnd();

	glBegin(GL_POLYGON); /* face coloring */
		glColor3f(1, 0.878, 0.698);
		glVertex2f(15, 75);
		glVertex2f(45, 75);
		glVertex2f(45, 55);
		glVertex2f(15, 55);
	glEnd();

	glBegin(GL_POLYGON); /* lighter-inside-band-color vertical */
		glColor3f(0.565, 0.643, 0.682);
		glVertex2f(45, 85);
		glVertex2f(35, 85);
		glVertex2f(35, 65);
		glVertex2f(45, 65);
	glEnd();

	glBegin(GL_POLYGON); /* lighter-inside-band-color horizontal */
		glColor3f(0.565, 0.643, 0.682);
		glVertex2f(30, 80);
		glVertex2f(50, 80);
		glVertex2f(50, 70);
		glVertex2f(30, 70);
	glEnd();

	glBegin(GL_POLYGON); /* stairs-down-band (1/3) */
		glColor3f(0.329, 0.431, 0.478);
		glVertex2f(30, 75);
		glVertex2f(35, 75);
		glVertex2f(35, 70);
		glVertex2f(30, 70);
	glEnd();

	glBegin(GL_POLYGON); /* stairs-down-band (2/3) */
		glColor3f(0.329, 0.431, 0.478);
		glVertex2f(35, 70);
		glVertex2f(40, 70);
		glVertex2f(40, 65);
		glVertex2f(35, 65);
	glEnd();

	glBegin(GL_POLYGON); /* stairs-down-band (3/3) */
		glColor3f(0.329, 0.431, 0.478);
		glVertex2f(40, 65);
		glVertex2f(45, 65);
		glVertex2f(45, 60);
		glVertex2f(40, 60);
	glEnd();

	glBegin(GL_POLYGON); /* stairs-up-band (1/2) */
		glColor3f(0.329, 0.431, 0.478);
		glVertex2f(30, 75);
		glVertex2f(35, 75);
		glVertex2f(35, 70);
		glVertex2f(30, 70);
	glEnd();

	glBegin(GL_POLYGON); /* stairs-up-band (1/2) */
		glColor3f(0.329, 0.431, 0.478);
		glVertex2f(40, 85);
		glVertex2f(45, 85);
		glVertex2f(45, 80);
		glVertex2f(40, 80);
	glEnd();

	glBegin(GL_POLYGON); /* stairs-up-band (2/2) */
		glColor3f(0.329, 0.431, 0.478);
		glVertex2f(45, 80);
		glVertex2f(50, 80);
		glVertex2f(50, 75);
		glVertex2f(45, 75);
	glEnd();

	glBegin(GL_POLYGON); /* ear-tancolor */
		glColor3f(1, 0.8, 0.502);
		glVertex2f(10, 70);
		glVertex2f(15, 70);
		glVertex2f(15, 60);
		glVertex2f(10, 60);
	glEnd();

	glBegin(GL_POLYGON); /* upperchin-left -tancolor */
		glColor3f(1, 0.8, 0.502);
		glVertex2f(25, 60);
		glVertex2f(15, 60);
		glVertex2f(15, 55);
		glVertex2f(25, 55);
	glEnd();

	glBegin(GL_POLYGON); /* chin -tancolor*/
		glColor3f(1, 0.8, 0.502);
		glVertex2f(25, 55);
		glVertex2f(45, 55);
		glVertex2f(45, 50);
		glVertex2f(25, 50);
	glEnd();

	glBegin(GL_POLYGON); /* eye */
		glColor3f(0, 0, 0);
		glVertex2f(25, 70);
		glVertex2f(30, 70);
		glVertex2f(30, 60);
		glVertex2f(25, 60);
	glEnd();

	glBegin(GL_POLYGON); /* eyelid */
		glColor3f(0.2, 0.2, 0.25);
		glVertex2f(25, 70);
		glVertex2f(30, 70);
		glVertex2f(30, 65);
		glVertex2f(25, 65);
	glEnd();

	glBegin(GL_POLYGON); /* haircolor-finishing band big*/
		glColor3f(0.925, 0.937, 0.945);
		glVertex2f(45, 90);
		glVertex2f(50, 90);
		glVertex2f(50, 80);
		glVertex2f(45, 80);
	glEnd();

	glBegin(GL_POLYGON); /* haircolor-finishing band small */
		glColor3f(0.925, 0.937, 0.945);
		glVertex2f(40, 90);
		glVertex2f(45, 90);
		glVertex2f(45, 85);
		glVertex2f(40, 85);
	glEnd();

	glBegin(GL_POLYGON); /* haircolor-tan left */
		glColor3f(0.69, 0.745, 0.773);
		glVertex2f(15, 95);
		glVertex2f(20, 95);
		glVertex2f(20, 90);
		glVertex2f(15, 90);
	glEnd();

	glBegin(GL_POLYGON); /* haircolor-tan left */
		glColor3f(0.69, 0.745, 0.773);
		glVertex2f(20, 100);
		glVertex2f(25, 100);
		glVertex2f(25, 90);
		glVertex2f(20, 90);
	glEnd();

	glBegin(GL_POLYGON); /* haircolor-tan mid-left */
		glColor3f(0.69, 0.745, 0.773);
		glVertex2f(30, 100);
		glVertex2f(40, 100);
		glVertex2f(40, 95);
		glVertex2f(30, 95);
	glEnd();

	glBegin(GL_POLYGON); /* haircolor-tan mid */
		glColor3f(0.69, 0.745, 0.773);
		glVertex2f(45, 110);
		glVertex2f(50, 110);
		glVertex2f(50, 95);
		glVertex2f(45, 95);
	glEnd();

	glBegin(GL_POLYGON); /* haircolor-tan mid */
		glColor3f(0.69, 0.745, 0.773);
		glVertex2f(40, 105);
		glVertex2f(45, 105);
		glVertex2f(45, 100);
		glVertex2f(40, 100);
	glEnd();

	glBegin(GL_POLYGON);  /* haircolor-tan right */
		glColor3f(0.69, 0.745, 0.773);
		glVertex2f(55, 95);
		glVertex2f(70, 95);
		glVertex2f(70, 90);
		glVertex2f(55, 90);
	glEnd();

	glBegin(GL_POLYGON);  /* haircolor right */
		glColor3f(0.925, 0.937, 0.945);
		glVertex2f(60, 90);
		glVertex2f(70, 90);
		glVertex2f(70, 80);
		glVertex2f(60, 80);
	glEnd();

	glBegin(GL_POLYGON);  /* haircolor corner right tan */
		glColor3f(0.69, 0.745, 0.773);
		glVertex2f(70, 90);
		glVertex2f(80, 90);
		glVertex2f(80, 85);
		glVertex2f(70, 85);
	glEnd();

	glBegin(GL_POLYGON);  /* haircolor corner right tan */
		glColor3f(0.69, 0.745, 0.773);
		glVertex2f(70, 85);
		glVertex2f(75, 85);
		glVertex2f(75, 80);
		glVertex2f(70, 80);
	glEnd();

	glBegin(GL_POLYGON);  /* haircolor corner right tan */
		glColor3f(0.69, 0.745, 0.773);
		glVertex2f(65, 80);
		glVertex2f(70, 80);
		glVertex2f(70, 75);
		glVertex2f(65, 75);
	glEnd();

	glBegin(GL_POLYGON);  /* haircolor above ear tan */
		glColor3f(0.69, 0.745, 0.773);
		glVertex2f(55, 85);
		glVertex2f(65, 85);
		glVertex2f(65, 80);
		glVertex2f(55, 80);
	glEnd();

	glBegin(GL_POLYGON); /* shoe */
		glColor3f(1, 1, 1);
		glVertex2f(40, 15);
		glVertex2f(50, 15);
		glVertex2f(50, 10);
		glVertex2f(40, 10);
	glEnd();

	glBegin(GL_POLYGON); /* shoe -r */
		glColor3f(1, 1, 1);
		glVertex2f(20, 15);
		glVertex2f(30, 15);
		glVertex2f(30, 10);
		glVertex2f(20, 10);
	glEnd();

}

void charPos() {
    glPushMatrix();
    glTranslated(charaPosition[0], charaPosition[1], 0);

    if (left == true){
        glTranslated(60, 0, 0);
        glScaled(1,1,0);
    } else if (right == true){
        glTranslated(120, 0, 0);
        glScaled(-1,1,0);
    }
    makeChara();

    glPopMatrix();
}

void charMove(int data) {
    if(GetAsyncKeyState(VK_UP)) {
        charaPosition[1]++;
    }
    if(GetAsyncKeyState(VK_DOWN)) {
        charaPosition[1]--;
    }
    if(GetAsyncKeyState(VK_LEFT)) {
        charaPosition[0]--;

    }
    if(GetAsyncKeyState(VK_RIGHT)) {
        charaPosition[0]++;

    }

    glutPostRedisplay();
    glutTimerFunc(1, charMove, 0);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	charPos();

    if(GetAsyncKeyState(VK_LEFT)){
        left = true;
        right = false;
    }
    if(GetAsyncKeyState(VK_RIGHT)){
        right = true;
        left = false;
    }

	glFlush();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Sample");
	glutDisplayFunc(display);
	glutTimerFunc(1,charMove,0);

	myinit();
	glutMainLoop();
}

