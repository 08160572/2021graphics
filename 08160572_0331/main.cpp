#include <GL/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glPushMatrix();
        glRotatef(angle,0,0,1);
        glutSolidCube(1);//畫個方塊
    glPopMatrix();
    glutSwapBuffers();
    angle++;
}
int main(int argc, char **argv)
{
    glutInit( &argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("08160572");

    glutDisplayFunc(display);
    glutIdleFunc(display);//重畫畫面
    glutMainLoop();
}
