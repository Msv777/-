#include "glut.h"
#include<stdio.h>
#pragma comment(lib ,"opengl32.lib")
#pragma comment(lib ,"glu32.lib")
#pragma comment(lib ,"glut32.lib")

void RenderScence3()
{
	glClear(GL_COLOR_BUFFER_BIT);//������ƵĻ�����
	//glRectf(-0.5, -0.5, 0.5, 0.5);//���û��Ƶ�ͼ�Σ�����Ǿ��Σ��ĸ�����Ϊ ���������꣬�ֱ������½ǵĵ�����Ͻǵĵ����ꣻ
	glPointSize(2.0f);//����һ����Ĵ�С_Ϊʲôд��begin end ����᲻��Ч?
	glBegin(GL_POINTS);
	glColor3f(1.0, 0.0, 0.0);//���û�ͼ��ɫ��rgb��λ����ֵ����Ϊ��ɫ
			glVertex2f(0, 0);
	glEnd();
	glPointSize(3.0f);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 0.0);//���û�ͼ��ɫ��rgb��λ����ֵ����Ϊ��ɫ
			glVertex2f(0.5, 0);
	glEnd();
	glPointSize(4.0f);
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 1.0);//���û�ͼ��ɫ��rgb��λ����ֵ����Ϊ��ɫ
			glVertex2f(0, 0.5);
	glEnd();
	glPointSize(5.0f);
	glBegin(GL_POINTS);
	glColor3f(1.0, 0.0, 1.0);//���û�ͼ��ɫ��rgb��λ����ֵ����Ϊ��ɫ
			glVertex2f(-0.5, 0);
	glEnd();
	glPointSize(6.0f);
	glBegin(GL_POINTS);
	glColor3f(1.0, 1.0, 0.0);//���û�ͼ��ɫ��rgb��λ����ֵ����Ϊ��ɫ
			glVertex2f(0, -0.5);
	glEnd();
	glFlush();//���������͵���������ʼ����
}
int main3(int argc, char*argv[])
{
	glutCreateWindow("Sample1");
	glutDisplayFunc(RenderScence3);
	glutMainLoop();
	return 0;
}


