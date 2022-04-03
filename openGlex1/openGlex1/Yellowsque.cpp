#include "glut.h"
#include<stdio.h>
#pragma comment(lib ,"opengl32.lib")
#pragma comment(lib ,"glu32.lib")
#pragma comment(lib ,"glut32.lib")

void RenderScence4()
{
	glClear(GL_COLOR_BUFFER_BIT);//清除绘制的缓冲区
	glColor3f(1.0, 1.0, 0.0);//设置绘图颜色，rgb三位浮点值，此为黄色
	//glRectf(-0.5, -0.5, 0.5, 0.5);//设置绘制的图形，这个是矩形，四个参数为 两个点坐标，分别是左下角的点和右上角的点坐标；
	glBegin(GL_QUADS);//接收四个顶点来绘制一个四边形
	glVertex2f(0.5, 0.5);//定义二维点坐标
	glVertex2f(0.5, -0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.5);
	glEnd();
	glFlush();//将绘制推送到缓冲区开始绘制
}
int main4(int argc, char*argv[])
{
	glutCreateWindow("Sample2");
	glutDisplayFunc(RenderScence4);
	glutMainLoop();
	return 0;
}


