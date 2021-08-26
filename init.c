#include "structure.h"

OBJECT bar, ball;
BOUNDS bounds;

void init() {
	// TODO: viêt các lênh khoi tao
	
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
 * Khoi tao vi trí ban dau cua qua bóng
 * Co the bo qua 1 so thuoc tinh neu khong dung den nhu `delta_z`
 */
void initBall() {
	// TODO: viêt các lênh khoi tao
}

// Khoi tao vi trí ban dau cua thanh do bóng
void initPaddle() {
	// TODO: viêt các lênh khoi tao
}
