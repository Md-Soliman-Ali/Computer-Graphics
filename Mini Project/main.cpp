#include <iostream>
#include<windows.h>
#include<GL/glut.h>
#include <stdio.h>
#include <time.h>
#include<bits/stdc++.h>
#include <stdlib.h>

float sunX = 0;
float sunY = 0;

int meghStatus = 0;
int sunStatus = 0;
int waterStatus = 0;
int carStatus = 0;
int birdsStatus = 0;

float meghX = 0;
float meghY = 0;

float waterX = 0;
float waterY = 0;

float carX = 0;
float carY = 0;

float birdsX = 0;
float birdsY = 0;

//////////////circle drawing function
void DrawCircle(float cx, float cy, float r, int num_segments)
{

 glBegin(GL_TRIANGLE_FAN);
 for (int i = 0; i < num_segments; i++)
 {
  float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get current angle

  float x = r * cosf(theta);//calculate x
  float y = r * sinf(theta);//calculate y

  glVertex2f(x + cx, y + cy);//output vertex
 }
 glEnd();
 glFlush();
}

void drawSun(int x)
{
    glColor3ub (250, 250, 10);
    DrawCircle(550, 350, 35, 1000);
}

/////////////////////////////cloud
void megh(int x)
{
 glColor3ub (200, 220, 220);
 DrawCircle(20, 400, 25, 2000);
 DrawCircle(50, 400, 35, 2000);
 DrawCircle(80, 400, 25, 2000);

 glColor3ub (200,201,200);
 DrawCircle(130, 420, 25, 2000);
 DrawCircle(160, 420, 35, 2000);
 DrawCircle(190, 420, 25, 2000);
 glFlush();
}

//////////////////////////////////////////////////river water
void water(int x)
{
    glColor3ub (169, 242, 242);

    glBegin(GL_LINES);
    glVertex2i(200, 220);
    glVertex2i(220, 220);

    glVertex2i(210, 230);
    glVertex2i(220, 230);

    glVertex2i(300, 220);
    glVertex2i(320, 220);

    glVertex2i(400, 220);
    glVertex2i(420, 220);

    glVertex2i(100, 240);
    glVertex2i(120, 240);

    glVertex2i(150, 180);
    glVertex2i(150, 180);

    glVertex2i(0, 190);
    glVertex2i(10, 190);

    glVertex2i(0, 200);
    glVertex2i(10, 200);

    glVertex2i(30, 185);
    glVertex2i(40, 185);

    glVertex2i(100, 250);
    glVertex2i(125, 250);

    glVertex2i(150,240);
    glVertex2i(165,240);

    glVertex2i(90,200);
    glVertex2i(100,200);

    glVertex2i(300,190);
    glVertex2i(320,190);

    glVertex2i(270,235);
    glVertex2i(275,235);

    glVertex2i(500,200);
    glVertex2i(510,200);

    glVertex2i(600,220);
    glVertex2i(615,220);

    glVertex2i(550,200);
    glVertex2i(555,200);

    glVertex2i(520,225);
    glVertex2i(540,225);

    glVertex2i(370,215);
    glVertex2i(380,215);

    glEnd();
    /////////////////////////////////

    ////////////////////////////////////////////////////boat

    ////////////////////////////////noukar body

    glColor3ub (150, 129, 117);
    glBegin(GL_QUADS);

    glVertex2i(20, 220);
    glVertex2i(60, 220);
    glVertex2i(70, 230);
    glVertex2i(10, 230);
    glEnd();

    ///////////////////////////////noukar soi
    glColor3ub (206, 175, 109);
    glBegin(GL_POLYGON);
    glVertex2i(27, 230);
    glVertex2i(57, 230);
    glVertex2i(57, 240);
    glVertex2i(27, 240);
    glEnd();
    //glFlush();

    ////////////////////////////////pal er chera kapor
    glColor3ub (209, 102, 27);
    glBegin(GL_TRIANGLES);
    glVertex2i(57, 230);
    glVertex2i(90, 280);
    glVertex2i(50, 290);
    glEnd();

    ///////////////////////////noukar pal er khuda :D
    glColor3f(1.0, 0.0, 1.0);
    glBegin(GL_LINES);
    glVertex2i(57, 230);
    glVertex2i(73, 290);
    glEnd();

    /////////////////////////////////gach er guri
    glColor3ub (206, 175, 109);
    glBegin(GL_POLYGON);
    glVertex2i(300, 200);
    glVertex2i(330, 200);
    glVertex2i(330, 210);
    glVertex2i(300, 210);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(310, 210);
    glVertex2i(315, 210);
    glVertex2i(310, 217);
    glVertex2i(305, 217);
    glEnd();
    glFlush();
}

