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
 * xu l� khi an ph�m dac bi�t (0 phai k� tu ASCII)
 * di chuyen thanh do b�ng
 */
void specialKey(int key, int x, int y) {
	switch (key) {
		case GLUT_KEY_LEFT:
			// TODO: thay d�i vi tr� cua thanh do b�ng
			break;
		case GLUT_KEY_RIGHT:
			// TODO: nhu ben tren
			break;
		default: 
			break; 
	}
	glutPostRedisplay();
}
