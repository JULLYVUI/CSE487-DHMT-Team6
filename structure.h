#ifndef STRUCTURE_H
#define STRUCTURE_H

#pragma once

#include <GL/gl.h>

struct GameObject {
	GLfloat x;
	GLfloat y;
	GLfloat z;
	GLfloat delta_x;
	GLfloat delta_y;
	GLfloat delta_z;
	GLfloat Sx;
	GLfloat Sy;
	GLfloat Sz;
};

// Gioi han cua khong gian tro choi
struct Bounds {
	GLfloat MaxX;
	GLfloat MaxY;
};

typedef struct GameObject OBJECT;
typedef struct Bounds BOUNDS;

extern OBJECT paddle, ball; // paddle ~ thanh do bóng ~ chi có thê di chuyên theo chiêu ngang
extern BOUNDS bounds;

void init(void);
void initBounds(void);
void initBall(void);
void initPaddle(void);

void render(void);
void reshape(int w, int h);
void keyboard(unsigned char key, int x, int y);
void specialKey(int key, int x, int y);
void idle();

void renderPaddle();
void renderBall();

void detectCollisionThenResolve(void);
void doCollisions(void);

#endif

