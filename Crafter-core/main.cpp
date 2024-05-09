#include "src/graphics/window.h"
#include "src/maths/maths.h"


int main() {
	using namespace crafter;
	using namespace graphics;
	using namespace maths;

	Window window("Crafter!", 960, 540);
	glClearColor(0.0, 0.0f, 0.0f, 0.0f);

	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);


	mat4 position = mat4::translation(vec3(2, 3, 4));
	position *= mat4::identity();

	while (!window.closed()) {
		window.clear();
		//std::cout << window.getWidth() << ' ' << window.getHeight() << std::endl;



		if (window.isKeyPressed(GLFW_KEY_A)) {
			std::cout << "Key pressed" << std::endl;
		}
		if (window.isMouseButtonPressed(GLFW_MOUSE_BUTTON_LEFT)) {
			std::cout << "Button Pressed pressed" << std::endl;
		}

		double x, y;
		window.getMousePosition(x, y);
		//std::cout << x << ',' << y << std::endl;
		


		glBegin(GL_TRIANGLES);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(0.0f, 0.5f);
		glVertex2f(0.5f, -0.5f);
		glEnd();
	 	window.update();

	}
	return 0;
}