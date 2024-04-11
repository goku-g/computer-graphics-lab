#include <iostream>
#include<math.h>
#include<graphics.h>

using namespace std;

void show(int array[3][2])
{
	cout<<array[0][0];
	int maxx=getmaxx();
	int maxy=getmaxy();
	int midx=maxx/2;
	int midy=maxy/2;

    int gd = DETECT, gm;

    // Initialize graphics function
    initgraph (&gd, &gm, "");


	// to draw co-ordinate system
	line(midx,0,midx,maxy);
	line(0,midy,maxx,midy);

	// to draw triangle respect to co-ordinate
	for (int i=0;i<3;i++)
	{
     array[i][0]+=midx;
		if(array[i][1]<0)
         {
		     array[i][1]=-array[i][1];
		     array[i][1]+=midy;
	    	}
		else
	    	{
	     	array[i][1]=midy-array[i][1];
	        }
	}

	//to draw a triangle
	line(array[0][0],array[0][1],array[1][0],array[1][1]);
	delay(1000);
    line(array[0][0],array[0][1],array[2][0],array[2][1]);
    delay(1000);
    line(array[2][0],array[2][1],array[1][0],array[1][1]);
    outtextxy(array[1][0],array[1][1],(char*)"Origional Triangle");



	 // reflection about x-axis
	 int diffy,array1[3];
	for(int i=0;i<3;i++)
	{

	 if(array[i][1]>midy)
	 {
	 	diffy=array[i][1]-midy;
	    array1[i]=(midy-diffy);
	 }
	  if(array[i][1]<midy)
	  {
	    diffy=midy-array[i][1];
	  	array1[i]=midy+diffy;
	  }


	 cout << array[i][1];
	}

	setcolor(2);
	line(array[0][0],array1[0],array[1][0],array1[1]);
	delay(1000);
    line(array[0][0],array1[0],array[2][0],array1[2]);
    delay(1000);
    line(array[2][0],array1[2],array[1][0],array1[1]);
    outtextxy(array[2][0],array1[2],(char*)"X-AXIS Reflection");

    //reflection about y-axix

	for(int i=0;i<3;i++)
	{

	 if(array[i][0]>midx)
	 {
	 	diffy=array[i][0]-midx;
	    array1[i]=(midx-diffy);
	 }
	  if(array[i][0]<midx)
	  {
	    diffy=midy-array[i][0];
	  	array1[i]=midx+diffy;
		   }
	}

	setcolor(5);
	line(array1[0],array[0][1],array1[1],array[1][1]);
	delay(1000);
    line(array1[0],array[0][1],array1[2],array[2][1]);
    delay(1000);
    line(array1[2],array[2][1],array1[1],array[1][1]);
    outtextxy(array1[2],array[2][1],(char*)"Y-AXIS Reflection");

}

int main()
{
    int array[3][2];
    int i,j;

	cout<<"Enter co-ordinates point of triangle \n";
	for(i=0;i<3;i++)
	{
	  for(j=0;j<2;j++)
	  {
	  	cin>>array[i][j];

	  }
    }
	cout<<"input reads";
    show(array);
	getch();
    return 0;
}
