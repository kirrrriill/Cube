// Lab_2.cpp: определяет точку входа для консольного приложения.
//

#include <windows.h>
#include <cmath>
#include <time.h>
#include <iostream>
#include <glut.h>

#define PI 3.14159265

using namespace std;

void drawCube1()
{
	glBegin(GL_QUADS); // лицевая по z
	glNormal3f(0.0, 0.0, 1.0);
	glVertex3f(0.0, 1.0, 1.0); //0
	glNormal3f(0.0, 0.0, 1.0);
	glVertex3f(1.0, 1.0, 1.0); //1
	glNormal3f(0.0, 0.0, 1.0);
	glVertex3f(1.0, 0.0, 1.0); //3
	glNormal3f(0.0, 0.0, 1.0);
	glVertex3f(0.0, 0.0, 1.0); //2
	glEnd();

	glBegin(GL_QUADS); // нижняя
	glNormal3f(0.0, -1.0, 0.0);
	glVertex3f(0.0, 0.0, 1.0); //2
	glNormal3f(0.0, -1.0, 0.0);
	glVertex3f(1.0, 0.0, 1.0); //3
	glNormal3f(0.0, -1.0, 0.0);
	glVertex3f(1.0, 0.0, 0.0); //5
	glNormal3f(0.0, -1.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0); //4
	glEnd();

	glBegin(GL_QUADS); // задняя по z
	glNormal3f(0.0, 0.0, -1.0);
	glVertex3f(0.0, 0.0, 0.0); //4
	glNormal3f(0.0, 0.0, -1.0);
	glVertex3f(1.0, 0.0, 0.0); //5
	glNormal3f(0.0, 0.0, -1.0);
	glVertex3f(1.0, 1.0, 0.0); //7
	glNormal3f(0.0, 0.0, -1.0);
	glVertex3f(0.0, 1.0, 0.0); //6
	glEnd();

	glBegin(GL_QUADS); // верхняя
	glNormal3f(0.0, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0); //6
	glNormal3f(0.0, 1.0, 0.0);
	glVertex3f(1.0, 1.0, 0.0); //7
	glNormal3f(0.0, 1.0, 0.0);
	glVertex3f(1.0, 1.0, 1.0); //9
	glNormal3f(0.0, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 1.0); //8
	glEnd();

	glBegin(GL_QUADS); //правая
	glNormal3f(1.0, 0.0, 0.0);
	glVertex3f(1.0, 1.0, 1.0); //1
	glNormal3f(1.0, 0.0, 0.0);
	glVertex3f(1.0, 0.0, 1.0); //3
	glNormal3f(1.0, 0.0, 0.0);
	glVertex3f(1.0, 0.0, 0.0); //5
	glNormal3f(1.0, 0.0, 0.0);
	glVertex3f(1.0, 1.0, 0.0); //7
	glEnd();

	glBegin(GL_QUADS); //левая
	glNormal3f(-1.0, 0.0, 0.0);
	glVertex3f(0.0, 1.0, 1.0); //0
	glNormal3f(-1.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 1.0); //2
	glNormal3f(-1.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0); //4
	glNormal3f(-1.0, 0.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0); //6
	glEnd();

	glEnable(GL_NORMALIZE);
}

