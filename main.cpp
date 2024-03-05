#include "mygraphics.h"
#include<iostream>
using namespace std;
void drawinitial();
int w = 864, h = 480;

class TrafficSignal //A sequence of 3 signals or lights (red, yellow, and green) to regulate traffic flow.
	//Each light turns on exclusively for a certain time period
{
public:
	//	void getdelay();
	void position(int a, int b, int c, int d, int R, int G, int B)
	{

		drawEllipse(a, b, c, d, R, G, B, R, G, B);
	}

	void drawfirst()
	{
		//right down
		drawEllipse(w - 314, h - 140, w - 294, h - 120, 0, 0, 0, 0, 0, 0); //red down right
		drawEllipse(w - 284, h - 140, w - 264, h - 120, 0, 0, 0, 0, 0, 0); // yellow over rule
		drawEllipse(w - 254, h - 140, w - 234, h - 120, 0, 255, 0, 0, 255, 0); // green over rule
		//left up
		drawEllipse(w - 574, h - 345, w - 554, h - 325, 0, 0, 0, 0, 0, 0); //red
		drawEllipse(w - 584, h - 345, w - 604, h - 325, 255, 255, 0, 255, 255, 0); // yellow over rule
		drawEllipse(w - 614, h - 345, w - 624, h - 325, 0, 0, 0, 0, 0, 0); // green over rule

		//left down
		drawEllipse(290, 350, 310, 370, 255, 0, 0, 255, 0, 0); //red
		drawEllipse(290, 380, 310, 400, 0, 0, 0, 0, 0, 0); // yellow over rule
		drawEllipse(290, 410, 310, 430, 0, 0, 0, 0, 0, 0); // green over rule
		//right up
		drawEllipse(550, 150, 570, 130, 255, 0, 0, 255, 0, 0); //red
		drawEllipse(550, 120, 570, 100, 0, 0, 0, 0, 0, 0); // yellow over rule
		drawEllipse(550, 90, 570, 70, 0, 0, 0, 0, 0, 0); // green over rule
	}
	void drawsecond()
	{
		//right down (horizontal)
		drawEllipse(550, 340, 570, 360, 255, 0, 0, 255, 0, 0); //red over
		drawEllipse(580, 340, 600, 360, 0, 0, 0, 0, 0, 0); // yellow
		drawEllipse(610, 340, 630, 360, 0, 0, 0, 0, 0, 0);//green over
		//left up
		drawEllipse(290, 135, 310, 155, 0, 0, 0, 0, 0, 0); //red
		drawEllipse(280, 135, 260, 155, 0, 0, 0, 0, 0, 0); // yellow over rule
		drawEllipse(250, 135, 230, 155, 0, 255, 0, 0, 255, 0); // green over rule

		//left down
		drawEllipse(290, 350, 310, 370, 0, 0, 0, 0, 0, 0); //red over
		drawEllipse(290, 380, 310, 400, 255, 255, 0, 255, 255, 0); // yellow
		drawEllipse(290, 410, 310, 430, 0, 0, 0, 0, 0, 0);//green over
		//right up
		drawEllipse(550, 150, 570, 130, 0, 0, 0, 0, 0, 0); //red
		drawEllipse(550, 120, 570, 100, 255, 255, 0, 255, 255, 0); // yellow over rule
		drawEllipse(550, 90, 570, 70, 0, 0, 0, 0, 0, 0); // green over rule
	}
	void drawthird()
	{
		//right down
		drawEllipse(550, 340, 570, 360, 0, 0, 0, 0, 0, 0); //red over
		drawEllipse(580, 340, 600, 360, 255, 255, 0, 255, 255, 0); // yellow over
		drawEllipse(610, 340, 630, 360, 0, 0, 0, 0, 0, 0);//green
		//left up
		drawEllipse(290, 135, 310, 155, 255, 0, 0, 255, 0, 0); //red
		drawEllipse(280, 135, 260, 155, 0, 0, 0, 0, 0, 0); // yellow over rule
		drawEllipse(250, 135, 230, 155, 0, 0, 0, 0, 0, 0); // green over rule

		//left down
		drawEllipse(290, 350, 310, 370, 0, 0, 0, 0, 0, 0); //red over
		drawEllipse(290, 380, 310, 400, 0, 0, 0, 0, 0, 0); // yellow
		drawEllipse(290, 410, 310, 430, 0, 255, 0, 0, 255, 0);//green over
		//right up
		drawEllipse(550, 130, 570, 150, 0, 0, 0, 0, 0, 0); //red
		drawEllipse(550, 120, 570, 100, 255, 255, 0, 255, 255, 0); // yellow over rule
		drawEllipse(550, 90, 570, 70, 0, 0, 0, 0, 0, 0); // green over rule
	}
	void drawfourth()
	{
		//right down
		drawEllipse(550, 340, 570, 360, 0, 0, 0, 0, 0, 0); //red over
		drawEllipse(580, 340, 600, 360, 255, 255, 0, 255, 255, 0); // yellow over
		drawEllipse(610, 340, 630, 360, 0, 0, 0, 0, 0, 0);//green
		//left up
		drawEllipse(290, 135, 310, 155, 255, 0, 0, 255, 0, 0); //red
		drawEllipse(280, 135, 260, 155, 0, 0, 0, 0, 0, 0); // yellow over rule
		drawEllipse(250, 135, 230, 155, 0, 0, 0, 0, 0, 0); // green over rule

		//left down
		drawEllipse(290, 350, 310, 370, 255, 0, 0, 255, 0, 0); //red over
		drawEllipse(290, 380, 310, 400, 0, 0, 0, 0, 0, 0); // yellow
		drawEllipse(290, 410, 310, 430, 0, 0, 0, 0, 0, 0);//green over
		//right up
		drawEllipse(550, 130, 570, 150, 0, 0, 0, 0, 0, 0); //red
		drawEllipse(550, 120, 570, 100, 0, 0, 0, 0, 0, 0); // yellow over rule
		drawEllipse(550, 90, 570, 70, 0, 255, 0, 0, 255, 0); // green over rule
	}
	//strategy two
	void drawred()
	{
		//right down
		drawEllipse(w - 314, h - 140, w - 294, h - 120, 255, 0, 0, 255, 0, 0); //red down right
		drawEllipse(w - 284, h - 140, w - 264, h - 120, 0, 0, 0, 0, 0, 0); // yellow over rule
		drawEllipse(w - 254, h - 140, w - 234, h - 120, 0, 0, 0, 0, 0, 0); // green over rule
		//left up
		drawEllipse(w - 574, h - 345, w - 554, h - 325, 255, 0, 0, 255, 0, 0); //red
		drawEllipse(w - 584, h - 345, w - 604, h - 325, 0, 0, 0, 0, 0, 0); // yellow over rule
		drawEllipse(w - 614, h - 345, w - 624, h - 325, 0, 0, 0, 0, 0, 0); // green over rule

		//left down
		drawEllipse(290, 350, 310, 370, 0, 0, 0, 0, 0, 0); //red
		drawEllipse(290, 380, 310, 400, 0, 0, 0, 0, 0, 0); // yellow over rule
		drawEllipse(290, 410, 310, 430, 0, 255, 0, 0, 255, 0); // green over rule
		//right up
		drawEllipse(550, 150, 570, 130, 0, 0, 0, 0, 0, 0); //red
		drawEllipse(550, 120, 570, 100, 0, 0, 0, 0, 0, 0); // yellow over rule
		drawEllipse(550, 90, 570, 70, 0, 255, 0, 0, 255, 0); // green over rule
	}
	void drawyellow()
	{
		//right down (horizontal)
		drawEllipse(550, 340, 570, 360, 0, 0, 0, 0, 0, 0); //red over
		drawEllipse(580, 340, 600, 360, 255, 255, 0, 255, 255, 0); // yellow
		drawEllipse(610, 340, 630, 360, 0, 0, 0, 0, 0, 0);//green over
		//left up
		drawEllipse(290, 135, 310, 155, 0, 0, 0, 0, 0, 0); //red
		drawEllipse(280, 135, 260, 155, 255, 255, 0, 255, 255, 0); // yellow over rule
		drawEllipse(250, 135, 230, 155, 0, 0, 0, 0, 0, 0); // green over rule

		//left down
		drawEllipse(290, 350, 310, 370, 255, 0, 0, 255, 0, 0); //red over
		drawEllipse(290, 380, 310, 400, 0, 0, 0, 0, 0, 0); // yellow
		drawEllipse(290, 410, 310, 430, 0, 0, 0, 0, 0, 0);//green over
		//right up
		drawEllipse(550, 150, 570, 130, 255, 0, 0, 255, 0, 0); //red
		drawEllipse(550, 120, 570, 100, 0, 0, 0, 0, 0, 0); // yellow over rule
		drawEllipse(550, 90, 570, 70, 0, 0, 0, 0, 0, 0); // green over rule
	}
	void drawgreen()
	{
		//right down
		drawEllipse(550, 340, 570, 360, 0, 0, 0, 0, 0, 0); //red over
		drawEllipse(580, 340, 600, 360, 0, 0, 0, 0, 0, 0); // yellow over
		drawEllipse(610, 340, 630, 360, 0, 255, 0, 0, 255, 0);//green
		//left up
		drawEllipse(290, 135, 310, 155, 0, 0, 0, 0, 0, 0); //red
		drawEllipse(280, 135, 260, 155, 0, 0, 0, 0, 0, 0); // yellow over rule
		drawEllipse(250, 135, 230, 155, 0, 255, 0, 0, 255, 0); // green over rule

		//left down
		drawEllipse(290, 350, 310, 370, 0, 0, 0, 0, 0, 0); //red over
		drawEllipse(290, 380, 310, 400, 255, 255, 0, 255, 255, 0); // yellow
		drawEllipse(290, 410, 310, 430, 0, 0, 0, 0, 0, 0);//green over
		//right up
		drawEllipse(550, 130, 570, 150, 0, 0, 0, 0, 0, 0); //red
		drawEllipse(550, 120, 570, 100, 255, 255, 0, 255, 255, 0); // yellow over rule
		drawEllipse(550, 90, 570, 70, 0, 0, 0, 0, 0, 0); // green over rule
	}
};
class Vehicle {
protected:
	int i;
	int j;
	char direction;
public:
	Vehicle()
	{
		i = 0;
		j = 0;
		direction = '0';
	}
	void position(int i, int j, char direction)
	{
		this->i = i;
		this->j = j;
		this->direction = direction;
	}
	void drawvehicle(int r, int g, int b)
	{
		drawRectangle(10 * i, j + 270, 10 * i + 25, j + 310, r, g, b, r, g, b);
	}
	char get_direction()
	{
		return direction;
	}
	~Vehicle()
	{
		//destructor
	}
};


