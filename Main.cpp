//#include <GL/gl.h>
//#include <GL/GLU.h>
#include <GL/glut.h> //Provides functions that facilitate the use of gl

void display();
void reshape(int, int);
void init();
void draw();




void point(float, float, float, float, float, float);
void triangle();
void polygon();
void turtle();

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);

	glutInitWindowPosition(200, 100);
	glutInitWindowSize(500, 500);

	glutCreateWindow("Title"); //Window title
	glutDisplayFunc(display);
	init();
	glutReshapeFunc(reshape); //Window resized behavior
	glutMainLoop(); //Start the loop

	return 0;
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT); //Clear frame
	//glLoadIdentity(); //Resets metrics - transformations

		//Draw something
	draw();

	glFlush(); //Draw frame
}
void init()
{
	glClearColor(255, 255, 255, 1.0); //Background color
}
void reshape(int WindowWidth, int WindowHeight)
{
	//Viewport - everything will be drawn in this area
	glViewport(0, 0, WindowWidth, WindowHeight); //Position and size of the viewport relative to the bottom left corner of the window

	//Projection
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-15, 15, -15, 15); //2D cartesian plane
	glMatrixMode(GL_MODELVIEW);
}
void draw()
{
	//point(5.5, 5.5, 10.0, 1, 0, 0);
	//triangle();
	polygon();
	//turtle();
}
void point(float x, float y, float size, float r, float g, float b)
{
	glPointSize(size);

	glBegin(GL_POINTS);
	glColor3f(r, g, b);
	glVertex2f(x, y);
	glEnd();
}
void triangle()
{
	glBegin(GL_TRIANGLES);
	glColor3f(0, 1, 0);
	glVertex2f(2, 3);
	glVertex2f(1, 1);
	glVertex2f(3, 1);
	glEnd();
}
void polygon()
{
	glTranslatef(0.5, 0.5, 0);
	//glRotatef(25.0, 0, 0, 1);
	//glScalef(1.1, 1.1, 0);


	glBegin(GL_POLYGON);
		glColor3f(1, 0, 0);
		glVertex2f(0, 3.5);
		glColor3f(0, 0, 1);
		glVertex2f(-2, 2);
		glVertex2f(-1, 0);
		glVertex2f(1, 0);
		glVertex2f(2, 2);
	glEnd();


	//glBegin(GL_POLYGON);
	//glColor3f(1, 1, 0);
	//glVertex2f(1, 4);
	//glColor3f(0, 1, 1);
	//glVertex2f(2, 4);
	//glVertex2f(2.5, 4.9);
	//glVertex2f(2, 5.8);
	//glVertex2f(1, 5.8);
	//glVertex2f(0.5, 4.9);
	//glEnd();

	//glBegin(GL_QUADS);
	//glColor3f(1, 1, 0);
	//	glVertex2f(-2.5, -2);
	//glColor3f(0, 1, 1);
	//	glVertex2f(-2.5, -3);
	//	glVertex2f(-3.5, -3);
	//	glVertex2f(-3.5, -2);
	//glEnd();

}
void turtle()
{
	//Cabeza
	//========================================
	glBegin(GL_POLYGON);
	glColor3ub(83, 7, 7);

	glVertex2f(0, 13);
	glVertex2f(-2, 12);
	glVertex2f(-1, 9);
	glVertex2f(0, 10);
	glVertex2f(1, 9);
	glVertex2f(2, 12);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3ub(0, 0, 0);

	glVertex2f(0, 13);
	glVertex2f(-2, 12);
	glVertex2f(-1, 9);
	glVertex2f(0, 10);
	glVertex2f(1, 9);
	glVertex2f(2, 12);

	glVertex2f(0, 13);
	glEnd();
	//========================================
	// ALETA IZQ 01
	//========================================
	glBegin(GL_POLYGON);
	glColor3ub(70, 10, 10);

	glVertex2f(-3, 10);
	glVertex2f(-7, 10);
	glVertex2f(-4, 7);
	glVertex2f(-2, 8);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3ub(0, 0, 0);

	glVertex2f(-3, 10);
	glVertex2f(-7, 10);
	glVertex2f(-4, 7);
	glVertex2f(-2, 8);

	glVertex2f(-3, 10);
	glEnd();
	//========================================
	// ALETA IZQ 02
	//========================================
	glBegin(GL_POLYGON);
	glColor3ub(57, 3, 3);

	glVertex2f(-7, 10);
	glVertex2f(-8, 7);
	glVertex2f(-4, 7);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3ub(0, 0, 0);

	glVertex2f(-8, 7);
	glVertex2f(-4, 7);

	glEnd();
	//========================================
	// ALETA IZQ 03
	//========================================
	glBegin(GL_POLYGON);
	glColor3ub(31, 1, 1);

	glVertex2f(-7, 10);
	glVertex2f(-9, 8);
	glVertex2f(-10, 5);
	glVertex2f(-8, 7);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3ub(0, 0, 0);

	glVertex2f(-7, 10);
	glVertex2f(-9, 8);
	glVertex2f(-10, 5);
	glVertex2f(-8, 7);
	glVertex2f(-7, 10);

	glEnd();
	//========================================
	// ALETA DER 01
	//========================================
	glBegin(GL_POLYGON);
	glColor3ub(70, 10, 10);

	glVertex2f(2, 8);
	glVertex2f(4, 7);
	glVertex2f(7, 10);
	glVertex2f(3, 10);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3ub(0, 0, 0);

	glVertex2f(2, 8);
	glVertex2f(4, 7);
	glVertex2f(7, 10);
	glVertex2f(3, 10);

	glVertex2f(2, 8);
	glEnd();
	//========================================
	// ALETA DER 02
	//========================================
	glBegin(GL_POLYGON);
	glColor3ub(57, 3, 3);

	glVertex2f(7, 10);
	glVertex2f(4, 7);
	glVertex2f(8, 7);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3ub(0, 0, 0);

	glVertex2f(4, 7);
	glVertex2f(8, 7);

	glEnd();
	//========================================
	// ALETA DER 03
	//========================================
	glBegin(GL_POLYGON);
	glColor3ub(31, 1, 1);

	glVertex2f(7, 10);
	glVertex2f(8, 7);
	glVertex2f(10, 5);
	glVertex2f(9, 8);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3ub(0, 0, 0);

	glVertex2f(7, 10);
	glVertex2f(8, 7);
	glVertex2f(10, 5);
	glVertex2f(9, 8);
	glVertex2f(7, 10);

	glEnd();
	//========================================
	// ALETA iNF IZQ
	//========================================
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);

	glVertex2f(-4, -2);
	glVertex2f(-6, -5);
	glVertex2f(-5, -6);
	glVertex2f(-3, -6);
	glVertex2f(-2, -4);

	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex2f(-4, -2);
	glVertex2f(-6, -5);
	glVertex2f(-5, -6);
	glVertex2f(-3, -6);
	glVertex2f(-2, -4);
	glVertex2f(-4, -2);

	glEnd();
	//========================================
	// ALETA iNF DER
	//========================================
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);

	glVertex2f(2, -4);
	glVertex2f(3, -6);
	glVertex2f(5, -6);
	glVertex2f(6, -5);
	glVertex2f(4, -2);

	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex2f(2, -4);
	glVertex2f(3, -6);
	glVertex2f(5, -6);
	glVertex2f(6, -5);
	glVertex2f(4, -2);
	glVertex2f(2, -4);

	glEnd();
	//========================================
	//CAPARAZON 01
	//========================================
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);

	glVertex2f(0, 10);
	glVertex2f(-2, 8);
	glVertex2f(-2, 6);
	glVertex2f(2, 6);
	glVertex2f(2, 8);

	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex2f(0, 10);
	glVertex2f(-2, 8);
	glVertex2f(-2, 6);
	glVertex2f(2, 6);
	glVertex2f(2, 8);
	glVertex2f(0, 10);

	glEnd();
	//========================================
	//CAPARAZON 02
	//========================================
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);

	glVertex2f(-2, 8);
	glVertex2f(-4, 7);
	glVertex2f(-3, 5);
	glVertex2f(-2, 6);

	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex2f(-4, 7);
	glVertex2f(-3, 5);
	glVertex2f(-2, 6);

	glEnd();
	//========================================
	//CAPARAZON 03
	//========================================
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);

	glVertex2f(2, 8);
	glVertex2f(2, 6);
	glVertex2f(3, 5);
	glVertex2f(4, 7);

	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex2f(2, 6);
	glVertex2f(3, 5);
	glVertex2f(4, 7);

	glEnd();
	//========================================
	//CAPARAZON 04
	//========================================
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);

	glVertex2f(-2, 6);
	glVertex2f(-3, 5);
	glVertex2f(-2, 4);
	glVertex2f(2, 4);
	glVertex2f(3, 5);
	glVertex2f(2, 6);

	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);


	glVertex2f(-3, 5);
	glVertex2f(-2, 4);
	glVertex2f(2, 4);
	glVertex2f(3, 5);

	glEnd();
	//========================================
	//CAPARAZON 05
	//========================================
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);


	glVertex2f(-6, 2);
	glVertex2f(-3, 2);
	glVertex2f(-2, 4);
	glVertex2f(-3, 5);
	glVertex2f(-4, 7);

	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);


	glVertex2f(-4, 7);
	glVertex2f(-6, 2);
	glVertex2f(-3, 2);
	glVertex2f(-2, 4);

	glEnd();
	//========================================
	//CAPARAZON 06
	//========================================
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);

	glVertex2f(3, 5);
	glVertex2f(2, 4);
	glVertex2f(3, 2);
	glVertex2f(6, 2);
	glVertex2f(4, 7);

	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex2f(4, 7);
	glVertex2f(6, 2);
	glVertex2f(3, 2);
	glVertex2f(2, 4);

	glEnd();
	//========================================
	//CAPARAZON 07
	//========================================
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);

	glVertex2f(-2, 4);
	glVertex2f(-3, 2);
	glVertex2f(-2, 0);
	glVertex2f(2, 0);
	glVertex2f(3, 2);
	glVertex2f(2, 4);

	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);


	glVertex2f(-3, 2);
	glVertex2f(-2, 0);
	glVertex2f(2, 0);
	glVertex2f(3, 2);

	glEnd();
	//========================================
	//CAPARAZON 08
	//========================================
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);

	glVertex2f(-6, 2);
	glVertex2f(-4, -2);
	glVertex2f(-2, 0);
	glVertex2f(-3, 2);

	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex2f(-6, 2);
	glVertex2f(-4, -2);
	glVertex2f(-2, 0);

	glEnd();
	//========================================
	//CAPARAZON 09
	//========================================
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);

	glVertex2f(6, 2);
	glVertex2f(3, 2);
	glVertex2f(2, 0);
	glVertex2f(4, -2);

	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex2f(6, 2);
	glVertex2f(4, -2);
	glVertex2f(2, 0);

	glEnd();
	//========================================
	//CAPARAZON 10
	//========================================
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);

	glVertex2f(-2, 0);
	glVertex2f(-1, -3);
	glVertex2f(1, -3);
	glVertex2f(2, 0);

	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex2f(-2, 0);
	glVertex2f(-1, -3);
	glVertex2f(1, -3);
	glVertex2f(2, 0);

	glEnd();
	//========================================
	//CAPARAZON 11
	//========================================
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);

	glVertex2f(-2, 0);
	glVertex2f(-4, -2);
	glVertex2f(-2, -4);
	glVertex2f(-1, -3);

	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex2f(-2, -4);
	glVertex2f(-1, -3);

	glEnd();
	//========================================
	//CAPARAZON 12
	//========================================
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);

	glVertex2f(2, 0);
	glVertex2f(1, -3);
	glVertex2f(2, -4);
	glVertex2f(4, -2);

	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex2f(1, -3);
	glVertex2f(2, -4);

	glEnd();
	//========================================
	//CAPARAZON 12
	//========================================
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);

	glVertex2f(-1, -3);
	glVertex2f(-2, -4);
	glVertex2f(0, -6);
	glVertex2f(2, -4);
	glVertex2f(1, -3);

	glEnd();

	glLineWidth(3);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex2f(-2, -4);
	glVertex2f(0, -6);
	glVertex2f(2, -4);

	glEnd();
	//========================================

}