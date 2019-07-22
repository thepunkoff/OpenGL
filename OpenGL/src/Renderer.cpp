#include "Renderer.h"
#include <iostream>

void GLClearError()
{
	while (glGetError() != GL_NO_ERROR);
}

bool GLLogCall(const char* function, const char* file, int line)
{
	while (GLenum error = glGetError()) // If no errors, GLenum error will be assigned 0, so the condition will evaluate into false (0), and the loop will be skipped
	{
		std::cout << "[OpenGL Error] (" << error << "):" << function <<
			" " << file << ":" << line << std::endl;
		return false;
	}
	return true;
}