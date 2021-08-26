#include "structure.h"

void idle() {
	// diêu khiên huong di cua bóng
	detectCollisionThenResolve();
	doCollisions();
	
	glutPostRedisplay();
}
