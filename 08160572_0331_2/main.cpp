#include <GL/glut.h>
float angle=0;
void hand()
{
    glPushMatrix();
        glScalef(0.5,0.1,0.1);//�Ӫ���
        glColor3f(0,0,1);//�Ŧ⪺
        glutSolidCube(1);//���
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);
    glutSolodCube(1);
    glPushMatrix();
        glTranslatef(0.5,0.5,0);//��Ӳ���k�W������
        glRotatef(angle,0,0,1);//�襤�����
        glTranslatef(0.25,0,0);//�����`���줤��
        hand();///�Ӫ����Ťp��
    glPushMatrix();
        glTranslatef(0.25,0,0);
        glRotatef(angle,0,0,1);//�襤�����
        glTranslatef(0.25,0,0);//�����`���줤��
        hand();//�U���u
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
    glutIdleFunc(display);//���e�e��
    glutMainLoop();
}

