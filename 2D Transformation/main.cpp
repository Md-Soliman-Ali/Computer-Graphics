#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

static GLfloat spin = 0.0;
static float	tx	=  10.0;
static float	ty	=  0.0;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslatef(tx,ty,0);

    glBegin(GL_TRIANGLES);
    //glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);

	//glColor3f (1.0, 0.85, 0.40);
	glVertex2f(60, -45);
    glVertex2f(120,-60);
	glVertex2f(105, -15);
	glEnd();

	glBegin(GL_TRIANGLES);
	//glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
	//glColor3f (1.0, 0.85, 0.40);
	glVertex2f(110, -95);
    glVertex2f(170,-110);
	glVertex2f(155, -65);
	glEnd();

	glPopMatrix();
	glFlush();
}

void spinDisplay_left(void)
{
    spin = 3;
    glColor3f(0.5,0, 1.0);
    glutPostRedisplay();
    glRotatef(spin, 0.0, 0.0, 1.0);
}

void spinDisplay_right(void)
{
    spin = -3;
    glColor3f(0,1.5, 0);
    glutPostRedisplay();
    glRotatef(spin, 0.0, 0.0, 1.0);
}

void init(void)
{
	glClearColor (1.0, .5, 1.0, 1.0);
	glOrtho(-200.0, 200.0, -200.0, 200.0, -2.0, 2.0);
}

void my_keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
		case 'l':
			spinDisplay_left();
			break;

		case 'r':
			spinDisplay_right();
			break;

		case 's':
			   (NULL);
			 break;

	  default:
			break;
	}
}

void spe_key(int key, int x, int y)
{
	switch (key)
	{
		case GLUT_KEY_LEFT:
		    	glColor3f(0.5,1.5, 1.0);
				tx -=3;
				glutPostRedisplay();
				break;

		case GLUT_KEY_RIGHT:
		    	glColor3f(0,1 , 1);
				tx +=3;
				glutPostRedisplay();
				break;

        case GLUT_KEY_UP:
		    	glColor3f(0,1,0);
				ty +=3;
				glutPostRedisplay();
				break;

        case GLUT_KEY_DOWN:
		    	glColor3f(1.0, 0, 0);
				ty -=3;
				glutPostRedisplay();
				break;
        default:
                break;
	}
}

void my_mouse(int button, int state, int x, int y)
{
   switch (button)
   {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
         {

            glutIdleFunc(spinDisplay_left);
         }

         else
         glutIdleFunc(NULL);
         break;

      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
         {

			glutIdleFunc(spinDisplay_right);
         }

         else
          glutIdleFunc(NULL);

         break;
      default:
         break;
   }
}

int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("2D Transformation");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(my_keyboard);
	glutSpecialFunc(spe_key);
	glutMouseFunc(my_mouse);
	glutMainLoop();
	return 0;
}
