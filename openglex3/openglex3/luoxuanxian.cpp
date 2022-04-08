#include <gl/glut.h>//"glut.h"
#include<stdio.h>
#include<math.h>
#pragma comment(lib ,"opengl32.lib")
#pragma comment(lib ,"glu32.lib")
#pragma comment(lib ,"glut32.lib")
void RenderAHelix(float radiusInner = 0.1, float radiusOuter = 0.8, int numofDot = 50)
{
	float PI = 3.1415926535897932;//����pi
	float r = 0;//lou = 0;
	float a = radiusInner;
	float b = radiusOuter;
	float angle = (2 * PI) / numofDot;//����ÿ�����ӵĽǶȣ����ȣ�
	float Numangle = 0.0;//����ÿ�Σ���i�Σ�������������Ļ���
		//��ͼ
	float x, y;
	for (int i = 0; i < numofDot; i++)
	{
		Numangle = angle * i;
		r = a + b * Numangle;
		x = r * cos(Numangle);
		y = r * sin(Numangle);
		glVertex2f(x, y);
	}

}
	
void RenderScence()
{
	glClear(GL_COLOR_BUFFER_BIT);//������ƵĻ�����
	glColor3f(1.0, 1.0, 0.0);//���û�ͼ��ɫ��rgb��λ����ֵ����Ϊ��ɫ
	glBegin(GL_POINTS);
	RenderAHelix();
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


