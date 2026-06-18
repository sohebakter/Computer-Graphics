#include<windows.h>
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    //This is for Point
    glPointSize(10.0);
	glBegin(GL_POINTS);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-0.5f, 0.5f);
	glEnd();

	 //This is for Line
	glLineWidth(7.5);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 255);
	glVertex2f(0.32f, 0.2f);
	glVertex2f(0.6f, 0.8f);

	glColor3ub(0, 255, 0);
	glVertex2f(0.6f, 0.8f);
	glVertex2f(0.22f, 0.7f);

	glColor3ub(255, 0, 0);
	glVertex2f(0.22f, 0.7f);
	glVertex2f(0.32f, 0.2f);
	glEnd();


	//This is for Triangles
	glBegin(GL_TRIANGLES);
	glColor3ub(255,0,0);
	glVertex2f(-0.6f, -0.2f);
	glVertex2f(-0.9f, -0.35f);
	glVertex2f(-0.4f, -0.35f);
	glEnd();


	//This is for QUADS
	glBegin(GL_QUADS);
	glColor3ub(255,0,255);
    glVertex2f(-0.3f, -0.9f);
    glColor3ub(0,0,255);
    glVertex2f(0.3f, -0.9f);
    glColor3ub(255,0,0);
    glVertex2f(0.3f, -0.5f);
    glColor3ub(0,255,0);
    glVertex2f(-0.3f, -0.5f);
	glEnd();


	//This is for Polygon
	glBegin(GL_POLYGON);
	glColor3ub(0,150,255);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.5f);
    glVertex2f(0.8f, -0.25f);
    glVertex2f(0.6f, -0.5f);
    glVertex2f(0.75f, -0.9f);
    glVertex2f(0.75f, -1.0f);
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















