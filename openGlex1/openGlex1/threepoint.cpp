#include "glut.h"
#include<stdio.h>
#pragma comment(lib ,"opengl32.lib")
#pragma comment(lib ,"glu32.lib")
#pragma comment(lib ,"glut32.lib")

void RenderScence1()
{
	glClear(GL_COLOR_BUFFER_BIT);//������ƵĻ�����
	//glRectf(-0.5, -0.5, 0.5, 0.5);//���û��Ƶ�ͼ�Σ�����Ǿ��Σ��ĸ�����Ϊ ���������꣬�ֱ������½ǵĵ�����Ͻǵĵ����ꣻ
	glPointSize(50.0f);//����һ����Ĵ�С//50PX
	glBegin(GL_POINTS);
	glVertex2f(0, 0);
	glVertex2f(0.5, 0);
	glVertex2f(0, 0.5);

	glEnd();
	glFlush();//���������͵���������ʼ����
}
int main(int argc, char*argv[])
{
	glutCreateWindow("Sample1");
	glutDisplayFunc(RenderScence1);
	glutMainLoop();
	return 0;
}


