#include "structure.h"

void render(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // xóa color buffer và depth buffer 
	
	// thanh do bóng bên duoi 0 chuyên dông liên tuc nhu qua bóng nên duoc ve truoc
	renderPaddle();
	renderBall();
	
	glutSwapBuffers();
}

void renderPaddle() {
	glPushMatrix();
	
	// TODO: ve thanh do bóng
	
	glPopMatrix();
}

void renderBall() {
	glPushMatrix();
	
	// TODO: ve qua bóng
	
	glPopMatrix();
}