class Road //A road allows vehicle movement from an origin to end. For simplicity assume, each road
	//comprises of 2 lanes(each dedicated for movement in each direction) using a strictly linear
	//trajectory(without any curves)
{
protected:
	int* lane1, * lane2, * lane3, * lane4; //will define the start and end of a specific lane. 1,2 are horizontal, 3,4 are vertical
	int* hroad, * vroad;
public:
	Road()
	{
		lane1 = new int[2];
		lane2 = new int[2];
		lane3 = new int[2];
		lane4 = new int[2];
		hroad = new int[2];
		vroad = new int[2];

		lane1[0] = 0; //left to right start
		lane1[1] = 28; //left to right end

		lane2[0] = -1; //right to left start
		lane2[1] = -28; //right to left end

		lane3[0] = -6; //up to down start
		lane3[1] = -102; //up to down end

		lane4[0] = 6; //down to up start
		lane4[1] = 108; //down to up end

		hroad[1] = 84; //horizontal road end
		hroad[0] = 0; //horizontal road start

		vroad[0] = 0; //vertical road start
		vroad[1] = 402; //vertical road end
	}
	int* get_lane1()
	{
		return lane1;
	}
	int* get_lane2()
	{
		return lane2;
	}
	int* get_lane3()
	{
		return lane3;
	}
	int* get_lane4()
	{
		return lane4;
	}
	int* get_hroad()
	{
		return hroad;
	}
	int* get_vroad()
	{
		return vroad;
	}
	~Road()
	{
		delete lane1;
		delete lane2;
		delete lane3;
		delete lane4;
		delete hroad;
		delete vroad;
	}
};


