#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);/*sepatu kiri bawah*/
    glColor3b(128,128,128);
    glVertex2f(11, 101);
	glVertex2f(11, 100);
	glVertex2f(18, 100);
	glVertex2f(18, 101);
	glEnd();

    glBegin(GL_POLYGON);/*sepatu kiri bawah 2*/
    glColor3b(250,100,0);
    glVertex2f(12, 102);
	glVertex2f(12, 101);
	glVertex2f(13, 101);
	glVertex2f(13, 102);
	glEnd();

	glBegin(GL_POLYGON);/*sepatu kiri bawah 3*/
    glColor3b(250,100,0);
    glVertex2f(15, 102);
	glVertex2f(15, 101);
	glVertex2f(16, 101);
	glVertex2f(16, 102);
	glEnd();

	glBegin(GL_POLYGON);/*sepatu kiri bawah 3*/
    glColor3b(250,100,0);
    glVertex2f(18, 102);
	glVertex2f(18, 101);
	glVertex2f(19, 101);
	glVertex2f(19, 102);
	glEnd();

	glBegin(GL_POLYGON);/*sepatu kiri bawah 4*/
    glColor3b(250,100,0);
    glVertex2f(11, 104);
	glVertex2f(11, 102);
	glVertex2f(17, 102);
	glVertex2f(17, 104);
	glEnd();

	glBegin(GL_POLYGON);/*sepatu kiri bawah 5 biru*/
    glColor3b(250,100,0);
    glVertex2f(11, 105);
	glVertex2f(11, 104);
	glVertex2f(12, 104);
	glVertex2f(12, 105);
	glEnd();

	glBegin(GL_POLYGON);/*sepatu kiri bawah 6 kuning*/
    glColor3b(250,100,0);
    glVertex2f(11, 107);
	glVertex2f(11, 105);
	glVertex2f(12, 105);
	glVertex2f(12, 107);
	glEnd();

	glBegin(GL_POLYGON);/*sepatu kanan bawah*/
    glColor3b(250,100,0);
    glVertex2f(3, 102);
	glVertex2f(3, 101);
	glVertex2f(5, 101);
	glVertex2f(5, 102);
	glEnd();

	glBegin(GL_POLYGON);/*sepatu kanan bawah 2*/
    glColor3b(250,100,0);
    glVertex2f(2, 103);
	glVertex2f(2, 102);
	glVertex2f(4, 102);
	glVertex2f(4, 103);
	glEnd();

	glBegin(GL_POLYGON);/*sepatu kanan bawah 3*/
    glColor3b(250,100,0);
    glVertex2f(2, 108);
	glVertex2f(2, 102);
	glVertex2f(3, 102);
	glVertex2f(3, 108);
	glEnd();

	glBegin(GL_POLYGON);/*sepatu kanan bawah 4*/
    glColor3b(250,100,0);
    glVertex2f(3, 105);
	glVertex2f(3, 104);
	glVertex2f(5, 104);
	glVertex2f(5, 105);
	glEnd();

	glBegin(GL_POLYGON);/*sepatu kanan bawah 5*/
    glColor3b(250,100,0);
    glVertex2f(4, 106);
	glVertex2f(4, 105);
	glVertex2f(5, 105);
	glVertex2f(5, 106);
	glEnd();

	glBegin(GL_POLYGON);/*sepatu kanan bawah 6*/
    glColor3b(250,100,0);
    glVertex2f(3, 107);
	glVertex2f(3, 106);
	glVertex2f(6, 106);
	glVertex2f(6, 107);
	glEnd();

	glBegin(GL_POLYGON);/*sepatu kanan bawah 7*/
    glColor3b(250,100,0);
    glVertex2f(4, 108);
	glVertex2f(4, 107);
	glVertex2f(7, 107);
	glVertex2f(7, 108);
	glEnd();

	glBegin(GL_POLYGON);/*sepatu kanan bawah 8*/
    glColor3b(250,100,0);
    glVertex2f(5, 109);
	glVertex2f(5, 106);
	glVertex2f(6, 106);
	glVertex2f(6, 109);
	glEnd();

	glBegin(GL_POLYGON);/*sepatu kanan bawah 9 kuning*/
    glColor3b(250,100,0);
    glVertex2f(6, 109);
	glVertex2f(6, 108);
	glVertex2f(8, 108);
	glVertex2f(8, 109);
	glEnd();

	glBegin(GL_POLYGON);/*sepatu kanan bawah 10 kuning*/
    glColor3b(250,100,0);
    glVertex2f(6, 110);
	glVertex2f(6, 109);
	glVertex2f(9, 109);
	glVertex2f(9, 110);
	glEnd();

	glBegin(GL_POLYGON);/*bokong putih */
    glColor3b(250,100,0);
    glVertex2f(4, 109);
	glVertex2f(4, 108);
	glVertex2f(5, 108);
	glVertex2f(5, 109);
	glEnd();

	glBegin(GL_POLYGON);/*bokong putih 2*/
    glColor3b(250,100,0);
    glVertex2f(3, 110);
	glVertex2f(3, 109);
	glVertex2f(4, 109);
	glVertex2f(4, 110);
	glEnd();

	glBegin(GL_POLYGON);/*bokong biru*/
    glColor3b(250,100,0);
    glVertex2f(4, 110);
	glVertex2f(4, 109);
	glVertex2f(6, 109);
	glVertex2f(6, 110);
	glEnd();

	glBegin(GL_POLYGON);/*bokong biru 2*/
    glColor3b(250,100,0);
    glVertex2f(3, 113);
	glVertex2f(3, 110);
	glVertex2f(7, 110);
	glVertex2f(7, 113);
	glEnd();

	glBegin(GL_POLYGON);/*bokong biru 3*/
    glColor3b(250,100,0);
    glVertex2f(2, 114);
	glVertex2f(2, 113);
	glVertex2f(7, 113);
	glVertex2f(7, 114);
	glEnd();

	glBegin(GL_POLYGON);/*bokong biru 4*/
    glColor3b(250,100,0);
    glVertex2f(7, 112);
	glVertex2f(7, 111);
	glVertex2f(10, 111);
	glVertex2f(10, 112);
	glEnd();

	glBegin(GL_POLYGON);/*bokong biru 5*/
    glColor3b(250,100,0);
    glVertex2f(7, 111);
	glVertex2f(7, 110);
	glVertex2f(11, 110);
	glVertex2f(11, 111);
	glEnd();

	glBegin(GL_POLYGON);/*bokong biru 6*/
    glColor3b(250,100,0);
    glVertex2f(9, 110);
	glVertex2f(9, 109);
	glVertex2f(12, 109);
	glVertex2f(12, 110);
	glEnd();

	glBegin(GL_POLYGON);/*badan putih*/
    glColor3b(250,100,0);
    glVertex2f(7, 108);
	glVertex2f(7, 107);
	glVertex2f(21, 107);
	glVertex2f(21, 108);
	glEnd();

	glBegin(GL_POLYGON);/*badan putih 2*/
    glColor3b(250,100,0);
    glVertex2f(8, 109);
	glVertex2f(8, 108);
	glVertex2f(16, 108);
	glVertex2f(16, 109);
	glEnd();

	glBegin(GL_POLYGON);/*badan putih 3*/
    glColor3b(250,100,0);
    glVertex2f(12, 110);
	glVertex2f(12, 109);
	glVertex2f(15, 109);
	glVertex2f(15, 110);
	glEnd();

	glBegin(GL_POLYGON);/*badan putih 4*/
    glColor3b(250,100,0);
    glVertex2f(11, 111);
	glVertex2f(11, 110);
	glVertex2f(16, 110);
	glVertex2f(16, 111);
	glEnd();

	glBegin(GL_POLYGON);/*badan putih 5*/
    glColor3b(250,100,0);
    glVertex2f(13, 112);
	glVertex2f(13, 111);
	glVertex2f(15, 111);
	glVertex2f(15, 112);
	glEnd();

	glBegin(GL_POLYGON);/*badan putih 6*/
    glColor3b(250,100,0);
    glVertex2f(17, 109);
	glVertex2f(17, 108);
	glVertex2f(22, 108);
	glVertex2f(22, 109);
	glEnd();

	glBegin(GL_POLYGON);/*badan putih 7*/
    glColor3b(250,100,0);
    glVertex2f(7, 108);
	glVertex2f(7, 107);
	glVertex2f(21, 107);
	glVertex2f(21, 108);
	glEnd();

	glBegin(GL_POLYGON);/*badan putih 8*/
    glColor3b(250,100,0);
    glVertex2f(18, 111);
	glVertex2f(18, 109);
	glVertex2f(23, 109);
	glVertex2f(23, 111);
	glEnd();

	glBegin(GL_POLYGON);/*badan putih 9*/
    glColor3b(250,100,0);
    glVertex2f(20, 113);
	glVertex2f(20, 111);
	glVertex2f(23, 111);
	glVertex2f(23, 113);
	glEnd();

	glBegin(GL_POLYGON);/*badan putih 10*/
    glColor3b(250,100,0);
    glVertex2f(20, 114);
	glVertex2f(20, 113);
	glVertex2f(24, 113);
	glVertex2f(24, 114);
	glEnd();

	glBegin(GL_POLYGON);/*badan merah*/
    glColor3b(1,1,1);
    glVertex2f(16, 109);
	glVertex2f(16, 108);
	glVertex2f(17, 108);
	glVertex2f(17, 109);
	glEnd();

	glBegin(GL_POLYGON);/*badan merah 2*/
    glColor3b(1,1,1);
    glVertex2f(15, 110);
	glVertex2f(15, 109);
	glVertex2f(18, 109);
	glVertex2f(18, 110);
	glEnd();

	glBegin(GL_POLYGON);/*badan merah 3*/
    glColor3b(1,1,1);
    glVertex2f(16, 111);
	glVertex2f(16, 110);
	glVertex2f(18, 110);
	glVertex2f(18, 111);
	glEnd();

	glBegin(GL_POLYGON);/*badan merah 4*/
    glColor3b(1,1,1);
    glVertex2f(15, 112);
	glVertex2f(15, 111);
	glVertex2f(20, 111);
	glVertex2f(20, 112);
	glEnd();

	glBegin(GL_POLYGON);/*badan merah 5*/
    glColor3b(1,1,1);
    glVertex2f(16, 113);
	glVertex2f(16, 112);
	glVertex2f(20, 112);
	glVertex2f(20, 113);
	glEnd();

	glBegin(GL_POLYGON);/*badan merah tua 6*/
    glColor3b(1,1,1);
    glVertex2f(16, 114);
	glVertex2f(16, 113);
	glVertex2f(20, 113);
	glVertex2f(20, 114);
	glEnd();

	glBegin(GL_POLYGON);/*badan merah 7*/
    glColor3b(1,1,1);
    glVertex2f(16, 116);
	glVertex2f(16, 113);
	glVertex2f(24, 114);
	glVertex2f(24, 116);
	glEnd();

	glBegin(GL_POLYGON);/*badan merah 8*/
    glColor3b(1,1,1);
    glVertex2f(14, 117);
	glVertex2f(14, 116);
	glVertex2f(24, 116);
	glVertex2f(24, 117);
	glEnd();

	glBegin(GL_POLYGON);/*badan merah tua 9*/
    glColor3b(1,1,1);
    glVertex2f(10, 117);
	glVertex2f(10, 116);
	glVertex2f(14, 116);
	glVertex2f(14, 117);
	glEnd();

	glBegin(GL_POLYGON);/*badan merah tua 10*/
    glColor3b(1,1,1);
    glVertex2f(10, 119);
	glVertex2f(10, 117);
	glVertex2f(12, 117);
	glVertex2f(12, 119);
	glEnd();

	glBegin(GL_POLYGON);/*badan merah 11*/
    glColor3b(1,1,1);
    glVertex2f(12, 118);
	glVertex2f(12, 117);
	glVertex2f(14, 117);
	glVertex2f(14, 118);
	glEnd();

	glBegin(GL_POLYGON);/*kepala biru muda*/
    glColor3b(250,100,0);
    glVertex2f(14, 120);
	glVertex2f(14, 117);
	glVertex2f(15, 117);
	glVertex2f(15, 120);
	glEnd();

	glBegin(GL_POLYGON);/*kepala biru muda 2*/
    glColor3b(250,100,0);
    glVertex2f(13, 119);
	glVertex2f(13, 118);
	glVertex2f(14, 118);
	glVertex2f(14, 119);
	glEnd();

	glBegin(GL_POLYGON);/*kepala biru tua*/
    glColor3b(250,100,0);
    glVertex2f(12, 119);
	glVertex2f(12, 118);
	glVertex2f(13, 118);
	glVertex2f(13, 119);
	glEnd();

	glBegin(GL_POLYGON);/*kepala biru tua 2*/
    glColor3b(250,100,0);
    glVertex2f(11, 120);
	glVertex2f(11, 119);
	glVertex2f(14, 119);
	glVertex2f(14, 120);
	glEnd();

	glBegin(GL_POLYGON);/*kepala biru tua 3*/
    glColor3b(250,100,0);
    glVertex2f(11, 121);
	glVertex2f(11, 120);
	glVertex2f(15, 120);
	glVertex2f(15, 121);
	glEnd();

	glBegin(GL_POLYGON);/*kepala biru tua 4*/
    glColor3b(250,100,0);
    glVertex2f(12, 122);
	glVertex2f(12, 121);
	glVertex2f(15, 121);
	glVertex2f(15, 122);
	glEnd();

	glBegin(GL_POLYGON);/*kepala biru putih*/
    glColor3b(250,100,0);
    glVertex2f(15, 120);
	glVertex2f(15, 117);
	glVertex2f(22, 117);
	glVertex2f(22, 120);
	glEnd();

	glBegin(GL_POLYGON);/*kepala biru putih 2*/
    glColor3b(250,100,0);
    glVertex2f(15, 123);
	glVertex2f(15, 120);
	glVertex2f(24, 120);
	glVertex2f(24, 123);
	glEnd();

	glBegin(GL_POLYGON);/*kepala putih abu-abu 3*/
    glColor3b(250,100,0);
    glVertex2f(17, 124);
	glVertex2f(17, 123);
	glVertex2f(24, 123);
	glVertex2f(24, 124);
	glEnd();

	glBegin(GL_POLYGON);/*kepala paruh kuning*/
    glColor3b(250,100,0);
    glVertex2f(22, 120);
	glVertex2f(22, 117);
	glVertex2f(25, 117);
	glVertex2f(25, 120);
	glEnd();

	glBegin(GL_POLYGON);/*kepala paruh kuning 2*/
    glColor3b(250,100,0);
    glVertex2f(25, 119);
	glVertex2f(25, 116);
	glVertex2f(26, 116);
	glVertex2f(26, 119);
	glEnd();

	glBegin(GL_POLYGON);/*kepala mata*/
    glColor3b(1,1,1);
    glVertex2f(19, 123);
	glVertex2f(19, 122);
	glVertex2f(20, 122);
	glVertex2f(20, 123);
	glEnd();

	glBegin(GL_POLYGON);/*kepala mata 2*/
    glColor3b(1,1,1);
    glVertex2f(18, 122);
	glVertex2f(18, 120);
	glVertex2f(19, 120);
	glVertex2f(19, 122);
	glEnd();

	glBegin(GL_POLYGON);/*kepala mata 3*/
    glColor3b(1,1,1);
    glVertex2f(20, 122);
	glVertex2f(20, 120);
	glVertex2f(21, 120);
	glVertex2f(21, 122);
	glEnd();

	glBegin(GL_POLYGON);/*kepala sekat kotak kecil*/
    glColor3b(250,100,0);
    glVertex2f(16, 124);
	glVertex2f(16, 123);
	glVertex2f(17, 123);
	glVertex2f(17, 124);
	glEnd();

	glBegin(GL_POLYGON);/*topi putih bawah*/
    glColor3b(250,100,0);
    glVertex2f(15, 126);
	glVertex2f(15, 124);
	glVertex2f(23, 124);
	glVertex2f(23, 126);
	glEnd();

	glBegin(GL_POLYGON);/*topi putih bawah 2*/
    glColor3b(250,100,0);
    glVertex2f(12, 125);
	glVertex2f(12, 122);
	glVertex2f(15, 122);
	glVertex2f(15, 125);
	glEnd();

	glBegin(GL_POLYGON);/*topi putih bawah 3*/
    glColor3b(250,100,0);
    glVertex2f(11, 124);
	glVertex2f(11, 121);
	glVertex2f(12, 121);
	glVertex2f(12, 124);
	glEnd();

	glBegin(GL_POLYGON);/*topi putih bawah 4*/
    glColor3b(250,100,0);
    glVertex2f(10, 123);
	glVertex2f(10, 121);
	glVertex2f(11, 121);
	glVertex2f(11, 123);
	glEnd();

	glBegin(GL_POLYGON);/*topi merah tua*/
    glColor3b(250,100,0);
    glVertex2f(10, 129);
	glVertex2f(10, 123);
	glVertex2f(11, 123);
	glVertex2f(11, 129);
	glEnd();

	glBegin(GL_POLYGON);/*topi merah tua 2*/
    glColor3b(250,100,0);
    glVertex2f(11, 129);
	glVertex2f(11, 124);
	glVertex2f(12, 124);
	glVertex2f(12, 129);
	glEnd();

	glBegin(GL_POLYGON);/*topi merah tua 3*/
    glColor3b(250,100,0);
    glVertex2f(12, 129);
	glVertex2f(12, 128);
	glVertex2f(13, 128);
	glVertex2f(13, 129);
	glEnd();

	glBegin(GL_POLYGON);/*topi merah tua 4*/
    glColor3b(250,100,0);
    glVertex2f(12, 126);
	glVertex2f(12, 125);
	glVertex2f(15, 125);
	glVertex2f(15, 126);
	glEnd();

	glBegin(GL_POLYGON);/*topi merah*/
    glColor3b(250,100,0);
    glVertex2f(12, 128);
	glVertex2f(12, 126);
	glVertex2f(22, 126);
	glVertex2f(22, 128);
	glEnd();

	glBegin(GL_POLYGON);/*topi merah 2*/
    glColor3b(250,100,0);
    glVertex2f(13, 129);
	glVertex2f(13, 128);
	glVertex2f(20, 128);
	glVertex2f(20, 129);
	glEnd();

	glBegin(GL_POLYGON);/*topi merah 3*/
    glColor3b(250,100,0);
    glVertex2f(13, 130);
	glVertex2f(13, 129);
	glVertex2f(17, 129);
	glVertex2f(17, 130);
	glEnd();

	glBegin(GL_POLYGON);/*topi merah pucuk*/
    glColor3b(250,100,0);
    glVertex2f(8, 128);
	glVertex2f(8, 127);
	glVertex2f(10, 127);
	glVertex2f(10, 128);
	glEnd();

	glBegin(GL_POLYGON);/*topi putih pucuk*/
    glColor3b(250,100,0);
    glVertex2f(7, 127);
	glVertex2f(7, 125);
	glVertex2f(9, 125);
	glVertex2f(9, 127);
	glEnd();
	glFlush();
	glutSwapBuffers();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(1368, 728);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Hello world!");
	glutDisplayFunc(displayMe);
	gluOrtho2D(0, 200, 0, 200);
	glutMainLoop();
	return 0;
}
