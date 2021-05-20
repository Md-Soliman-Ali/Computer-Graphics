#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{

glClear (GL_COLOR_BUFFER_BIT);

glColor3f(0.0f, 0.5f, 0.5f);

	glBegin(GL_QUADS);
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
    glVertex3f(0.01f, 0.05f, -5.0f);
    glVertex3f(1.03f, 0.05f, -5.0f);
    glVertex3f(1.02f, 0.01f, -5.0f);
    glVertex3f(0.03f, 0.01f, -5.0f);

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glVertex3f(0.3f, 0.05f, -5.0f);
    glVertex3f(0.95f, 0.05f, -5.0f);
    glVertex3f(0.95f, 0.08f, -5.0f);
    glVertex3f(0.3f, 0.08f, -5.0f);

    glColor3f(0.0f, 0.5f, 0.5f);
    glVertex3f(0.32f, 0.08f, -5.0f);
    glVertex3f(0.32f, 0.25f, -5.0f);
    glVertex3f(0.48f, 0.25f, -5.0f);
    glVertex3f(0.48f, 0.08f, -5.0f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.37f, 0.08f, -5.0f);
    glVertex3f(0.37f, 0.2f, -5.0f);
    glVertex3f(0.4f, 0.2f, -5.0f);
    glVertex3f(0.4f, 0.08f, -5.0f);

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(0.4f, 0.2f, -5.0f);
    glVertex3f(0.43f, 0.2f, -5.0f);
    glVertex3f(0.43f, 0.08f, -5.0f);
    glVertex3f(0.4f, 0.08f, -5.0f);

    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex3f(0.48f, 0.08f, -5.0f);
    glVertex3f(0.48f, 0.25f, -5.0f);
    glVertex3f(0.93f, 0.25f, -5.0f);
    glVertex3f(0.93f, 0.08f, -5.0f);

    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.52f, 0.18f, -5.0f);
    glVertex3f(0.55f, 0.18f, -5.0f);
    glVertex3f(0.55f, 0.13f, -5.0f);
    glVertex3f(0.52f, 0.13f, -5.0f);

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3f(0.55f, 0.18f, -5.0f);
    glVertex3f(0.58f, 0.18f, -5.0f);
    glVertex3f(0.58f, 0.13f, -5.0f);
    glVertex3f(0.55f, 0.13f, -5.0f);

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3f(0.65f, 0.18f, -5.0f);
    glVertex3f(0.68f, 0.18f, -5.0f);
    glVertex3f(0.68f, 0.13f, -5.0f);
    glVertex3f(0.65f, 0.13f, -5.0f);

    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.68f, 0.18f, -5.0f);
    glVertex3f(0.71f, 0.18f, -5.0f);
    glVertex3f(0.71f, 0.13f, -5.0f);
    glVertex3f(0.68f, 0.13f, -5.0f);

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3f(0.77f, 0.18f, -5.0f);
    glVertex3f(0.77f, 0.13f, -5.0f);
    glVertex3f(0.8f, 0.13f, -5.0f);
    glVertex3f(0.8f, 0.18f, -5.0f);

    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.8f, 0.18f, -5.0f);
    glVertex3f(0.83f, 0.18f, -5.0f);
    glVertex3f(0.83f, 0.13f, -5.0f);
    glVertex3f(0.8f, 0.13f, -5.0f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.3f, 0.25f, -5.0f);
    glVertex3f(0.4f, 0.3f, -5.0f);
    glVertex3f(0.48f, 0.25f, -5.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(0.4f, 0.3f, -5.0f);
    glVertex3f(0.87f, 0.3f, -5.0f);
    glVertex3f(0.95f, 0.25f, -5.0f);
    glVertex3f(0.48f, 0.25f, -5.0f);
    glEnd();

    glBegin(GL_LINE_LOOP);
	glColor3f(0.5f, 0.5f, 0.5f);
    glVertex3f(0.14f, 0.05f, -5.0f);
    glVertex3f(0.15f, 0.25f, -5.0f);
    glVertex3f(0.16f, 0.25f, -5.0f);
    glVertex3f(0.17f, 0.05f, -5.0f);
    glEnd();

    glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.5f, 0.5f);
    glVertex3f(0.15f, 0.25f, -5.0f);
    glVertex3f(0.16f, 0.25f, -5.0f);
    glVertex3f(0.22f, 0.22f, -5.0f);
    glVertex3f(0.29f, 0.22f, -5.0f);

    glVertex3f(0.34f, 0.27f, -5.0f);
    glVertex3f(0.35f, 0.29f, -5.0f);
    glVertex3f(0.34f, 0.32f, -5.0f);
    glVertex3f(0.33f, 0.36f, -5.0f);

    glVertex3f(0.3f, 0.37f, -5.0f);
    glVertex3f(0.24f, 0.38f, -5.0f);
    glVertex3f(0.19f, 0.4f, -5.0f);
    glVertex3f(0.14f, 0.39f, -5.0f);

    glVertex3f(0.1f, 0.4f, -5.0f);
    glVertex3f(0.06f, 0.38f, -5.0f);
    glVertex3f(0.05f, 0.34f, -5.0f);
    glVertex3f(0.05f, 0.31f, -5.0f);

    glVertex3f(0.02f, 0.31f, -5.0f);
    glVertex3f(0.03f, 0.27f, -5.0f);
    glVertex3f(0.04f, 0.23f, -5.0f);
    glVertex3f(0.1f, 0.21f, -5.0f);
    glEnd();

glFlush ();
}

void init (void)
{

glClearColor (0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.05, 0.0, 0.75, -10.0, 10.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (800, 800);
glutInitWindowPosition (100, 100);
glutCreateWindow ("171-15-8572");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
