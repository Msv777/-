#include "glut.h"
#include<stdio.h>
#pragma comment(lib ,"opengl32.lib")
#pragma comment(lib ,"glu32.lib")
#pragma comment(lib ,"glut32.lib")

void RenderScence3()
{
	glClear(GL_COLOR_BUFFER_BIT);//清除绘制的缓冲区
	//glRectf(-0.5, -0.5, 0.5, 0.5);//设置绘制的图形，这个是矩形，四个参数为 两个点坐标，分别是左下角的点和右上角的点坐标；
	glPointSize(2.0f);//设置一个点的大小_为什么写在begin end 里面会不生效?
	glBegin(GL_POINTS);
	glColor3f(1.0, 0.0, 0.0);//设置绘图颜色，rgb三位浮点值，此为红色
			glVertex2f(0, 0);
	glEnd();
	glPointSize(3.0f);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 0.0);//设置绘图颜色，rgb三位浮点值，此为绿色
			glVertex2f(0.5, 0);
	glEnd();
	glPointSize(4.0f);
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 1.0);//设置绘图颜色，rgb三位浮点值，此为蓝色
			glVertex2f(0, 0.5);
	glEnd();
	glPointSize(5.0f);
	glBegin(GL_POINTS);
	glColor3f(1.0, 0.0, 1.0);//设置绘图颜色，rgb三位浮点值，此为红色
			glVertex2f(-0.5, 0);
	glEnd();
	glPointSize(6.0f);
	glBegin(GL_POINTS);
	glColor3f(1.0, 1.0, 0.0);//设置绘图颜色，rgb三位浮点值，此为黄色
			glVertex2f(0, -0.5);
	glEnd();
	glFlush();//将绘制推送到缓冲区开始绘制
}
int main3(int argc, char*argv[])
{
	glutCreateWindow("Sample1");
	glutDisplayFunc(RenderScence3);
	glutMainLoop();
	return 0;
}


