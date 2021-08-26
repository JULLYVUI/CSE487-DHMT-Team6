#include <GL/glut.h>

#include "structure.h"

void keyboard (unsigned char key, int x, int y) {
	switch (key) {
		// TODO: viet cac case (hien tai chua biet)
		default: 
			break; 
	}
	glutPostRedisplay();
}

/**
 * xu lý khi an phím dac biêt (0 phai ký tu ASCII)
 * di chuyen thanh do bóng
 */
void specialKey(int key, int x, int y) {
	switch (key) {
		case GLUT_KEY_LEFT:
			// TODO: thay dôi vi trí cua thanh do bóng
			break;
		case GLUT_KEY_RIGHT:
			// TODO: nhu ben tren
			break;
		default: 
			break; 
	}
	glutPostRedisplay();
}
