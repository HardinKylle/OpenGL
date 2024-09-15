#include <iostream>
#include <GL/glut.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(0.5, 0.5);
	glVertex2f(0.5, -0.5);
	glEnd();
	glFlush();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutCreateWindow("KYLLE HARDIN");
	glutDisplayFunc(display);
	glutMainLoop();
}
