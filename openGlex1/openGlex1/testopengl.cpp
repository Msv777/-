#include "glut.h"
#include<stdio.h>
#pragma comment(lib ,"opengl32.lib")
#pragma comment(lib ,"glu32.lib")
#pragma comment(lib ,"glut32.lib")

void RenderScence2()
{
	glClear(GL_COLOR_BUFFER_BIT);//清除绘制的缓冲区
	glRectf(-0.5, -0.5, 0.5, 0.5);//设置绘制的图形，这个是矩形，四个参数为 两个点坐标，分别是左下角的点和右上角的点坐标；
	glFlush();//将绘制推送到缓冲区开始绘制
}
int main2(int argc, char*argv[])
{
	glutCreateWindow("Sample2");
	glutDisplayFunc(RenderScence2);
	glutMainLoop();
	return 0;
}


