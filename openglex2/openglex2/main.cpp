#include <stdlib.h>//OpenGL��C++�в�̫�ںϵĵط�����includeʱҪ�ñ�׼C++����ͷ�ļ�λ��GLUTͼ�ο�ͷ�ļ�֮ǰ��
#include <GL/glut.h>
#include <process.h>
void RenderScence()
{
	glClearColor(0.0, 0.0, 0.0, 1.0);

	glColor3f(1.0, 1.0, 1.0);//���û�ͼ��ɫ��rgb��λ����ֵ����Ϊ��ɫ

	glShadeModel(GL_FLAT);

	glClear(GL_COLOR_BUFFER_BIT);//������ƵĻ�����

	glRectf(-0.5, -0.5, 0.5, 0.5);//���û��Ƶ�ͼ�Σ�����Ǿ��Σ��ĸ�����Ϊ ���������꣬�ֱ������½ǵĵ�����Ͻǵĵ����ꣻ

	glutSwapBuffers();//˫�����ͼ
}
void mymenu(int value) {

	if (value == 1) {

		glClear(GL_COLOR_BUFFER_BIT);

		glutSwapBuffers();

	}

	if (value == 2) {

		exit(0);

	}
	if (value == 3) {

		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0.0, 0.0, 0.0, 1.0);
		glColor3f(0.0, 0.0, 1.0);
		glRectf(-0.5, -0.5, 0.5, 0.5);
		glutSwapBuffers();

	}
	if (value == 4) {

		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0.0, 0.0, 0.0, 1.0);
		glColor3f(0.0, 1.0, 0.0);
		glRectf(-0.5, -0.5, 0.5, 0.5);
		glutSwapBuffers();

	}
	if (value == 5) {

		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0.0, 0.0, 0.0, 1.0);
		glColor3f(1.0, 0.0, 0.0);
		glRectf(-0.5, -0.5, 0.5, 0.5);
		glutSwapBuffers();

	}
	if (value == 6) {

		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0.0, 0.0, 0.0, 1.0);
		glColor3f(1.0, 1.0, 1.0);
		glRectf(-0.5, -0.5, 0.5, 0.5);
		glutSwapBuffers();

	}

}
void Menusign()
{
	glutCreateMenu(mymenu);//ע��˵��ص�����

	glutAddMenuEntry("Clear Screen", 1);//��Ӳ˵���

	glutAddMenuEntry("Exit", 2);

	glutAddMenuEntry("change to blue", 3);

	glutAddMenuEntry("change to green", 4);

	glutAddMenuEntry("change to red", 5);

	glutAddMenuEntry("change to white", 6);
	glutAttachMenu(GLUT_RIGHT_BUTTON);//�ѵ�ǰ�˵�ע�ᵽָ��������

}

/*  Main Loop
 *  Open window with initial window size, title bar,
 *  RGBA display mode, and handle input events.
 */

int main(int argc, char** argv) {


	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

	glutInitWindowPosition(0, 0);

	glutCreateWindow("double buffered");

	glutDisplayFunc(RenderScence);//ע����ʾ�ص�����

	Menusign();
	glutMainLoop();


}