///////////////////////////////////////////// vera
void vera()
{
 ///////////////////////////////1st vera
 glColor3ub (208, 216, 219);////////body
 DrawCircle(200, 150, 10, 1000);
 glEnd();

 glColor3ub (20, 50, 10);//////head
 DrawCircle(212, 150, 5, 1000);
 glEnd();

 glColor3ub (0, 0, 10);//////////mouth
 DrawCircle(212, 145, 2, 1000);
 glEnd();

 glColor3ub (0, 0, 0);
 DrawCircle(215, 155, 2, 1000);//////////right ear
 glEnd();

 glColor3ub (0, 0, 0);////////////left ear
 DrawCircle(209, 155, 2, 1000);
 glEnd();

 glColor3ub (0, 0, 10);////////legs from L.H.S

 glBegin(GL_LINES);
 glVertex2i(193, 130);
 glVertex2i(193, 142);

 glVertex2i(196, 130);
 glVertex2i(196, 140);

 glVertex2i(203, 130);
 glVertex2i(203, 140);

 glVertex2i(206, 130);
 glVertex2i(206, 142);
 glEnd();
 glFlush();

 glColor3ub (255, 255, 255);////////eyes
 glBegin(GL_POINTS);
 glVertex2i(210, 150);
 glVertex2i(214, 150);
 glEnd();
 glFlush();

 ///////////////////////////////////////////////////2nd vera

 glColor3ub (208, 216, 219);////////body
 DrawCircle(240, 150, 10, 1000);
 glEnd();

 glColor3ub (20, 50, 10);//////head
 DrawCircle(230, 150, 5, 1000);
 glEnd();

 glColor3ub (0, 0, 10);//////////mouth
 DrawCircle(230, 145, 2, 1000);
 glEnd();

 glColor3ub (0, 0, 0);
 DrawCircle(233, 155, 2, 1000);//////////right ear
 glEnd();

 glColor3ub (0, 0, 0);////////////left ear
 DrawCircle(227, 155, 2, 1000);
 glEnd();

 glColor3ub (0, 0, 10);////////legs from L.H.S
 glBegin(GL_LINES);

 glVertex2i(235, 130);
 glVertex2i(235, 142);

 glVertex2i(238, 130);
 glVertex2i(238, 140);

 glVertex2i(245, 130);
 glVertex2i(245, 140);

 glVertex2i(248, 130);
 glVertex2i(248, 143);
 glEnd();
 glFlush();

 glColor3ub (255, 255, 255);////////eyes
 glBegin(GL_POINTS);
 glVertex2i(228, 150);
 glVertex2i(232, 150);
 glEnd();
 glFlush();
}


