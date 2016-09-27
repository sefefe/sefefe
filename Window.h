/*
 * Window.h
 *
 *  Created on: Sep 27, 2016
 *      Author: Sefefe
 */
#include<iostream>
#include "Rectangle.cpp"
#ifndef SRC_WINDOW_H_
#define SRC_WINDOW_H_
using namespace std;
namespace ASSA {

class Window:public Rectangle {
public:
	Window();
	virtual int area();
	virtual ~Window();

private:
	Rectangle* rectangle;
};

} /* namespace ASSA */

#endif /* SRC_WINDOW_H_ */