void drawCube2()
{
	glBegin(GL_QUADS); // лицевая по z
	glNormal3f(-0.5, 0.5, 0.5);
	glVertex3f(0.0, 1.0, 1.0); //0
	glNormal3f(0.5, 0.5, 0.5);
	glVertex3f(1.0, 1.0, 1.0); //1
	glNormal3f(0.5, -0.5, 0.5);
	glVertex3f(1.0, 0.0, 1.0); //3
	glNormal3f(-0.5, -0.5, 0.5);
	glVertex3f(0.0, 0.0, 1.0); //2
	glEnd();

	glBegin(GL_QUADS); // нижняя
	glNormal3f(-0.5, -0.5, 0.5);
	glVertex3f(0.0, 0.0, 1.0); //2
	glNormal3f(0.5, -0.5, 0.5);
	glVertex3f(1.0, 0.0, 1.0); //3
	glNormal3f(0.5, -0.5, -0.5);
	glVertex3f(1.0, 0.0, 0.0); //5
	glNormal3f(-0.5, -0.5, -0.5);
	glVertex3f(0.0, 0.0, 0.0); //4
	glEnd();

	glBegin(GL_QUADS); // задняя по z
	glNormal3f(-0.5, -0.5, -0.5);
	glVertex3f(0.0, 0.0, 0.0); //4
	glNormal3f(0.5, -0.5, -0.5);
	glVertex3f(1.0, 0.0, 0.0); //5
	glNormal3f(0.5, 0.5, -0.5);
	glVertex3f(1.0, 1.0, 0.0); //7
	glNormal3f(-0.5, 0.5, -0.5);
	glVertex3f(0.0, 1.0, 0.0); //6
	glEnd();

	glBegin(GL_QUADS); // верхняя
	glNormal3f(-0.5, 0.5, -0.5);
	glVertex3f(0.0, 1.0, 0.0); //6
	glNormal3f(0.5, 0.5, -0.5);
	glVertex3f(1.0, 1.0, 0.0); //7
	glNormal3f(0.5, 0.5, 0.5);
	glVertex3f(1.0, 1.0, 1.0); //9
	glNormal3f(-0.5, 0.5, 0.5);
	glVertex3f(0.0, 1.0, 1.0); //8
	glEnd();

	glBegin(GL_QUADS); //правая
	glNormal3f(0.5, 0.5, 0.5);
	glVertex3f(1.0, 1.0, 1.0); //1
	glNormal3f(0.5, -0.5, 0.5);
	glVertex3f(1.0, 0.0, 1.0); //3
	glNormal3f(0.5, -0.5, -0.5);
	glVertex3f(1.0, 0.0, 0.0); //5
	glNormal3f(0.5, 0.5, -0.5);
	glVertex3f(1.0, 1.0, 0.0); //7
	glEnd();

	glBegin(GL_QUADS); //левая
	glNormal3f(-0.5, 0.5, 0.5);
	glVertex3f(0.0, 1.0, 1.0); //0
	glNormal3f(-0.5, -0.5, 0.5);
	glVertex3f(0.0, 0.0, 1.0); //2
	glNormal3f(-0.5, -0.5, -0.5);
	glVertex3f(0.0, 0.0, 0.0); //4
	glNormal3f(-0.5, 0.5, -0.5);
	glVertex3f(0.0, 1.0, 0.0); //6
	glEnd();

	glEnable(GL_NORMALIZE);
}

float scale = 1.0;
float a = 7.5 * scale;
float b = 2 * scale;
GLdouble eye_x = -a, eye_y = b, eye_z = a;


void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();

	glTranslatef(0.0f, 0.0f, -2.0f);
	drawCube1();

	glTranslatef(0.0f, 0.0f, 3.0f);
	drawCube2();
	glPopMatrix();

	glPopMatrix();
	glutSwapBuffers();
}

// функции для куба с сеткой

void drawSide1(int n)
{
	float cell_size = 1.0 / n;

	for (float i = 0; i < n; i++)
	{
		for (float j = 0; j < n; j++)
		{
			glBegin(GL_QUADS);
			glNormal3f(-1.0, 0.0, 0.0);
			glVertex3f(0.0, (i + 1.0f) * cell_size, (j + 1.0f) * cell_size); //0
			glNormal3f(-1.0, 0.0, 0.0);
			glVertex3f(0.0, i * cell_size, (j + 1.0f) * cell_size); //2
			glNormal3f(-1.0, 0.0, 0.0);
			glVertex3f(0.0, i * cell_size, j * cell_size); //4
			glNormal3f(-1.0, 0.0, 0.0);
			glVertex3f(0.0, (i + 1.0f) * cell_size, j * cell_size); //6
			glEnd();
		}
	}

	glEnable(GL_NORMALIZE);
}

float module(float a[3])
{
	float mod = 0;
	for (int i = 0; i < 2; i++)
	{
		mod += pow(a[i], 2);
	}
	mod = sqrt(mod);
	return mod;
}

float* new_vector(float va[3], float vb[3], float vc[3], float vd[3], float y, float z)
{
	float new_vect[3];
	float sum[3];

	float a = (1.0 - y) * (1.0 - z);
	float b = (1.0 - y) * z;
	float c = y * z;
	float d = y * (1.0 - z);

	for (int i = 0; i < 3; i++)
	{
		sum[i] = a * va[i] + b * vb[i] + c * vc[i] + d * vd[i];
	}

	for (int i = 0; i < 3; i++)
	{
		new_vect[i] = (a * va[i] + b * vb[i] + c * vc[i] + d * vd[i]) / module(sum);
	}

	return new_vect;
}

