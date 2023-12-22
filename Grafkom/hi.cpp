#include <glut.h>
#include<GL/glu.h>

//deklarasi fungsi
void display();
void init();
void reshape(int, int);
void keyboard(unsigned char, int, int); 

int main(int argc, char** argv) {
    //inisialisasi
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH); // GLUT_DEPTH : mengalokasikan sumbu z
    glutInitWindowPosition(200, 100); //atur sumbu x dan y
    glutInitWindowSize(500, 500); //atur lebar dan tinggi jendela
    glutCreateWindow("Jendela 1");
    glutDisplayFunc(display); //memanggil fungsi display
    glutReshapeFunc(reshape); //memanggil fungsi reshape
    glutKeyboardFunc(keyboard); // memanggil fungsi keyboard
    init();
    glutMainLoop(); //looping program utama
}void init() {
    glEnable(GL_DEPTH_TEST);
    glClearColor(0.0, 0.0, 0.0, 1.0);
}
void display() {
    //reset
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //+5
    //alas
       //depan
    glBegin(GL_QUADS);
    glColor3ub(184, 178, 178);
    glVertex3f(-15.0, -5.0, 10.0);
    glVertex3f(-15.0, -6.0, 10.0);
    glVertex3f(15.0, -6.0, 10.0);
    glVertex3f(15.0, -5.0, 10.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3ub(204, 196, 196);
    glVertex3f(-15.0, -5.0, -10.0);
    glVertex3f(-15.0, -6.0, -10.0);
    glVertex3f(15.0, -6.0, -10.0);
    glVertex3f(15.0, -5.0, -10.0);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(204, 196, 196);
    glVertex3f(-15.0, -5.0, -10.0);
    glVertex3f(-15.0, -5.0, 10.0);
    glVertex3f(15.0, -5.0, 10.0);
    glVertex3f(15.0, -5.0, -10.0);
    glEnd();
    //bawah
    glBegin(GL_QUADS);
    glColor3ub(204, 196, 196);
    glVertex3f(-15.0, -6.0, -10.0);
    glVertex3f(-15.0, -6.0, 10.0);
    glVertex3f(15.0, -6.0, 10.0);
    glVertex3f(15.0, -6.0, -10.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); 
    glColor3ub(204, 196, 196);
    glVertex3f(15.0, -5.0, 10.0);
    glVertex3f(15.0, -6.0, 10.0);
    glVertex3f(15.0, -6.0, -10.0);
    glVertex3f(15.0, -5.0, -10.0);
    glEnd();

    //tembok
        //depan
    glBegin(GL_QUADS); 
    glColor3ub(117, 117, 117);
    glVertex3f(-15.0, 8.0, -10.0);
    glVertex3f(-15.0, -6.0, -10.0);
    glVertex3f(15.0, -6.0, -10.0);
    glVertex3f(15.0, 8.0, -10.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); 
    glColor3ub(143, 143, 143);
    glVertex3f(-15.0, 8.0, -11.0);
    glVertex3f(-15.0, -6.0, -11.0);
    glVertex3f(15.0, -6.0, -11.0);
    glVertex3f(15.0, 8.0, -11.0);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(143, 143, 143);
    glVertex3f(-15.0, 8.0, -11.0);
    glVertex3f(-15.0, 8.0, -10.0);
    glVertex3f(15.0, 8.0, -10.0);
    glVertex3f(15.0, 8.0, -11.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 8.0, -10.0);
    glVertex3f(15.0, -6.0, -10.0);
    glVertex3f(15.0, -6.0, -11.0);
    glVertex3f(15.0, 8.0, -11.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(143, 143, 143);
    glVertex3f(-15.0, 8.0, -11.0);
    glVertex3f(-15.0, -6.0, -11.0);
    glVertex3f(-15.0, -6.0, -10.0);
    glVertex3f(-15.0, 8.0, -10.0);
    glEnd();

    //tembok kiri
    //depan
    glBegin(GL_QUADS);
    glColor3ub(117, 117, 117);
    glVertex3f(-15.0, 8.0, -11.0);
    glVertex3f(-15.0, -6.0, -11.0);
    glVertex3f(-15.0, -6.0, 10.0);
    glVertex3f(-15.0, 8.0, 10.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3ub(143, 143, 143);
    glVertex3f(-16.0, 8.0, -11.0);
    glVertex3f(-16.0, -6.0, -11.0);
    glVertex3f(-16.0, -6.0, 10.0);
    glVertex3f(-16.0, 8.0, 10.0);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(143, 143, 143);
    glVertex3f(-16.0, 8.0, -11.0);
    glVertex3f(-15.0, 8.0, -11.0);
    glVertex3f(-15.0, 8.0, 10.0);
    glVertex3f(-16.0, 8.0, 10.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); 
    glColor3ub(143, 143, 143);
    glVertex3f(-15.0, 8.0, -11.0);
    glVertex3f(-15.0, -6.0, -11.0);
    glVertex3f(-16.0, -6.0, -11.0);
    glVertex3f(-16.0, 8.0, -11.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(143, 143, 143);
    glVertex3f(-15.0, 8.0, 10.0);
    glVertex3f(-15.0, -6.0, 10.0);
    glVertex3f(-16.0, -6.0, 10.0);
    glVertex3f(-16.0, 8.0, 10.0);
    glEnd();

    //tembok kanan
    //depan
    glBegin(GL_QUADS); 
    glColor3ub(117, 117, 117);
    glVertex3f(15.0, 8.0, -11.0);
    glVertex3f(15.0, -6.0, -11.0);
    glVertex3f(15.0, -6.0, 0.0);
    glVertex3f(15.0, 8.0, 0.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3ub(143, 143, 143);
    glVertex3f(16.0, 8.0, -11.0);
    glVertex3f(16.0, -6.0, -11.0);
    glVertex3f(16.0, -6.0, 0.0);
    glVertex3f(16.0, 8.0, 0.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); 
    glColor3ub(143, 143, 143);
    glVertex3f(16.0, 8.0, -11.0);
    glVertex3f(15.0, 8.0, -11.0);
    glVertex3f(15.0, 8.0, 0.0);
    glVertex3f(16.0, 8.0, 0.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); 
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 8.0, -11.0);
    glVertex3f(15.0, -6.0, -11.0);
    glVertex3f(16.0, -6.0, -11.0);
    glVertex3f(16.0, 8.0, -11.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS); 
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 8.0, 0.0);
    glVertex3f(15.0, -6.0, 0.0);
    glVertex3f(16.0, -6.0, 0.0);
    glVertex3f(16.0, 8.0, 0.0);
    glEnd();
    //kanan (kiri)
    //depan
    glBegin(GL_QUADS); 
    glColor3ub(117, 117, 117);
    glVertex3f(15.0, 8.0, 8.0);
    glVertex3f(15.0, -6.0, 8.0);
    glVertex3f(15.0, -6.0, 10.0);
    glVertex3f(15.0, 8.0, 10.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); 
    glColor3ub(143, 143, 143);
    glVertex3f(16.0, 8.0, 8.0);
    glVertex3f(16.0, -6.0, 8.0);
    glVertex3f(16.0, -6.0, 10.0);
    glVertex3f(16.0, 8.0, 10.0);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(143, 143, 143);
    glVertex3f(16.0, 8.0, 8.0);
    glVertex3f(15.0, 8.0, 8.0);
    glVertex3f(15.0, 8.0, 10.0);
    glVertex3f(16.0, 8.0, 10.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 8.0, 8.0);
    glVertex3f(15.0, -6.0, 8.0);
    glVertex3f(16.0, -6.0, 8.0);
    glVertex3f(16.0, 8.0, 8.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 8.0, 10.0);
    glVertex3f(15.0, -6.0, 10.0);
    glVertex3f(16.0, -6.0, 10.0);
    glVertex3f(16.0, 8.0, 10.0);
    glEnd();

    //kanan (bawah)
    //depan
    glBegin(GL_QUADS); 
    glColor3ub(117, 117, 117);
    glVertex3f(15.0, 1.0, 0.0);
    glVertex3f(15.0, -6.0, 0.0);
    glVertex3f(15.0, -6.0, 8.0);
    glVertex3f(15.0, 1.0, 8.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); 
    glColor3ub(143, 143, 143);
    glVertex3f(16.0, 1.0, 0.0);
    glVertex3f(16.0, -6.0, 0.0);
    glVertex3f(16.0, -6.0, 8.0);
    glVertex3f(16.0, 1.0, 8.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); 
    glColor3ub(135, 135, 135);
    glVertex3f(16.0, 1.0, 0.0);
    glVertex3f(15.0, 1.0, 0.0);
    glVertex3f(15.0, 1.0, 8.0);
    glVertex3f(16.0, 1.0, 8.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 1.0, 8.0);
    glVertex3f(15.0, -6.0, 8.0);
    glVertex3f(16.0, -6.0, 8.0);
    glVertex3f(16.0, 1.0, 8.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS); 
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 1.0, 0.0);
    glVertex3f(15.0, -6.0, 0.0);
    glVertex3f(16.0, -6.0, 0.0);
    glVertex3f(16.0, 1.0, 0.0);
    glEnd();

    //kanan (atas)
    //depan
    glBegin(GL_QUADS);
    glColor3ub(117, 117, 117);
    glVertex3f(15.0, 8.0, 0.0);
    glVertex3f(15.0, 5.0, 0.0);
    glVertex3f(15.0, 5.0, 8.0);
    glVertex3f(15.0, 8.0, 8.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); 
    glColor3ub(143, 143, 143);
    glVertex3f(16.0, 8.0, 0.0);
    glVertex3f(16.0, 5.0, 0.0);
    glVertex3f(16.0, 5.0, 8.0);
    glVertex3f(16.0, 8.0, 8.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); 
    glColor3ub(143, 143, 143);
    glVertex3f(16.0, 8.0, 0.0);
    glVertex3f(15.0, 8.0, 0.0);
    glVertex3f(15.0, 8.0, 8.0);
    glVertex3f(16.0, 8.0, 8.0);
    glEnd();
    //bawah
    glBegin(GL_QUADS);
    glColor3ub(135, 135, 135);
    glVertex3f(16.0, 5.0, 0.0);
    glVertex3f(15.0, 5.0, 0.0);
    glVertex3f(15.0, 5.0, 8.0);
    glVertex3f(16.0, 5.0, 8.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 8.0, 8.0);
    glVertex3f(15.0, 5.0, 8.0);
    glVertex3f(16.0, 5.0, 8.0);
    glVertex3f(16.0, 8.0, 8.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 8.0, -1.0);
    glVertex3f(15.0, 5.0, -1.0);
    glVertex3f(16.0, 5.0, -1.0);
    glVertex3f(16.0, 8.0, -1.0);
    glEnd();

    //tempat tidur
      //kayu1
        //depan
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 8.0);
    glVertex3f(-15.0, -5.0, 8.0);
    glVertex3f(-13.5, -5.0, 8.0);
    glVertex3f(-13.5, 2.0, 8.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 6.5);
    glVertex3f(-15.0, -5.0, 6.5);
    glVertex3f(-13.5, -5.0, 6.5);
    glVertex3f(-13.5, 2.0, 6.5);
    glEnd();
    //atas
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 8.0);
    glVertex3f(-15.0, 2.0, 6.5);
    glVertex3f(-13.5, 2.0, 6.5);
    glVertex3f(-13.5, 2.0, 8.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); 
    glColor3ub(212, 202, 142);
    glVertex3f(-13.5, 2.0, 8.0);
    glVertex3f(-13.5, -5.0, 8.0);
    glVertex3f(-13.5, -5.0, 6.5);
    glVertex3f(-13.5, 2.0, 6.5);
    glEnd();
    //penyambung
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(-13.5, -1.5, 8.0);
    glVertex3f(-13.5, -3.5, 8.0);
    glVertex3f(1.0, -3.5, 8.0);
    glVertex3f(1.0, -1.5, 8.0);
    glEnd();

    //kayu2
        //depan
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 8.0);
    glVertex3f(1.0, -5.0, 8.0);
    glVertex3f(2.5, -5.0, 8.0);
    glVertex3f(2.5, 2.0, 8.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 6.5);
    glVertex3f(1.0, -5.0, 6.5);
    glVertex3f(2.5, -5.0, 6.5);
    glVertex3f(2.5, 2.0, 6.5);
    glEnd();
    //atas
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 8.0);
    glVertex3f(1.0, 2.0, 6.5);
    glVertex3f(2.5, 2.0, 6.5);
    glVertex3f(2.5, 2.0, 8.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); 
    glColor3ub(212, 202, 142);
    glVertex3f(2.5, 2.0, 8.0);
    glVertex3f(2.5, -5.0, 8.0);
    glVertex3f(2.5, -5.0, 6.5);
    glVertex3f(2.5, 2.0, 6.5);
    glEnd();
    //kiri
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 8.0);
    glVertex3f(1.0, -5.0, 8.0);
    glVertex3f(1.0, -5.0, 6.5);
    glVertex3f(1.0, 2.0, 6.5);
    glEnd();
    //penyambung
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(2.5, 1.0, 6.5);
    glVertex3f(2.5, -3.5, 6.5);
    glVertex3f(2.5, -3.5, 2.0);
    glVertex3f(2.5, 1.0, 2.0);
    glEnd();
    //kayu2
        //depan
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 2.0);
    glVertex3f(1.0, -5.0, 2.0);
    glVertex3f(2.5, -5.0, 2.0);
    glVertex3f(2.5, 2.0, 2.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 0.5);
    glVertex3f(1.0, -5.0, 0.5);
    glVertex3f(2.5, -5.0, 0.5);
    glVertex3f(2.5, 2.0, 0.5);
    glEnd();
    //atas
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 2.0);
    glVertex3f(1.0, 2.0, 0.5);
    glVertex3f(2.5, 2.0, 0.5);
    glVertex3f(2.5, 2.0, 2.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(2.5, 2.0, 2.0);
    glVertex3f(2.5, -5.0, 2.0);
    glVertex3f(2.5, -5.0, 0.5);
    glVertex3f(2.5, 2.0, 0.5);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 2.0);
    glVertex3f(1.0, -5.0, 2.0);
    glVertex3f(1.0, -5.0, 0.5);
    glVertex3f(1.0, 2.0, 0.5);
    glEnd();
    //penyambung
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(-13.5, -1.5, 0.5);
    glVertex3f(-13.5, -3.5, 0.5);
    glVertex3f(1.0, -3.5, 0.5);
    glVertex3f(1.0, -1.5, 0.5);
    glEnd();
    //kayu3
        //depan
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 2.0);
    glVertex3f(-15.0, -5.0, 2.0);
    glVertex3f(-13.5, -5.0, 2.0);
    glVertex3f(-13.5, 2.0, 2.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 0.5);
    glVertex3f(-15.0, -5.0, 0.5);
    glVertex3f(-13.5, -5.0, 0.5);
    glVertex3f(-13.5, 2.0, 0.5);
    glEnd();
    //atas
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 2.0);
    glVertex3f(-15.0, 2.0, 0.5);
    glVertex3f(-13.5, 2.0, 0.5);
    glVertex3f(-13.5, 2.0, 2.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(-13.5, 2.0, 2.0);
    glVertex3f(-13.5, -5.0, 2.0);
    glVertex3f(-13.5, -5.0, 0.5);
    glVertex3f(-13.5, 2.0, 0.5);
    glEnd();
    //penyambung
    glBegin(GL_QUADS); 
    glColor3ub(255, 240, 150);
    glVertex3f(-14.5, 1.0, 6.5);
    glVertex3f(-14.5, -3.5, 6.5);
    glVertex3f(-14.5, -3.5, 2.0);
    glVertex3f(-14.5, 1.0, 2.0);
    glEnd();

    //kasur
        //belakang
        //selimut
    glBegin(GL_QUADS);
    glColor3ub(92, 92, 92);
    glVertex3f(-10.0, 0.0, 0.5);
    glVertex3f(-10.0, -1.5, 0.5);
    glVertex3f(1.0, -1.5, 0.5);
    glVertex3f(1.0, 0.0, 0.5);
    glEnd();
    //depan
    glBegin(GL_QUADS);
    glColor3ub(92, 92, 92);
    glVertex3f(-10.0, 0.0, 8.0);
    glVertex3f(-10.0, -1.5, 8.0);
    glVertex3f(1.0, -1.5, 8.0);
    glVertex3f(1.0, 0.0, 8.0);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(92, 92, 92);
    glVertex3f(-10.0, 0.0, 0.5);
    glVertex3f(-10.0, 0.0, 8.0);
    glVertex3f(1.0, 0.0, 8.0);
    glVertex3f(1.0, 0.0, 0.5);
    glEnd();
    //bantal
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-14.5, 0.0, 0.5);
    glVertex3f(-14.5, -1.5, 0.5);
    glVertex3f(-10.0, -1.5, 0.5);
    glVertex3f(-10.0, 0.0, 0.5);
    glEnd();
    //depan
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-14.5, 0.0, 8.0);
    glVertex3f(-14.5, -1.5, 8.0);
    glVertex3f(-10.0, -1.5, 8.0);
    glVertex3f(-10.0, 0.0, 8.0);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-14.5, 0.0, 0.5);
    glVertex3f(-14.5, 0.0, 8.0);
    glVertex3f(-10.0, 0.0, 8.0);
    glVertex3f(-10.0, 0.0, 0.5);
    glEnd();

     //pintu
        //depan
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(-14.5, 6.0, -9.5);
    glVertex3f(-14.5, -6.0, -9.5);
    glVertex3f(-9.0, -6.0, -9.5);
    glVertex3f(-9.0, 6.0, -9.5);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(-9.0, 6.0, -9.5);
    glVertex3f(-9.0, -6.0, -9.5);
    glVertex3f(-9.0, -6.0, -10.0);
    glVertex3f(-9.0, 6.0, -10.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(-14.5, 6.0, -9.5);
    glVertex3f(-14.5, -6.0, -9.5);
    glVertex3f(-14.5, -6.0, -10.0);
    glVertex3f(-14.5, 6.0, -10.0);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(-14.5, 6.0, -9.5);
    glVertex3f(-14.5, 6.0, -10.0);
    glVertex3f(-9.0, 6.0, -10.0);
    glVertex3f(-9.0, 6.0, -9.5);
    glEnd();
    //aksesoris
    glBegin(GL_QUADS);
    glColor3ub(163, 131, 91);
    glVertex3f(-13.5, 5.0, -9.4);
    glVertex3f(-13.5, 2.0, -9.4);
    glVertex3f(-10.0, 2.0, -9.4);
    glVertex3f(-10.0, 5.0, -9.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(163, 131, 91);
    glVertex3f(-13.5, 0.0, -9.4);
    glVertex3f(-13.5, -4.0, -9.4);
    glVertex3f(-10.0, -4.0, -9.4);
    glVertex3f(-10.0, 0.0, -9.4);
    glEnd();

    //pegangan
    glBegin(GL_QUADS);
    glColor3ub(163, 131, 91);
    glVertex3f(-10.0, 1.5, -9.4);
    glVertex3f(-10.0, 0.5, -9.4);
    glVertex3f(-9.5, 0.5, -9.4);
    glVertex3f(-9.5, 1.5, -9.4);
    glEnd();
 
    glFlush();
    glutSwapBuffers();
}
//fungsi untuk setting viewport
void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(30.0, w / h, 1.0, 100.0);

    gluLookAt(0.0, 2.0, 10.0,  // Posisi kamera
        0.0, 0.0, 0.0,   // Posisi yang dilihat kamera
        0.0, 1.0, 0.0);   // Vektor atas

    glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'd':
        glTranslated(-1.0, 0.0, 0.0);//geser kiri
        break;
    case 'a':
        glTranslated(1.0, 0.0, 0.0);//geser kanan
        break;
    case 's':
        glTranslated(0.0, -1.0, 0.0);//geser bawah
        break;
    case 'w':
        glTranslated(0.0, 1.0, 0.0);//geser atas
        break;
    case 'q':
        glTranslated(0.0, 0.0, -1.0);//dalam objek
        break;
    case 'e':
        glTranslated(0.0, 0.0, 1.0);//keluar objek
        break;
    case 'i':
        glRotatef(2.0, 1.0, 0.0, 0.0);//rotate kanan
        break;
    case 'k':
        glRotatef(2.0, -1.0, 0.0, 0.0);//rotate kanan
        break;
    case 'j':
        glRotatef(2.0, 0.0, 1.0, 0.0);//rotate atas
        break;
    case 'l':
        glRotatef(2.0, 0.0, -1.0, 0.0);//rotate atas
        break;
    }
    display(); //memanggil fungsi display
}
