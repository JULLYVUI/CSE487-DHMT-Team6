#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include "structure.h"

int main(int argc, char** argv) 
{ 
	glutInit(&argc, argv); // khoi dông Glut
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB); // chi ra màu cua Mode, và cua sô buffer dôi
	glutInitWindowSize (600, 600);		// khoi tao cua sô window có kích thuoc 600*600
	glutInitWindowPosition (100, 100);  // khoi tao vi trí window trên màn hình
	glutCreateWindow (argv[0]);
	
	init();
	
	glutDisplayFunc(render);
	glutReshapeFunc(reshape);		// dang ký hàm reshape cho su kiên cua sô bi thay dôi kích thuoc
	glutKeyboardFunc(keyboard);		// bat các ký tu ASCII don gian
	glutSpecialFunc(specialKey);	// bat các ký tu dac biêt
	glutIdleFunc(idle);  // khi chuong trình dang trong trang thái Idle(tuc là 0 xu lý gì ca) thì se thuc hiên hàm idle
	
	glutMainLoop();
	return 0;
}
