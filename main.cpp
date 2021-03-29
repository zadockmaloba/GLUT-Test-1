#include <iostream>
#include <GLES3/gl3.h>
#include <GL/glut.h>

void render(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
        glVertex3f(-0.5f, -0.5f, 0.0f);
        glVertex3f(0.5f, 0.0f, 0.0f);
        glVertex3f(0.0f, 0.0f, 0.0f);
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char **argv) 
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowPosition(100,100);
    glutCreateWindow("My GL APP");
    glutDisplayFunc(render);

    glutMainLoop();
    return EXIT_SUCCESS;
}
