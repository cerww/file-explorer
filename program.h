#pragma once
#include "cw\window.h"
#include "cw\button.h"
#include "cw\camera2D.h"

class program{
public:	
	program(){
		mainCam.setPos({400,400});;
		mainCam.update();
	}
	window Window = glfwCreateWindow(800, 800, "", NULL, NULL);
	camera2D mainCam = camera2D(800,800);
	void run();
private:
};