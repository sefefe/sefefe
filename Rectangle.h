/*
 * Rectangle.h
 *
 *  Created on: Sep 27, 2016
 *      Author: Sefefe
 */

#ifndef SRC_RECTANGLE_H_
#define SRC_RECTANGLE_H_
using namespace std;
namespace ASSA {

class Rectangle {
public:
	Rectangle();
	virtual int area();
	virtual ~Rectangle();
private:
	int width;
	int height;
};

} /* namespace ASSA */

#endif /* SRC_RECTANGLE_H_ */
