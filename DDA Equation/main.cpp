#include<stdio.h>
#include<math.h>

int main()
{
    float x0, x1, y0, y1, m;
    float dy, dx;
    int i;
    float xp, yp;

    while(1)
    {
        printf("\n\nx0 y0: ");
        scanf("%f",&x0);
        scanf("%f",&y0);

        printf("x1 y1: ");
        scanf("%f",&x1);
        scanf("%f",&y1);

        dx = x1-x0;
        dy = y1-y0;

        printf("\nHere,\n   dx = %.3f\n   dy = %.3f\n",dx,dy);
        m = (dy/dx);
        m=roundf(m*1000)/1000;

        //slop .000 standard math figure
        // round(m);

        printf("\nHere, slope  m = %.3f\n",m);

        //float x0,y0,xp,yp,x,y;
        //x0=x1;
        //y0=y1;

        //first node
        xp=x0;
        yp=y0;


        if(m>0 && m<=1 && dy>=0 && dx>=0)
        {
            printf("\nHere,m>0 && m<=1,than x1 = x0+1 , y1= y0+m \n");

            for(i=x0; i<=x1; i++)
            {
                printf("\nx= %.3f      y= %.3f        ",x0,y0);

                //xp=floor(1*xp)/1;//int
                //yp=floor(1*yp)/1;//int

                printf("%.f,%.f\n",xp,yp);

                x0=x0+1;
                x0=floor(1000*x0)/1000;

                //if x float

                y0=y0+m;
                y0=roundf(1000*y0)/1000;

                // ex float

                xp=round(x0);
                yp=round(y0);

            }
        }

        else if(m>0 && m<=1 && dy<0 && dx<0)
        {
            printf("\nHere,m>0 && m<=1,than x1 = x0-1 , y1= y0-m \n");

            for(i=x0; i>=x1; i--)
            {
                printf("\nx= %.3f      y= %.3f        ",x0,y0);

                //xp=floor(1*xp)/1;//int
                //yp=floor(1*yp)/1;//int

                printf("%.f,%.f\n",xp,yp);

                x0=x0-1;
                x0=floor(1000*x0)/1000;

                //if x float

                y0=y0-m;
                y0=roundf(1000*y0)/1000;

                // ex float

                xp=round(x0);
                yp=round(y0);
            }
        }

        else if(m>=-1 && m<=0 && dx>0 && dy<0)
        {
            printf("\nHere,m>0 && m<=1,than x1 = x0+1 , y1= y0-m \n");

            for(i=x0; i<=x1; i++)
            {
                printf("\nx= %.3f      y= %.3f        ",x0,y0);

                //xp=floor(1*xp)/1;//int
                //yp=floor(1*yp)/1;//int

                printf("%.f,%.f\n",xp,yp);

                x0=x0+1;
                x0=floor(1000*x0)/1000;

                //if x float

                y0=y0+m;
                y0=roundf(1000*y0)/1000;

                // ex float

                xp=round(x0);
                yp=round(y0);
            }
        }

        else if(m>=-1 && m<=0 && dx<0 && dy>0)
        {
            printf("\nHere,m>0 && m<=1,than x1 = x0-1 , y1= y0-m \n");

            for(i=x0; i>=x1; i--)
            {
                printf("\nx= %.3f      y= %.3f        ",x0,y0);

                //xp=floor(1*xp)/1;//int
                //yp=floor(1*yp)/1;//int

                printf("%.f,%.f\n",xp,yp);

                x0=x0-1;
                x0=floor(1000*x0)/1000;

                //if x float

                y0=y0-m;
                y0=roundf(1000*y0)/1000;

                // ex float

                xp=round(x0);
                yp=round(y0);
            }
        }

       else if(m>1 && dy>=0 && dx>=0)
        {
            printf("\nHere,m>1 ,than x1 = x0+(1/m) , y1= y0+1 \n");

            for(i=y0; i<=y1; i++)
            {
                printf("\nx= %.3f      y= %.3f        ",x0,y0);

                //xp=floor(1*xp)/1;//int
                //yp=floor(1*yp)/1;//int

                printf("%.f,%.f\n",xp,yp);

                x0=x0+(1/m);
                x0=floor(1000*x0)/1000;

                //if x float

                y0=y0+1;
                y0=roundf(1000*y0)/1000;

                // ex float

                xp=round(x0);
                yp=round(y0);

            }
        }

    else if(m>1 && dy<0 && dx<0)
        {
            printf("\nHere,m>1 ,than x1 = x0-(1/m) , y1= y0-1 \n");

            for(i=y0; i>=y1; i--)
            {
                printf("\nx= %.3f      y= %.3f        ",x0,y0);

                //xp=floor(1*xp)/1;//int
                //yp=floor(1*yp)/1;//int

                printf("%.f,%.f\n",xp,yp);

                x0=x0-(1/m);
                x0=floor(1000*x0)/1000;

                //if x float

                y0=y0-1;
                y0=roundf(1000*y0)/1000;

                // ex float

                xp=round(x0);
                yp=round(y0);

            }
        }

    else if(m<-1 && dx>0 && dy<0)
        {
            printf("\nHere,m<-1,than x1 = x0-(1/m) , y1= y0-1 \n");

            for(i=y0; i>=y1; i--)
            {
                printf("\nx= %.3f      y= %.3f        ",x0,y0);

                //xp=floor(1*xp)/1;//int
                //yp=floor(1*yp)/1;//int

                printf("%.f,%.f\n",xp,yp);
                x0=x0-(1/m);
                x0=floor(1000*x0)/1000;

                //if x float

                y0=y0-1;
                y0=roundf(1000*y0)/1000;

                // ex float

                xp=round(x0);
                yp=round(y0);
            }
        }

    else if(m<-1 && dx<0 && dy>0)
        {
            printf("\nHere,m<-1,than x1 = x0-(1/m) , y1= y0+1 \n");

            for(i=y0; i<=y1; i++)
            {
                printf("\nx= %.3f      y= %.3f        ",x0,y0);

                //xp=floor(1*xp)/1;//int
                //yp=floor(1*yp)/1;//int

                printf("%.f,%.f\n",xp,yp);

                x0=x0+(1/m);
                x0=floor(1000*x0)/1000;

                //if x float

                y0=y0+1;
                y0=roundf(1000*y0)/1000;

                // ex float

                xp=round(x0);
                yp=round(y0);
            }
        }
    }
        return 0;
    }
