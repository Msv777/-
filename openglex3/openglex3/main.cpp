#include <gl/glut.h>//"glut.h"
#include<stdio.h>
#include<math.h>
#pragma comment(lib ,"opengl32.lib")
#pragma comment(lib ,"glu32.lib")
#pragma comment(lib ,"glut32.lib")
void RenderACircle(float radius , int numofDot)
{
	float PI = 3.1415926535897932;//定义pi
	float x, y;//定义坐标
	float angle = (2 * PI) / numofDot;//定义每次增加的角度（弧度）
	float Numangle = 0.0;//定义每次（第i次）作正余弦运算的弧度
	for (int i = 0; i < numofDot; i++)
	{
		Numangle = angle * i;
		x = radius * cos(Numangle);
		y = radius * sin(Numangle);
		glVertex2f(x, y);
	}
}
void RenderScence()
{
	glClear(GL_COLOR_BUFFER_BIT);//清除绘制的缓冲区
	glColor3f(1.0, 1.0, 0.0);//设置绘图颜色，rgb三位浮点值，此为黄色
	glBegin(GL_POINTS);
	RenderACircle(0.5, 30);
	glEnd();
	glFlush();//将绘制推送到缓冲区开始绘制
}
int main(int argc, char*argv[])
{
	glutCreateWindow("Sample2");
	glutDisplayFunc(RenderScence);
	glutMainLoop();
	return 0;
}