class Intersection//An intersection is a crossing where two or more roads converge.For simplicity,
	//consider a four - way intersection only that uses traffic signals(using a coordination strategy) to
	//control traffic flow.
{

public:

	Intersection()
	{
		//default
	}
	virtual void drawintersection(Vehicle* x, Road* y,TrafficSignal *s) = 0;
};

class Intersection1 : public Intersection
{
public:
	Intersection1()
	{
		//default
	}
	void drawintersection(Vehicle* x, Road* y,TrafficSignal *s)
	{
		drawinitial();
		// Initialising

		cls();
		showConsoleCursor(false);
		int count = 0;
		// main event loop
		int i = 0, j = 0, k = 0, l = 0, m = 0;
		int red = 0;
		int green = 0;
		int yellow = 0;
		int signaldelay = 0;
		int c = 0;
		while (true) {
			//w=864, h=480
			delay(50);
			drawinitial(); //draws land and road
			//CARS

			//right
			if (i >= (y->get_hroad()[1] / 2) + 5)
			{
				x[0].position(y->get_hroad()[1] / 2 + 5, j, 'r');
				x[0].drawvehicle(204, 131, 193);
			}
			else
			{
				x[0].position(i, 5, 'r');
				x[0].drawvehicle(204, 131, 193);
			}
			//down
			int d = 0;
			x[1].position(47, m - 230, 'd');
			x[1].drawvehicle(217, 119, 102);

			//left
			x[2].position(83 + k, -80, 'l');
			x[2].drawvehicle(202, 209, 8);

			//up
			x[3].position(37, l + 160, 'u');
			x[3].drawvehicle(60, 186, 180);


			if (x[0].get_direction() == 'r')
			{
				if (10 * i > w - 30)
					i = 0;
				if (j > h - 60)
					j = 0;
			}


			if (x[1].get_direction() == 'd')
			{
				if (m > h - 70)
					m = 0;
			}

			if (x[2].get_direction() == 'l')
			{
				if (90 + k <= 0)
					k = 0;
			}
			//blue going up
			if (x[3].get_direction() == 'u')
			{
				if (l * 10 < -4000)
					l = 0;
			}
			//cleaning
			drawRectangle(w / 2 + 30, h, w / 2 + 90, h + 200, 0, 0, 0, 0, 0, 0);


			//cout << i << "....";

			if (signaldelay >= 0 && signaldelay <= 70)
			{
				red = 200;
				green = 100;
				yellow = 0;
				s->drawred();
			}
			if (signaldelay >= 71 && signaldelay <= 140)
			{
				yellow = 200;
				red = 100;
				green = 0;
				s->drawyellow();
			}
			if (signaldelay >= 141 && signaldelay <= 210)
			{
				green = 200;
				yellow = 100;
				red = 0;
				s->drawgreen();
			}
			signaldelay++;
			if (signaldelay >= 210)
			{
				count = 0;
				signaldelay = 0;
			}



			count++;
			k--; //l
			i++; //r
			j += 6; //d //
			l -= 6; //u
			m += 6;//d 

			//right
			if (y->get_lane1()[1] == i) // 28
			{
				i--;
				if (count == 137)
				{
					i++;
				}
			}

			//up
			if (y->get_lane4()[1] - 204 == l)  // l = -96 // 108-204=-96
			{
				if (count >= 83 || count == 1)
				{
					l = l + 6;
				}
			}

			//left
			if (y->get_lane3()[1] + 74 == k)    // -102 + 74 == --28
			{
				k++;
				if (count == 147)
				{
					k--;
				}
			}

			//down
			if (y->get_lane2()[1] + 124 == m)	   //-28 + 124 = 96
			{
				if (count >= 78)
				{
					m = m - 6;
				}
				if (count == 1)
				{
					m = m + 6;
				}
			}

			if (c == 400)
				break;
			c++;
		}
		//		cls();
		showConsoleCursor(true);

		gotoxy(0, 0);
	}
	~Intersection1()
	{
		//destructor
	}
};
class Intersection2 :public Intersection
{

public:
	Intersection2()
	{

	}
	void drawintersection(Vehicle*x,Road*y,TrafficSignal*s)
	{
		drawinitial();
		// Initialising
		int c = 0;
		showConsoleCursor(false);
		int count = 0;
		// main event loop
		int i = 0, j = 0, k = 0, l = 0, m = 0;
		int red = 0;
		int green = 0;
		int yellow = 0;
		int signaldelay = 0;

		while (true)
		{
			//w=864, h=480
			delay(50);
			drawinitial(); //draws land and road

			//CARS

			//right
			if (i >= y->get_hroad()[1] / 2 + 5)
			{
				x[0].position(y->get_hroad()[1] / 2 + 5, j, 'r');
				x[0].drawvehicle(204, 131, 193);
			}
			else
			{
				x[0].position(i, 5, 'r');
				x[0].drawvehicle(204, 131, 193);
			}
			//down
			int d = 0;
			x[1].position(47, m - 230, 'd');
			x[1].drawvehicle(217, 119, 102);

			//left
			x[2].position(83 + k, -80, 'l');
			x[2].drawvehicle(202, 209, 8);

			//up
			x[3].position(37, l + 160, 'u');
			x[3].drawvehicle(60, 186, 180);


			if (x[0].get_direction() == 'r')
			{
				if (10 * i > w - 30)
					i = 0;
				if (j > h - 60)
					j = 0;
			}


			if (x[1].get_direction() == 'd')
			{
				if (m > h - 70)
					m = 0;
			}

			if (x[2].get_direction() == 'l')
			{
				if (90 + k <= 0)
					k = 0;
			}
			//blue going up
			if (x[3].get_direction() == 'u')
			{
				if (l * 10 < -4000)
					l = 0;
			}
			//cleaning
			drawRectangle(w / 2 + 30, h, w / 2 + 90, h + 200, 0, 0, 0, 0, 0, 0);


			if (signaldelay >= 0 && signaldelay <= 70)
			{
				s->drawfirst();
			}
			if (signaldelay >= 71 && signaldelay <= 140)
			{
				s->drawsecond();
			}
			if (signaldelay >= 141 && signaldelay <= 210)
			{
				s->drawthird();
			}
			if (signaldelay >= 211 && signaldelay <= 281)
			{
				s->drawfourth();
			}
			signaldelay++;
			if (signaldelay >= 281)
			{
				count = 0;
				signaldelay = 0;
			}

			count++;
			k--; //l
			i++; //r
			j += 6; //d
			l -= 6; //u
			m += 6;//d for turn

			//right
			if (y->get_lane1()[1] == i) // 28
			{
				i--;
				if (count == 77)
				{
					i++;
				}
			}

			//up
			if (y->get_lane4()[1] - 204 == l)  // l = -96 // 108-204=-96
			{
				if (count >= 0 && count <= 151 || count >= 215)
				{
					l = l + 6;
				}

			}

			//left
			if (y->get_lane3()[1] + 74 == k)    // -102 + 74 == -28
			{
				if (count >= 30)
				{
					k++;
				}
			}

			//down
			if (y->get_lane2()[1] + 124 == m)	   //-28 + 124 = 96
			{
				if (count != 223)
				{
					m = m - 6;
				}
			}
	
			if (c == 400)
				break;
			c++;
		}
	}
	~Intersection2()
	{
		//destructor
	}
};
void drawinitial()
{
	//LAND
	drawRectangle(0, 30, w, h, 128, 128, 128, 128, 128, 128); //road
	drawRectangle(0, 30, (w - 200) / 2, (h - 30 - 100) / 2, 51, 255, 153, 51, 255, 153); //land upper left
	drawRectangle(0, (h - 30 - 200) / 2 + 200, (w - 200) / 2, h, 51, 255, 153, 51, 255, 153); //land lower left
	drawRectangle(((w - 200) / 2) + 200, 30, w, (h - 30 - 100) / 2, 51, 255, 153, 51, 255, 153); //land upper right
	drawRectangle(((w - 200) / 2) + 200, (h - 30 - 200) / 2 + 200, w, h, 51, 255, 153, 51, 255, 153); //land lower right

	//ROAD
	drawRectangle(w / 2 - 100 + 200, h / 2, w, h / 2 + 10, 255, 255, 0, 255, 255, 0);//road yellow line right horizontal
	drawRectangle(0, h / 2, w / 2 - 100, h / 2 + 10, 255, 255, 0, 255, 255, 0); //road yellow line left horizontal
	drawRectangle(w / 2, (h - 30 - 200) / 2 + 200, w / 2 + 10, h, 255, 255, 0, 255, 255, 0); //road yellow line down vertical
	drawRectangle(w / 2, 30, w / 2 + 10, (h - 30 - 100) / 2, 255, 255, 0, 255, 255, 0); //road yellow line up vertical

	//TRAFFIC SIGNAL
	drawRectangle((w - 170) / 2 - 130, (h - 130) / 2 - 50, (w - 200) / 2 - 10, (h - 30 - 100) / 2 - 10, 0, 0, 0, 0, 0, 0); //upper left
	drawRectangle((w - 200) / 2 - 50, (h - 210) / 2 + 190 + 20, (w - 200) / 2 - 10, h - 40, 0, 0, 0, 0, 0, 0); //lower left
	drawRectangle((w - 320), (h - 350) / 2, (w - 280), h - 320, 0, 0, 0, 0, 0, 0); //upper right
	drawRectangle((w - 320), h - 110, (w - 220), h - 150, 0, 0, 0, 0, 0, 0); //lower right

}
int main()
{
	TrafficSignal* lights = new TrafficSignal;
	Vehicle* x = new Vehicle[4];
	Road* y=new Road;
	Intersection* xvx;
	Intersection1 X;
	Intersection2 Y;
	int count = 0;
	while (true)
	{
		xvx = &X;
		xvx->drawintersection(x,y,lights);
		xvx = &Y;
		xvx->drawintersection(x,y,lights);
	}

	delete y;
	delete lights;
	return 0;
}