/////////////////////////////////////////////////////////home
void house()
{
    //////////////////////////////////////////////////////////////////////////////left home
    glColor3ub ( 184, 134,11 );

    glBegin(GL_POLYGON);
    glVertex2f(59.301, 158.601);
    glVertex2f(54.468, 215.306);
    glVertex2f(72.641, 235.605);
    glVertex2f(91.973, 215.306);
    glVertex2f(90.233, 150.061441);
    glEnd();

    //Chal left shadow
    glColor3ub (105,105,105);
    glBegin(GL_POLYGON);
    glVertex2f(48.365, 208.643);
    glVertex2f(72.641, 235.605);
    glVertex2f(74.935, 232.195);
    glVertex2f(52.774, 208.643);
    glEnd();

    //right body
    glColor3ub ( 128, 128,0 );
    glBegin(GL_POLYGON);
    glVertex2f(90.233, 150.061441);
    glVertex2f(91.973, 215.306);
    glVertex2f(173, 212.5);
    glVertex2f(169, 157.735);
    glEnd();

    //Chal
    glColor3ub ( 169, 169,169 );
    glBegin(GL_POLYGON);
    glVertex2f(91.973, 215.306);
    glVertex2f(72.641, 235.605);
    glVertex2f(159.509, 235.605);
    glVertex2f(177.470, 212.005);
    glEnd();

    //Chal right shadow
    glColor3ub (105,105,105);
    glBegin(GL_POLYGON);
    glVertex2f(74.935, 232.195);
    glVertex2f(72.641, 235.605);
    glVertex2f(159.509, 235.605);
    glVertex2f(162.135, 232.195);
    glEnd();

    //left under
    glColor3ub (139,0,139);
    glBegin(GL_POLYGON);
    glVertex2f(56.301, 155.701);
    glVertex2f(56.301, 159.701);
    glVertex2f(90.233, 150.061441);
    glVertex2f(90.233, 146.061441);
    glEnd();

    //right under
    glColor3ub(139,0,139);
    glBegin(GL_POLYGON);
    glVertex2f(90.233, 146.061441);
    glVertex2f(90.233, 150.061441);
    glVertex2f(172, 161.735);
    glVertex2f(172, 157.735);
    glEnd();

    //window
    glColor3ub (47,79,79);
    glBegin(GL_POLYGON);
    glVertex2f(65.450, 187.15);
    glVertex2f(63.981, 206.255);
    glVertex2f(80.167,206.438);
    glVertex2f(81.182, 186.398);
    glEnd();

    //window part left
    glColor3ub (176,224,230);
    glBegin(GL_POLYGON);
    glVertex2f(65.450, 187.15);
    glVertex2f(63.981, 206.255);
    glVertex2f(70,200);
    glVertex2f(70.661, 194.414);
    glEnd();

    //window part right
    glColor3ub (176,224,230);
    glBegin(GL_POLYGON);
    glVertex2f(74.168, 193.412);
    glVertex2f(73.834,199.925);
    glVertex2f(80.167,206.438);
    glVertex2f(81.182, 186.398);
    glEnd();

     //Door
    glColor3ub (47,79,79);
    glBegin(GL_POLYGON);
    glVertex2f(121.982,154.535);
    glVertex2f (121.598,195.08);
    glVertex2f(142.981,194.08);
    glVertex2f(142.836, 157);
    glEnd();

    //Door left
    glColor3ub (128,128,128);
    glBegin(GL_POLYGON);
    glVertex2f(121.982,154.535);
    glVertex2f (121.598,195.08);
    glVertex2f(129.952,184.393);
    glVertex2f(129.952, 163.685);
    glEnd();

    //Door right
    glColor3ub (128,128,128);
    glBegin(GL_POLYGON);
    glVertex2f(135.462,163.852);
    glVertex2f (135.462,184.059);
    glVertex2f(142.981,194.08);
    glVertex2f(142.836, 157);
    glEnd();
}

////////////////////////////////////////////////////////land
void land()
{
    glColor3ub (189,183,107);
    glBegin(GL_QUADS);
    glVertex2i(0, 60);
    glVertex2i(640, 60);
    glVertex2i(640, 180);
    glVertex2i(0, 180);
    glEnd();
}

