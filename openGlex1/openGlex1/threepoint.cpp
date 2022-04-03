#include "glut.h"
#include<stdio.h>
#pragma comment(lib ,"opengl32.lib")
#pragma comment(lib ,"glu32.lib")
#pragma comment(lib ,"glut32.lib")

void RenderScence1()
{
	glClear(GL_COLOR_BUFFER_BIT);//清除绘制的缓冲区
	//glRectf(-0.5, -0.5, 0.5, 0.5);//设置绘制的图形，这个是矩形，四个参数为 两个点坐标，分别是左下角的点和右上角的点坐标；
	glPointSize(50.0f);//设置一个点的大小//50PX
	glBegin(GL_POINTS);
	glVertex2f(0, 0);
	glVertex2f(0.5, 0);
	glVertex2f(0, 0.5);

	glEnd();
	glFlush();//将绘制推送到缓冲区开始绘制
}
int main(int argc, char*argv[])
{
	glutCreateWindow("Sample1");
	glutDisplayFunc(RenderScence1);
	glutMainLoop();
	return 0;
}


