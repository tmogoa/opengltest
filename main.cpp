#include <GL/glut.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0, 0.0, 0.0);

    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.5, 0.5, 0.0);

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex3f(0.0, 0.5, 0.0);

    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.5, 0.0, 0.0);

    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Coloured Polygon");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}