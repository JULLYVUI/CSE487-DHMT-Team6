#include "structure.h"

OBJECT bar, ball;
BOUNDS bounds;

void init() {
	// TODO: vi�t c�c l�nh khoi tao
	
	initBounds();
	initBall();
	initPaddle();
}

// Khoi tao gioi han cua khong gian tro choi
void initBounds() {
	bounds.MaxX = 2;
	bounds.MaxY = 2;
}

/**
 * Khoi tao vi tr� ban dau cua qua b�ng
 * Co the bo qua 1 so thuoc tinh neu khong dung den nhu `delta_z`
 */
void initBall() {
	// TODO: vi�t c�c l�nh khoi tao
}

// Khoi tao vi tr� ban dau cua thanh do b�ng
void initPaddle() {
	// TODO: vi�t c�c l�nh khoi tao
}
