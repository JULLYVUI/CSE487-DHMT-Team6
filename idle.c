#include "structure.h"

void idle() {
	// di�u khi�n huong di cua b�ng
	detectCollisionThenResolve();
	doCollisions();
	
	glutPostRedisplay();
}
