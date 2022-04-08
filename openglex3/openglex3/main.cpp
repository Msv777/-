#include <gl/glut.h>//"glut.h"
#include<stdio.h>
#include<math.h>
#pragma comment(lib ,"opengl32.lib")
#pragma comment(lib ,"glu32.lib")
#pragma comment(lib ,"glut32.lib")
void RenderACircle(float radius , int numofDot)
{
	float PI = 3.1415926535897932;//����pi
	float x, y;//��������
	float angle = (2 * PI) / numofDot;//����ÿ�����ӵĽǶȣ����ȣ�
	float Numangle = 0.0;//����ÿ�Σ���i�Σ�������������Ļ���
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
	glClear(GL_COLOR_BUFFER_BIT);//������ƵĻ�����
	glColor3f(1.0, 1.0, 0.0);//���û�ͼ��ɫ��rgb��λ����ֵ����Ϊ��ɫ
	glBegin(GL_POINTS);
	RenderACircle(0.5, 30);
	glEnd();
	glFlush();//���������͵���������ʼ����
}
int main(int argc, char*argv[])
{
	glutCreateWindow("Sample2");
	glutDisplayFunc(RenderScence);
	glutMainLoop();
	return 0;
}


