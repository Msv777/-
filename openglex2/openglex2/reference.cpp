#include <stdlib.h>
#include <GL/glut.h>


int hh, ww, xx, yy;

void display() {

	glClear(GL_COLOR_BUFFER_BIT);

	glRectf(-1.0, -1.0, 1.0, 1.0);

	glutSwapBuffers();

}

void myinit(void) {

	glClearColor(0.0, 0.0, 0.0, 1.0);

	glColor3f(1.0, 1.0, 1.0);

	glShadeModel(GL_FLAT);

}

void mymenu(int value) {

	if (value == 1) {

		glClear(GL_COLOR_BUFFER_BIT);

		glutSwapBuffers();

	}

	if (value == 2) {

		exit(0);

	}

}

/*  Main Loop
 *  Open window with initial window size, title bar,
 *  RGBA display mode, and handle input events.
 */

int main(int argc, char** argv) {

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

	glutInitWindowPosition(310, 0);

	glutCreateWindow("double buffered");

	myinit();

	glutDisplayFunc(display);//ע����ʾ�ص�����

	glutCreateMenu(mymenu);//ע��˵��ص�����

	glutAddMenuEntry("Clear Screen", 1);//��Ӳ˵���

	glutAddMenuEntry("Exit", 2);

	glutAttachMenu(GLUT_RIGHT_BUTTON);//�ѵ�ǰ�˵�ע�ᵽָ��������

	glutMainLoop();


}

//��������������������������������
//��Ȩ����������ΪCSDN������a771948524����ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
//ԭ�����ӣ�https ://blog.csdn.net/zxlstudio/article/details/10950693