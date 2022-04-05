#include<iostream>
#include<GL/glew.h>//include/GL/glew.h
#include<GLFW/glfw3.h>//include/GLFW/glfw3.h
//还差一个宏定义 内置的msvc编译glew时候需要dll库而这个工程用的是静态lib；在预处理加上GLEW_STATIC;

int main(void)
{
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	if (glewInit() != GLEW_OK)
	std::cout << "Error!glew" << std::endl;
	//glewinit要在指定gl上下文后；//glew意在将opengl1.1后的现代opengl实现方法传送到你的代码中；
	std::cout << glGetString(GL_VERSION) << std::endl;//显示调用的现代opengl版本；
	/* Loop until the user closes the window */

	while (!glfwWindowShouldClose(window))//equals :glutmainloop()
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		glBegin(GL_TRIANGLES);
		glVertex2f(-0.5, 0);
		glVertex2f(0, 0.5);
		glVertex2f(0.5, 0);
		glEnd();
		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}