void drawSide2(int n)
{
	float cell_size = 1.0 / n;

	float va[3] = { -0.5, 0.5, 0.5 };
	float vb[3] = { -0.5, -0.5, 0.5 };
	float vc[3] = { -0.5, -0.5, -0.5 };
	float vd[3] = { -0.5, 0.5, -0.5 };
	float* new_a;
	float* new_b;
	float* new_c;
	float* new_d;

	for (float i = 0; i < n; i++)
	{
		for (float j = 0; j < n; j++)
		{
			glBegin(GL_QUADS);

			new_a = new_vector(va, vb, vc, vd, (i + 1.0f) * cell_size, (j + 1.0f) * cell_size);
			glNormal3f(new_a[0], new_a[1], new_a[2]);
			glVertex3f(0.0, (i + 1.0f) * cell_size, (j + 1.0f) * cell_size); //0

			new_b = new_vector(va, vb, vc, vd, i * cell_size, (j + 1.0f) * cell_size);
			glNormal3f(new_b[0], new_b[1], new_b[2]);
			glVertex3f(0.0, i * cell_size, (j + 1.0f) * cell_size); //2

			new_c = new_vector(va, vb, vc, vd, i * cell_size, j * cell_size);
			glNormal3f(new_c[0], new_c[1], new_c[2]);
			glVertex3f(0.0, i * cell_size, j * cell_size); //4

			new_d = new_vector(va, vb, vc, vd, (i + 1.0f) * cell_size, j * cell_size);
			glNormal3f(new_d[0], new_d[1], new_d[2]);
			glVertex3f(0.0, (i + 1.0f) * cell_size, j * cell_size); //6

			glEnd();
		}
	}

	glEnable(GL_NORMALIZE);
}

void drawCube11(int n)
{
	glPushMatrix();
	drawSide1(n); //лицевая по x
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.0, 0.0, 0.0);
	glRotatef(180.0f, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, -1.0);
	drawSide1(n); //задняя
	glPopMatrix();

	glPushMatrix();
	glRotatef(-90.0f, 0.0, 0.0, 1.0);
	glRotatef(180.0f, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, -1.0);
	drawSide1(n); //нижняя

	glTranslatef(1.0, 0.0, 0.0);
	glRotatef(180.0f, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, -1.0);
	drawSide1(n);
	glPopMatrix(); //верхняя

	glPushMatrix();
	glRotatef(90.0f, 0.0, 1.0, 0.0);
	glRotatef(180.0f, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, -1.0);
	drawSide1(n); //левая

	glTranslatef(1.0, 0.0, 0.0);
	glRotatef(180.0f, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, -1.0);
	drawSide1(n);
	glPopMatrix(); //правая
}

void drawCube21(int n)
{
	glPushMatrix();
	drawSide2(n); //лицевая по x
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.0, 0.0, 0.0);
	glRotatef(180.0f, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, -1.0);
	drawSide2(n); //задняя
	glPopMatrix();

	glPushMatrix();
	glRotatef(-90.0f, 0.0, 0.0, 1.0);
	glRotatef(180.0f, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, -1.0);
	drawSide2(n); //нижняя

	glTranslatef(1.0, 0.0, 0.0);
	glRotatef(180.0f, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, -1.0);
	drawSide2(n);
	glPopMatrix(); //верхняя

	glPushMatrix();
	glRotatef(90.0f, 0.0, 1.0, 0.0);
	glRotatef(180.0f, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, -1.0);
	drawSide2(n); //левая

	glTranslatef(1.0, 0.0, 0.0);
	glRotatef(180.0f, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, -1.0);
	drawSide2(n);
	glPopMatrix(); //правая
}

void display1()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();

	glScalef(scale, scale, scale);
	glTranslatef(0.0f, 0.0f, -2.0f);
	drawCube11(64);

	glTranslatef(0.0f, 0.0f, 3.0f);
	drawCube21(64);
	glPopMatrix();

	glPopMatrix();
	glutSwapBuffers();
}

// технические функции

