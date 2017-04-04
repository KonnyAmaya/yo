#include <GL/glu.h>
#include <GL/glut.h>
//cbfjbkjfakjf
void init(void){
    /* selecciona el color de borrado */
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_FLAT);
}
void display(void)
{
    /* borra la pantalla */
    glClear (GL_COLOR_BUFFER_BIT);
    /* seleccionamos la matriz modelo/vista */
    glMatrixMode(GL_MODELVIEW);
    
    /* color */
    glColor3f(1.0, 1.0, 1.0);
   /* transformación modelo/vista */
    gluLookAt(1.0,0.9,0.0, //punto de vista en el eje X,Y,Z //desde arriba 0.0,0.1,0.2  abajo 0.0,-1,0.2
              0.0,0.0,0.0, //Centro del Objeto en el eje X,Y,Z
              0.0,1.0,0.0); //Orientación de la cámara (vector UP el eje X,Y,Z)
    /* Dibujamos una tetera */
    glutWireTeapot(1.0);
    /* Vacia el buffer de dibujo */
    glFlush ();
}
//void reshape(int w, int h)
//{
    /* definemos el marco */
   //glViewport(0, 0, w, h);    /* cambiamos a la matriz de proyección */
    //glMatrixMode(GL_PROJECTION);
    /* definimos una proyección perspectiva con    un fovy de 60 grados y el near (cerca) a 1.0 y el
    far -lejos- a 20.0 */
    //glLoadIdentity();
   // gluPerspective(60.0, GLfloat(w) / GLfloat(h), 1.0, 20.0);
//}
int main(int argc, char** argv)
{
// Inicializa la librería auxiliar GLUT
    glutInit(&argc, argv);
// Inicializa el modo de visualización
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
// Indica el tamaño de la ventana (ancho,alto)
    glutInitWindowSize(500, 500);
// Indica la posición inicial (xmin,ymin)
    glutInitWindowPosition(100, 100);
// Abre la ventana con el título indicado
    glutCreateWindow("Dibujando una tetera 3d");
// Inicializar valores
    init();
// Indica cual es la función de dibujo
    glutDisplayFunc(display);
// Indica cual es la función para el cambio de tamaño de la ventana
    //glutReshapeFunc(reshape);
// Comienza el bucle de dibujo y proceso de eventos.
    glutMainLoop();
}
