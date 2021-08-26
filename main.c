#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include "structure.h"

int main(int argc, char** argv) 
{ 
	glutInit(&argc, argv); // khoi d�ng Glut
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB); // chi ra m�u cua Mode, v� cua s� buffer d�i
	glutInitWindowSize (600, 600);		// khoi tao cua s� window c� k�ch thuoc 600*600
	glutInitWindowPosition (100, 100);  // khoi tao vi tr� window tr�n m�n h�nh
	glutCreateWindow (argv[0]);
	
	init();
	
	glutDisplayFunc(render);
	glutReshapeFunc(reshape);		// dang k� h�m reshape cho su ki�n cua s� bi thay d�i k�ch thuoc
	glutKeyboardFunc(keyboard);		// bat c�c k� tu ASCII don gian
	glutSpecialFunc(specialKey);	// bat c�c k� tu dac bi�t
	glutIdleFunc(idle);  // khi chuong tr�nh dang trong trang th�i Idle(tuc l� 0 xu l� g� ca) th� se thuc hi�n h�m idle
	
	glutMainLoop();
	return 0;
}