void keyboard(unsigned char key, int x, int y)
{
	float matDif[] = { 0.6f, 0.6f, 0.6f };
	float matSpec[] = { 0.6f, 0.6f, 0.6f };
	float matEm[] = { 0.0f, 5.0f, 0.0f };
	float matAmb[] = { 0.2f, 0.2f, 0.2f };
	float matShininess = 0.1f * 128;
	float zeroMaterial[] = { 0.0f, 0.0f, 0.0f };

	float lightPos[] = { eye_x * 5.0, eye_y * 5.0, eye_z * 5.0 };
	GLfloat lightSpec[] = { 1.0f, 1.0f, 1.0f };
	GLfloat lightDif[] = { 1.0f, 1.0f, 1.0f };
	GLfloat lightZero[] = { 0.0f, 0.0f, 0.0f };
	GLfloat lightAmb[] = { 0.0, 0.0, 0.0, 1.0 };


	float ambient[4] = { 5.0, 0.5, 0.5, 1 };

	switch (key)
	{
	case '1': // зеркальный материал с свет
		glClearColor(0.0, 0.0, 0.0, -1.0);
		glMaterialfv(GL_FRONT, GL_SPECULAR, matSpec);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, zeroMaterial);

		glLightfv(GL_LIGHT0, GL_SPECULAR, lightSpec);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, lightZero);
		glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
		glEnable(GL_LIGHT0);
		glEnable(GL_LIGHTING);
		glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_FALSE);

		glutPostRedisplay();
		break;
	case '2': // зеркальный материал и рассеяный свет
		glClearColor(0.0, 0.0, 0.0, -1.0);
		glMaterialfv(GL_FRONT, GL_SPECULAR, matSpec);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, zeroMaterial);

		glLightfv(GL_LIGHT0, GL_SPECULAR, lightZero);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, lightSpec);
		glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
		glEnable(GL_LIGHT0);
		glEnable(GL_LIGHTING);
		glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_FALSE);

		glutPostRedisplay();
		break;
	case '3': // рассеяный материал и зеркальный свет
		glClearColor(0.0, 0.0, 0.0, -1.0);
		glMaterialfv(GL_FRONT, GL_SPECULAR, zeroMaterial);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, matDif);

		glLightfv(GL_LIGHT0, GL_SPECULAR, lightSpec);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, lightZero);
		glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
		glEnable(GL_LIGHT0);
		glEnable(GL_LIGHTING);
		glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_FALSE);

		glutPostRedisplay();
		break;
	case '4': // рассеяные материал и свет
		glClearColor(0.0, 0.0, 0.0, -1.0);
		glMaterialfv(GL_FRONT, GL_SPECULAR, zeroMaterial);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, matDif);

		glLightfv(GL_LIGHT0, GL_SPECULAR, lightZero);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, lightDif);
		glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
		glEnable(GL_LIGHT0);
		glEnable(GL_LIGHTING);
		glEnable(GL_DEPTH_TEST);
		glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_FALSE);

		glutPostRedisplay();
		break;
	case '5': // глобальная освещенность
		glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambient);
		glEnable(GL_LIGHTING);
		glEnable(GL_DEPTH_TEST);
		glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_FALSE);

		glutPostRedisplay();
		break;
	case '6': // наблюдатель в бесконечной точке
		glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_FALSE);

		glutPostRedisplay();
		break;
	case '7': // наблюдатель в конечной точке
		glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_TRUE);

		glutPostRedisplay();
		break;
	case '8': // собственное излучение объекта
		glMaterialfv(GL_FRONT, GL_EMISSION, matEm);
		glEnable(GL_LIGHTING);

		glutPostRedisplay();
		break;
	case '9': // тип интерполяции цвета
		glShadeModel(GL_FLAT);
		glEnable(GL_LIGHTING);

		glutPostRedisplay();
		break;
	case '0':
		glClearColor(0.0, 0.0, 0.0, -1.0);
		glMaterialfv(GL_FRONT, GL_AMBIENT, matAmb);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, matDif);
		glMaterialfv(GL_FRONT, GL_SPECULAR, matSpec);
		glMaterialf(GL_FRONT, GL_SHININESS, matShininess);

		glLightfv(GL_LIGHT0, GL_SPECULAR, lightSpec);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, lightDif);
		glLightfv(GL_LIGHT0, GL_AMBIENT, lightAmb);
		glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
		glEnable(GL_LIGHT0);
		glEnable(GL_LIGHTING);

		glutPostRedisplay();
		break;
	}
}

float angle = 0;
float deltaAngle = 0.0f;
int xOrigin = -1;

void mouseButton(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_UP)
		{
			angle += deltaAngle;
			xOrigin = -1;
		}
		else
		{
			xOrigin = x;
		}
	}
}

void mouseMove(int x, int y)
{
	if (xOrigin >= 0)
	{
		deltaAngle = (x - xOrigin) * 0.001f;

		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		gluLookAt(
			eye_x * cos(angle + deltaAngle), eye_y, eye_z * sin(angle + deltaAngle),
			0.0, 0.0, 0.0,
			0.0, 1.0, 0.0
		);

		/*float lightPos[] = { eye_x*5.0*cos(angle + deltaAngle), eye_y*5.0, eye_z*5.0*sin(angle + deltaAngle) };
		glLightfv(GL_LIGHT0, GL_POSITION, lightPos);*/

		glutPostRedisplay();
	}
}

void init() {
	glClearColor(0.0, 0.0, 0.0, -1.0);
	glEnable(GL_DEPTH_TEST);

	glViewport(0, 0, 16.0, 9.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60.0, 16.0 / 9.0, 1.0, 60.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(
		eye_x * cos(angle + deltaAngle), eye_y, eye_z * sin(angle + deltaAngle),
		0.0, 0.0, 0.0,
		0.0, 1.0, 0.0
	);
}

int main(int argc, char* argv[])
{
	srand(time(0));

	glutInit(&argc, argv); //initialise glut
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(960, 540);

	int	glWin = glutCreateWindow("OpenGL lab");  // create window

	glutDisplayFunc(display1);
	glutKeyboardFunc(keyboard);
	//glutReshapeFunc(reshape);
	glutMouseFunc(mouseButton);
	glutMotionFunc(mouseMove);

	init();

	glutMainLoop();

	return 0;
}

