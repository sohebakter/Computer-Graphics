#include<windows.h>
#include<GL/glut.h>
void display(){

glClear(GL_COLOR_BUFFER_BIT);

//SKY
glBegin(GL_QUADS);
glColor3ub(135,206,235);
glVertex2d(1.0f,1.0f);
glVertex2d(-1.0f,1.0f);
glVertex2d(-1.0f,0.2f);
glVertex2d(1.0f,0.2f);

//road
glColor3ub(0,0,0);
glVertex2d(-1.0f,-0.2f);
glVertex2d(1.0f,-0.2f);
glVertex2d(1.0f,0.2f);
glVertex2d(-1.0f,0.2f);

//land
glColor3ub(0,255,0);
glVertex2d(-1.0f,-1.0f);
glVertex2d(1.0f,-1.0f);
glVertex2d(1.0f,-0.2f);
glVertex2d(-1.0f,-0.2f);
glEnd();

//rode divider

glLineWidth(10);
glBegin(GL_LINES);
glColor3ub(255,255,255);
glVertex2d(-1.0f,0.0f);
glVertex2d(1.0f,0.0f);
glEnd();

//Tree Root
glBegin(GL_QUADS);
glColor3ub(106,67,37);
glVertex2d(-0.7f,0.2f);
glVertex2d(-0.5f,0.2f);
glVertex2d(-0.5f,0.45f);
glVertex2d(-0.7f,0.45f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0,255,0);
glVertex2d(-0.8f,0.45f);
glVertex2d(-0.4f,0.45f);
glVertex2d(-0.6f,0.65f);

glVertex2d(-0.8f,0.49f);
glVertex2d(-0.4f,0.49f);
glVertex2d(-0.6f,0.70f);


glEnd();

//house(roof)
glBegin(GL_TRIANGLES);
glColor3ub(255,165,0);
glVertex2d(0.4f,0.7f);
glVertex2d(0.8f,0.7f);
glVertex2d(0.6f,0.9f);

glEnd();
//body
glBegin(GL_QUADS);
glColor3ub(0,0,255);
glVertex2d(0.4f,0.4f);
glVertex2d(0.8f,0.4f);
glVertex2d(0.8f,0.7f);
glVertex2d(0.4f,0.7f);

//1st window
glColor3ub(255,165,0);
glVertex2d(0.44f,0.5f);
glVertex2d(0.55f,0.5f);
glVertex2d(0.55f,0.58f);
glVertex2d(0.44f,0.58f);

//door

glColor3ub(255,165,0);
glVertex2d(0.57f,0.45f);
glVertex2d(0.63f,0.45f);
glVertex2d(0.63f,0.63f);
glVertex2d(0.57f,0.63f);



//2nd window
glColor3ub(255,165,0);
glVertex2d(0.65f,0.5f);
glVertex2d(0.76f,0.5f);
glVertex2d(0.76f,0.58f);
glVertex2d(0.65f,0.58f);

glColor3ub(255,165,0);
glVertex2d(0.53f,0.4f);
glVertex2d(0.7f,0.4f);
glVertex2d(0.7f,0.35f);
glVertex2d(0.53f,0.35f);


glEnd();


    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Colored House");
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
































































