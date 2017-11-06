#include "program.h"
#include <iostream>

void program::run(){
	glClearColor(1, 1, 1, 1);
	while (!glfwWindowShouldClose(Window.getWindowPtr())){
		Window.update();
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		
		Window.wait();
	}
}

