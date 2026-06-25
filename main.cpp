

#include<windows.h>
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(10.1);
	glBegin(GL_LINES);
	glColor3ub(255, 0, 0);
	glVertex2f(0.6f, -0.6f);
	glVertex2f(-0.1f, 0.6f);
	glEnd();

	//just Tringles
 glBegin(GL_TRIANGLES);
 glColor3ub(0,0,0);
 glVertex2d(-0.6,-0.6);
 glVertex2d(-0.2,-0.6);
 glVertex2d(-0.4,-0.1);
 glEnd();

 glBegin(GL_QUADS);
	glColor3ub(0,255,0);
    glVertex2f(-0.8f, 0.2f);
    glVertex2f(-0.5,0.2);
    glVertex2f(-0.5f, 0.6f);
    glVertex2f(-0.8,0.6);
    glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(255,255,0);
	glVertex2f(-0.8f, 0.2f);
	glVertex2f(-0.5f, 0.2f);
	glVertex2f(-0.65f, 0.5f);
	glEnd();

glBegin (GL_POLYGON);
	glColor3ub(0,155,255);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.5f, 0.3f);
    glVertex2f(0.7f, 0.4f);
    glVertex2f(0.7f, 0.6f);
    glVertex2f(0.5f, 0.7f);
    glVertex2f(0.3f, 0.6f);



	glEnd();



    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Colored House");

    glClearColor(1.0, 1.0, 1.0, 1.0);

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}


