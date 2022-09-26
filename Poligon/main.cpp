#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>


void titik (){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glPointSize(10.0);
    glBegin(GL_QUADS);

    glVertex3f(0.0, 5.0, 0.0);
    glVertex3f(0.0, 2.0, 0.0);
    glVertex3f(4.0, 2.0, 0.0);
    glVertex3f(4.0, 6.0, 0.0);

    glVertex3f(-1.0, 2.0, 0.0);
    glVertex3f(-5.0, 2.0, 0.0);
    glVertex3f(-5.0, 4.0, 0.0);
    glVertex3f(-1.0, 5.0, 0.0);

    glVertex3f(-5.0, 1.0, 0.0);
    glVertex3f(-1.0, 1.0, 0.0);
    glVertex3f(-1.0, -2.0, 0.0);
    glVertex3f(-5.0, -1.0, 0.0);

    glVertex3f(0.0, 1.0, 0.0);
    glVertex3f(4.0, 1.0, 0.0);
    glVertex3f(4.0, -3.0, 0.0);
    glVertex3f(0.0, -2.0, 0.0);

    glEnd();
    glFlush();


}

void initialize(){

    glClearColor(0.0, 0.0, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);

}

int main (int iArgc, char** cppArgv){
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(200, 200);
    glutCreateWindow(" INI TITIK ");
    initialize();
    glutDisplayFunc(titik);
    glutMainLoop();
    return 0;

}
