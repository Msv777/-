#include <stdlib.h>//OpenGL和C++有不太融合的地方，在include时要让标准C++类库的头文件位于GLUT图形库头文件之前。
#include <GL/glut.h>
#include <process.h>
void RenderScence()
{
	glClearColor(0.0, 0.0, 0.0, 1.0);

	glColor3f(1.0, 1.0, 1.0);//设置绘图颜色，rgb三位浮点值，此为黄色

	glShadeModel(GL_FLAT);

	glClear(GL_COLOR_BUFFER_BIT);//清除绘制的缓冲区

	glRectf(-0.5, -0.5, 0.5, 0.5);//设置绘制的图形，这个是矩形，四个参数为 两个点坐标，分别是左下角的点和右上角的点坐标；

	glutSwapBuffers();//双缓冲绘图
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
	glutCreateMenu(mymenu);//注册菜单回调函数

	glutAddMenuEntry("Clear Screen", 1);//添加菜单项

	glutAddMenuEntry("Exit", 2);

	glutAddMenuEntry("change to blue", 3);

	glutAddMenuEntry("change to green", 4);

	glutAddMenuEntry("change to red", 5);

	glutAddMenuEntry("change to white", 6);
	glutAttachMenu(GLUT_RIGHT_BUTTON);//把当前菜单注册到指定的鼠标键

}

/*  Main Loop
 *  Open window with initial window size, title bar,
 *  RGBA display mode, and handle input events.
 */

int main(int argc, char** argv) {


	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

	glutInitWindowPosition(0, 0);

	glutCreateWindow("double buffered");

	glutDisplayFunc(RenderScence);//注册显示回调函数

	Menusign();
	glutMainLoop();


}