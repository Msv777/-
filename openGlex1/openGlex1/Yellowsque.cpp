#include "glut.h"
#include<stdio.h>
#pragma comment(lib ,"opengl32.lib")
#pragma comment(lib ,"glu32.lib")
#pragma comment(lib ,"glut32.lib")

void RenderScence4()
{
	glClear(GL_COLOR_BUFFER_BIT);//������ƵĻ�����
	glColor3f(1.0, 1.0, 0.0);//���û�ͼ��ɫ��rgb��λ����ֵ����Ϊ��ɫ
	//glRectf(-0.5, -0.5, 0.5, 0.5);//���û��Ƶ�ͼ�Σ�����Ǿ��Σ��ĸ�����Ϊ ���������꣬�ֱ������½ǵĵ�����Ͻǵĵ����ꣻ
	glBegin(GL_QUADS);//�����ĸ�����������һ���ı���
	glVertex2f(0.5, 0.5);//�����ά������
	glVertex2f(0.5, -0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.5);
	glEnd();
	glFlush();//���������͵���������ʼ����
}
int main4(int argc, char*argv[])
{
	glutCreateWindow("Sample2");
	glutDisplayFunc(RenderScence4);
	glutMainLoop();
	return 0;
}


