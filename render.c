#include "structure.h"

void render(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // x�a color buffer v� depth buffer 
	
	// thanh do b�ng b�n duoi 0 chuy�n d�ng li�n tuc nhu qua b�ng n�n duoc ve truoc
	renderPaddle();
	renderBall();
	
	glutSwapBuffers();
}

void renderPaddle() {
	glPushMatrix();
	
	// TODO: ve thanh do b�ng
	
	glPopMatrix();
}

void renderBall() {
	glPushMatrix();
	
	// TODO: ve qua b�ng
	
	glPopMatrix();
}