void tree()
{
    //////////////////////////////////////pata
    glColor3ub (0,128,0);
    DrawCircle(50, 280, 50, 2000);//1
    DrawCircle(50, 320, 35, 3000);//1
    glEnd();
    glFlush();

    ////////////////////////////////majher daal
    glColor3ub (160,82,45);
    glBegin(GL_QUADS);
    glVertex2i(40, 155);
    glVertex2i(60, 155);
    glVertex2i(60, 245);
    glVertex2i(40, 245);
    glEnd();

    //////////////////////////////////left daal
    glColor3ub (160,82,45);
    glBegin(GL_QUADS);
    glVertex2i(40, 245);
    glVertex2i(50, 245);
    glVertex2i(40, 270);
    glVertex2i(30, 270);
    glEnd();

    /////////////////////////////////right daal
    glColor3ub (160,82,45);
    glBegin(GL_QUADS);
    glVertex2i(50, 245);
    glVertex2i(60, 245);
    glVertex2i(70, 270);
    glVertex2i(60, 270);
    glEnd();
    glFlush();
}
void road()
{
     ///////////////////////////////////////////road
    glColor3ub (57, 51, 52);
    glBegin(GL_QUADS);
    glVertex2i(0, 0);
    glVertex2i(640, 0);
    glVertex2i(640, 50);
    glVertex2i(0, 50);
    glEnd();
    glFlush();

    //////////////////////////////////////roads i-land
    glColor3ub (200, 200,200);
    glBegin(GL_QUADS);
    glVertex2i(0, 50);
    glVertex2i(640, 50);
    glVertex2i(640, 60);
    glVertex2i(0, 60);
    glEnd();

    /////////////////////////////////road er majher daag
    glColor3ub (0,255,255);
    //glLineWidth(20.0f);
    glBegin(GL_LINES);
    glVertex2i(0, 25);
    glVertex2i(40, 25);
    glVertex2i(50, 25);
    glVertex2i(90, 25);
    glVertex2i(100, 25);
    glVertex2i(140, 25);
    glVertex2i(150, 25);
    glVertex2i(190, 25);
    glVertex2i(200, 25);
    glVertex2i(240, 25);
    glVertex2i(250, 25);
    glVertex2i(290, 25);
    glVertex2i(300, 25);
    glVertex2i(340, 25);
    glVertex2i(350, 25);
    glVertex2i(390, 25);
    glVertex2i(400, 25);
    glVertex2i(440, 25);
    glVertex2i(450, 25);
    glVertex2i(490, 25);
    glVertex2i(500, 25);
    glVertex2i(540, 25);
    glVertex2i(550, 25);
    glVertex2i(590, 25);
    glVertex2i(600, 25);
    glVertex2i(640, 25);
    glEnd();
    glFlush();
}

/////////////////////////////////////////////////////////river
void river()
{
    glColor3ub (142, 227, 227);
    glBegin(GL_QUADS);
    glVertex2i(0, 180);
    glVertex2i(640, 180);
    glVertex2i(640, 255);
    glVertex2i(0, 255);
    glEnd();
    //glFlush();
}

//////////////////////////////////// ship yard
void shipyard()
{
    /////////////////bot body
    glColor3ub (150, 129, 117);
    glBegin(GL_QUADS);
    glVertex2i(350, 195);
    glVertex2i(360, 183);
    glVertex2i(410, 183);
    glVertex2i(420, 195);
    glEnd();

    /////////////////boat roof
    glColor3ub (206, 175, 109);
    glBegin(GL_QUADS);
    glVertex2i(370, 195);
    glVertex2i(400, 195);
    glVertex2i(400, 210);
    glVertex2i(370, 210);
    glEnd();

    ////////////////////khuti and dori
    glColor3ub (142, 27, 227);
    glBegin(GL_LINES);
    glVertex2i(340, 170);
    glVertex2i(340, 250);

    glVertex2i(340, 200);
    glVertex2i(350, 195);
    glEnd();
}

//////////////////////sky
void sky()
{
    glColor3ub (0,191,255);
    glBegin(GL_QUADS);
    glVertex2i(0, 255);
    glVertex2i(640, 255);
    glVertex2i(640, 480);
    glVertex2i(0, 480);
    glEnd();
}

///////////////////////////////oposite river side
void mountain()
{
    glColor3ub (205,133,63);
    glBegin(GL_QUADS);
    glVertex2i(0, 255);
    glVertex2i(640, 255);
    glVertex2i(640, 258);
    glVertex2i(0, 258);
    glEnd();
}

