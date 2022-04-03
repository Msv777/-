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

	glutDisplayFunc(display);//注册显示回调函数

	glutCreateMenu(mymenu);//注册菜单回调函数

	glutAddMenuEntry("Clear Screen", 1);//添加菜单项

	glutAddMenuEntry("Exit", 2);

	glutAttachMenu(GLUT_RIGHT_BUTTON);//把当前菜单注册到指定的鼠标键

	glutMainLoop();


}

//————————————————
//版权声明：本文为CSDN博主「a771948524」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
//原文链接：https ://blog.csdn.net/zxlstudio/article/details/10950693