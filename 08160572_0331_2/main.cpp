#include <GL/glut.h>
float angle=0;
void hand()
{
    glPushMatrix();
        glScalef(0.5,0.1,0.1);//細長的
        glColor3f(0,0,1);//藍色的
        glutSolidCube(1);//方塊
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);
    glutSolodCube(1);
    glPushMatrix();
        glTranslatef(0.5,0.5,0);//整個移到右上角掛著
        glRotatef(angle,0,0,1);//對中心轉動
        glTranslatef(0.25,0,0);//把關節移到中心
        hand();///細長的藍小手
    glPushMatrix();
        glTranslatef(0.25,0,0);
        glRotatef(angle,0,0,1);//對中心轉動
        glTranslatef(0.25,0,0);//把關節移到中心
        hand();//下手臂
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

