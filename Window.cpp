/*
 * Window.cpp
 *
 *  Created on: Sep 27, 2016
 *      Author: Sefefe
 */

#include "Window.h"

namespace ASSA {

Window::Window() {
	// TODO Auto-generated constructor stub
rectangle = new Rectangle();
}
int Window::area(){
	return rectangle->area();
}
Window::~Window() {
	// TODO Auto-generated destructor stub
}

} /* namespace ASSA */
