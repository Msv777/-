#include "glut.h"
#include<stdio.h>
#pragma comment(lib ,"opengl32.lib")
#pragma comment(lib ,"glu32.lib")
#pragma comment(lib ,"glut32.lib")

void RenderScence2()
{
	glClear(GL_COLOR_BUFFER_BIT);//������ƵĻ�����
	glRectf(-0.5, -0.5, 0.5, 0.5);//���û��Ƶ�ͼ�Σ�����Ǿ��Σ��ĸ�����Ϊ ���������꣬�ֱ������½ǵĵ�����Ͻǵĵ����ꣻ
	glFlush();//���������͵���������ʼ����
}
int main2(int argc, char*argv[])
{
	glutCreateWindow("Sample2");
	glutDisplayFunc(RenderScence2);
	glutMainLoop();
	return 0;
}


