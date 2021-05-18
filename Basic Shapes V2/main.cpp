#include<windows.h>
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <cstring>
void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);

    glBegin(GL_QUADS);
	glColor3f (0.0, 1.0, 0.0);
	glVertex2f(-500, -200);
	glVertex2f(-500, -550);
	glVertex2f(1500, -550);
	glVertex2f(1500, -200);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f (0.60, 1.0, 1.0);
	glVertex2f(-500, -200);
	glVertex2f(1500, -200);
    glVertex2f(1500, 550);
	glVertex2f(-500, 550);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f (1.0, 0.85, 0.40);
	glVertex2f(250, -150);
    glVertex2f(650,-150);
	glVertex2f(450, -50);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f (0.9, 0.9, 0.50);
	glVertex2f(300, -250);
	glVertex2f(600, -250);
    glVertex2f(600, -150);
	glVertex2f(300, -150);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f (1.0, 0.4, 0.4);
	glVertex2f(400, -250);
	glVertex2f(500, -250);
    glVertex2f(500, -175);
	glVertex2f(400, -175);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f (.5, 0.25, 0.0);
	glVertex2f(905, -250);
	glVertex2f(845, -250);
    glVertex2f(845, -75);
	glVertex2f(905, -75);
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f (0.0, 1.0, 0.0);
	glVertex2f(750, -40);
	glVertex2f(750, -90);
    glVertex2f(800, -100);
	glVertex2f(825, -95);
	glVertex2f(855, -90);
	glVertex2f(895, -90);
	glVertex2f(917, -100);
	glVertex2f(950, -102);
	glVertex2f(985, -95);
	glVertex2f(975, -20);
	glVertex2f(950, -15);
	glVertex2f(917, 10);
	glVertex2f(855, 25);
	glVertex2f(800, -40);

    glEnd();
    glutSwapBuffers();
}
void init (void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-500, 1500, -550, 550);

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (1100, 650);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Basic Shapes");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