//////////////////////rivers oposite side village
void oposite_village()
{
    //////////////////////tree 1st(from left)
    glColor3ub (128,0,0);
    glBegin(GL_LINES);
    glVertex2i(200, 255);
    glVertex2i(200, 270);
    glEnd();

    glColor3ub (0,128,0);
    DrawCircle(200, 270, 5, 5000);//1
    DrawCircle(200, 274, 3, 5000);//1
    glEnd();
    glFlush();

    //////////////////////tree 2nd(from left)
    glColor3ub (128,0,0);
    glBegin(GL_LINES);
    glVertex2i(250, 255);
    glVertex2i(250, 275);
    glEnd();

    glColor3ub (0,128,0);
    DrawCircle(250, 275, 5, 5000);
    DrawCircle(250, 279, 3, 6000);
    glEnd();
    glFlush();
}

////////////////////////////////hills
void hills()
{
    glColor3ub(154,205,50);
    glBegin(GL_TRIANGLES);///////// gradually from left
    glVertex2i(180, 255);
    glVertex2i(220, 290);
    glVertex2i(260, 255);
    glEnd();

    //////////////line shape
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(180, 255);
    glVertex2i(220, 290);

    glVertex2i(220, 290);
    glVertex2i(260, 255);
    glEnd();

    glColor3ub (128,128,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(255, 255);
    glVertex2i(285, 280);
    glVertex2i(315, 255);
    glEnd();

    glColor3ub(154,205,50);
    glBegin(GL_TRIANGLES);
    glVertex2i(310, 255);
    glVertex2i(380, 320);
    glVertex2i(450, 255);
    glEnd();

    //////////////line shape
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(310, 255);
    glVertex2i(380, 320);

    glVertex2i(380, 320);
    glVertex2i(450, 255);
    glEnd();

    glColor3ub(128,128,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(430, 255);
    glVertex2i(510, 300);
    glVertex2i(570, 255);
    glEnd();

    //////////////line shape
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(430, 255);
    glVertex2i(510, 300);

    glVertex2i(510, 300);
    glVertex2i(570, 255);
    glEnd();

    glColor3ub(154,205,50);
    glBegin(GL_TRIANGLES);
    glVertex2i(550, 255);
    glVertex2i(600, 275);
    glVertex2i(650, 255);

    glEnd();
    glFlush();
}

///////////////////////////// birds
void birds(int x)
{
 //////////////////////1st bird
 glColor3f (1.0, 0.0, 0.0);
 DrawCircle(60, 300, 3, 1000);
 DrawCircle(63, 300, 2, 1000);

 glBegin(GL_LINES);
 glLineWidth(5);
 glVertex2i(60, 300);
 glVertex2i(65, 307);

 glVertex2i(60, 300);
 glVertex2i(55, 307);
 glEnd();

 ///////////////////////2nd bird
 DrawCircle(70, 310, 3, 1000);
 DrawCircle(73, 310, 2, 1000);
 glBegin(GL_LINES);
 glVertex2i(70, 310);
 glVertex2i(75, 317);

 glVertex2i(70, 310);
 glVertex2i(65, 317);
 glEnd();

 //////////////////////////3rd bird
 DrawCircle(75, 290, 3, 1000);
 DrawCircle(78, 290, 2, 1000);
 glBegin(GL_LINES);
 glVertex2i(75, 290);
 glVertex2i(80, 297);

 glVertex2i(75, 290);
 glVertex2i(70, 297);
 glEnd();

 //////////////////////////////4th bird
 DrawCircle(90, 300, 3, 1000);
 DrawCircle(93, 300, 2, 1000);
 glBegin(GL_LINES);
 glVertex2i(90, 300);
 glVertex2i(95, 307);

 glVertex2i(90, 300);
 glVertex2i(85, 307);
 glEnd();

 /////////////////////////////5th bird
 DrawCircle(75, 320, 3, 1000);
 DrawCircle(78, 320, 2, 1000);
 glBegin(GL_LINES);
 glVertex2i(75, 320);
 glVertex2i(80, 327);

 glVertex2i(75, 320);
 glVertex2i(70, 327);
 glEnd();
}

//////////////////////////the car (audy)
void car(int x)
{
    /////////////////////left body white
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(15,20);
    glVertex2f(15,103);
    glVertex2f(190,103);
    glVertex2f(195,20);
    glEnd();

    /////////////////////left body upper white middle black
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(90,103.7);
    glVertex2f(93,110);
    glVertex2f(127,110);
    glVertex2f(130,103.7);
    glEnd();

    /////////////////////left body upper white left black
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(45,103.7);
    glVertex2f(45,106);
    glVertex2f(75,106);
    glVertex2f(75,103.7);
    glEnd();

    /////////////////////left body upper white right black
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(145,103.7);
    glVertex2f(145,106);
    glVertex2f(175,106);
    glVertex2f(175,103.7);
    glEnd();

    /////////left body glass upper
    ////black
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(20,62);
    glVertex2f(20,98);
    glVertex2f(190.3,98);
    glVertex2f(192.5,62);
    glEnd();

    ////sky blue glass
    glColor3ub (64,224,208);
    glBegin(GL_POLYGON);
    glVertex2f(23,65);
    glVertex2f(23,95);
    glVertex2f(52,95);
    glVertex2f(52,65);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(53,65);
    glVertex2f(53,95);
    glVertex2f(76,95);
    glVertex2f(76,65);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(77,65);
    glVertex2f(77,95);
    glVertex2f(100,95);
    glVertex2f(100,65);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(101,65);
    glVertex2f(101,95);
    glVertex2f(124,95);
    glVertex2f(124,65);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(125,65);
    glVertex2f(125,95);
    glVertex2f(148,95);
    glVertex2f(148,65);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(149,65);
    glVertex2f(149,95);
    glVertex2f(172,95);
    glVertex2f(172,65);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(173,65);
    glVertex2f(173,95);
    glVertex2f(195.6,95);
    glVertex2f(196.7,65);
    glEnd();

     /////////left body green below
    glColor3ub (0,255,0);
    glBegin(GL_POLYGON);
    glVertex2f(20,20);
    glVertex2f(20,62);
    glVertex2f(192.5,62);
    glVertex2f(195,20);
    glEnd();

    /////////////////////right body white
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex2f(190,104);
    glVertex2f(220,100);
    glVertex2f(222.9756,97.4321);
    glVertex2f(229.7981,87.1984);
    glVertex2f(232.3565,78.9546);
    glVertex2f(235.1992,70.7107);
    glVertex2f(237.4734,63.60395);
    glVertex2f(238.3262,56.4972);
    glVertex2f(238.3262,48.8219);
    glVertex2f(238.6105,36.0297);
    glVertex2f(238.7242,29.0367);
    glVertex2f(237.4734,23.0954);
    glVertex2f(232.7829,20.9065);
    glVertex2f(195,20);
    glEnd();

    //black glass
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(190,98);
    glVertex2f(214,98);
    glVertex2f(217.9756,97.4321);
    glVertex2f(224.7981,87.1984);
    glVertex2f(227.3565,78.9546);
    glVertex2f(230.1992,70.7107);
    glVertex2f(232.4734,62);
    glVertex2f(192.5,62);
    glEnd();

    //sky glass
    glColor3ub (64,224,208);
    glBegin(GL_POLYGON);
    glVertex2f(193,95);
    glVertex2f(209,94);
    glVertex2f(215.9756,95.4321);
    glVertex2f(222.7981,87.1984);
    glVertex2f(225.3565,78.9546);
    glVertex2f(228.1992,70.7107);
    glVertex2f(230.4734,65);
    glVertex2f(194.5,65);
    glEnd();

    //sky glass below green
    glColor3ub (0,255,0);
    glBegin(GL_POLYGON);
    glVertex2f(196,20);
    glVertex2f(193.5,62);
    glVertex2f(233.3262,62);
    glVertex2f(234.3262,45.8219);
    glVertex2f(234.6105,36.0297);
    glVertex2f(235.7242,29.0367);
    glVertex2f(233.4734,23.0954);
    glVertex2f(229.7829,20.7065);
    glEnd();

    //inside holding blue
    glColor3ub (106,90,205);
    glBegin(GL_POLYGON);
    glVertex2f(199,48);
    glVertex2f(199,52);
    glVertex2f(205,52);
    glVertex2f(205,48);
    glEnd();

    /////////left body green below line
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(20,40);
    glVertex2f(20,41.5);
    glVertex2f(192.9,41.5);
    glVertex2f(193.9,40);
    glEnd();

    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(91,20);
    glVertex2f(91,40);
    glVertex2f(92,40);
    glVertex2f(92,20);
    glEnd();

    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(114.6,20);
    glVertex2f(114.6,40);
    glVertex2f(115.6,40);
    glVertex2f(115.6,20);
    glEnd();

    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(138,20);
    glVertex2f(138,40);
    glVertex2f(139,40);
    glVertex2f(139,20);
    glEnd();

    /////////left body below  light
    glColor3ub (255,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(101,30);
    glVertex2f(101,33);
    glVertex2f(105,33);
    glVertex2f(105,30);
    glEnd();

    glColor3ub (255,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(125,30);
    glVertex2f(125,33);
    glVertex2f(129,33);
    glVertex2f(129,30);
    glEnd();

    glColor3ub (255,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(180,30);
    glVertex2f(180,33);
    glVertex2f(184,33);
    glVertex2f(184,30);
    glEnd();

    glColor3ub (0,0,205);
    glBegin(GL_POLYGON);
    glVertex2f(23,25);
    glVertex2f(23,30);
    glVertex2f(29.5,30);
    glVertex2f(29.5,25);
    glEnd();

    //last back light
    glColor3ub (139,0,139);
    glBegin(GL_POLYGON);
    glVertex2f(15,32);
    glVertex2f(15,36);
    glVertex2f(20,36);
    glVertex2f(20,32);
    glEnd();

    glColor3ub (255,140,0);
    glBegin(GL_POLYGON);
    glVertex2f(15,36);
    glVertex2f(15,40);
    glVertex2f(20,40);
    glVertex2f(20,36);
    glEnd();

    glColor3ub (139,0,139);
    glBegin(GL_POLYGON);
    glVertex2f(15,40);
    glVertex2f(15,44);
    glVertex2f(20,44);
    glVertex2f(20,40);
    glEnd();

    glColor3ub (255,165,0);
    glBegin(GL_POLYGON);
    glVertex2f(15,44);
    glVertex2f(15,48);
    glVertex2f(20,48);
    glVertex2f(20,44);
    glEnd();

    /////////upper side back chaka
    glColor3ub (255,228,181);
    glBegin(GL_POLYGON);
    glVertex2f(36,20);
    glVertex2f(38,35);
    glVertex2f(83,35);
    glVertex2f(85,20);
    glEnd();

    /////////upper side front chaka
    glBegin(GL_POLYGON);
    glVertex2f(145.5,20);
    glVertex2f(147.5,35);
    glVertex2f(172.5,35);
    glVertex2f(174.5,20);
    glEnd();

    glColor3ub (0,0,0);    ////////////////chakka
    DrawCircle(50, 20, 10, 6000);//1
    DrawCircle(71, 20, 10, 6000);//1
    DrawCircle(160, 20, 10, 6000);//1

    glColor3ub (255,255,255);
    DrawCircle(50, 20, 5, 6000);//1
    DrawCircle(71, 20, 5, 6000);//1
    DrawCircle(160, 20, 5, 6000);//1

    glColor3ub (0,0,0);
    DrawCircle(50, 20, 2, 6000);//1
    DrawCircle(71, 20, 2, 6000);//1
    DrawCircle(160, 20,2, 6000);//1
    glEnd();
}

//////////move car
void movecar()
{
    if (carStatus ==1)
    {
        carX += 3; ///////speed
    }
    if (carX>1000)
    {
        carX = -3;
    }
    glPushMatrix();
    glTranslatef(carX, carY, 0);
    car(1);
    glPopMatrix();
}

//////////////////////////////////////////////////move the cloud
void movemegh()
{
 if (meghStatus == 1)
        {
            meghX +=.5;
        }
 if (meghX>2000)
        {
            meghX = -200;
        }
 glPushMatrix();
 glTranslatef(meghX, meghY, 0);
 megh(1);
 glPopMatrix();
 glFlush();
}

////////////////////////////////////////////////////move  the  water
void movewater()
{
    if (waterStatus ==1)
    {
        waterX += 1;
    }
    if (waterX>2000)
    {
        waterX = -200;
    }
    glPushMatrix();
    glTranslatef(waterX, waterY, 0);
    water(1);
    glPopMatrix();
    glFlush();
}

///////////////////////////////////////////////////move the sun
void moveSun()
{
 if (sunStatus == 1)
 {
  if (sunY >= 300)
   sunX = 300;
  else
   sunX -= 1.5;
   sunY += .5;
 }
 glPushMatrix();
 glTranslatef(sunX, sunY, 0);
 drawSun(1);
 glPopMatrix();
 glFlush();
}

//////////////////////////////////////////////////////////////move bird
void movebirds()
{
 if (birdsStatus == 1)
        {
            birdsX += 2;
        }
 if (birdsX>2000)
        {
            birdsX = -200;
        }
 glPushMatrix();
 glTranslatef(birdsX, birdsY, 0);
 birds(1);
 glPopMatrix();
}

void myDisplay(void)
{
    sky();
    hills();
    mountain();
    oposite_village();
    moveSun();
    land();
    vera();
    river();
    movewater();
    shipyard();
    movebirds();
    tree();
    road();
    movemegh();
    house();
    movecar();
    glFlush();
    //Sleep(500);
    glutPostRedisplay();
    glutSwapBuffers();

}

////////////////////////////////////
void keyboard(unsigned char key, int x, int y)

{
 if (key == 'S' || key =='s')  //sun start
 {
  sunStatus = 1;
 }

 else if (key == 'N' || key == 'n')  //sun  stOP
 {
  sunStatus = 0;
 }

 ////////////////////////////////////////////////////

 else if (key == 'C' || key == 'c')  //megh start

 {
  meghStatus = 1;
 }

 else if (key == 'e' || key == 'E')  //megh STOP

 {
  meghStatus = 0;
 }

 ///////////////////////////////////////////////////////

  else if (key == 'R' || key == 'r')  ////water strt
  ////water strt
 {
  waterStatus = 1;
 }
 else if (key == 'T' || key == 't')  //water stop

 {
  waterStatus = 0;
 }

 //////////////////////////////////////////////////////////

 else if (key == 'X' || key == 'x')  ////car strt

 {
  carStatus = 1;

 }
 else if (key == 'Y' || key == 'y')  //car stop

 {
  carStatus = 0;

 }

  ///////////////////////////////////////////////////////

 else if (key == 'B' || key == 'b')  ////bird strt

 {
  birdsStatus = 1;
 }
 else if (key == 'G' || key == 'g')  //bird stop

 {
  birdsStatus = 0;
 }

}

void mouse(int button, int state, int x, int y)
{
   if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
   {
        glDisable(GL_LIGHT0);
   }

   else if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
   {
      glEnable(GL_LIGHT0);
   }

}

////////////////////////////////////////////////////
void myInit (void){

glClearColor(1.0, 1.0, 1.0, 1.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(3.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);

glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0);
glEnable(GL_COLOR_MATERIAL);
}

int main(int argc, char**argv)
{
    printf("<<Press S or s for Sun move>>\n");
    printf("<<Press N or n for Sun move stop>>\n");
    printf("<<Press C or c for Megh move>>\n");
    printf("<<Press E or e for Megh move Stop>>\n");
    printf("<<Press R or r for Water/Nowka move>>\n");
    printf("<<Press T or t for Water/Nowka move Stop>>\n");
    printf("<<Press X or x for Car move>>\n");
    printf("<<Press Y or y for Car move Stop>>\n");
    printf("<<Press B or b for Bird move>>\n");
    printf("<<Press G or g for Bird move Stop>>\n");
    printf("<<Press Mouse left button for Light Off >>\n");
    printf("<<Press Mouse right button for Light On >>\n");

glutInit(&argc, argv);
//glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (840, 680);
glutInitWindowPosition (100, 150);
glutCreateWindow (" Smart Village Scenario");
glutPostRedisplay();
glutDisplayFunc(myDisplay);
glutMouseFunc(mouse);
glutKeyboardFunc(keyboard);

myInit ();
glutMainLoop();
return 0;
}
