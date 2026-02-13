#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r1, Rect *r2) {

    double x_left = max(r1->x, r2->x);
    double x_right = min(r1->x + r1->w, r2->x + r2->w);
    double w_overlap = x_right - x_left;
 
    double y_top = min(r1->y, r2->y);
    double y_bottom = max(r1->y - r1->h, r2->y - r2->h);
    double h_overlap = y_top - y_bottom;
    

    if (w_overlap <= 0 || h_overlap <= 0) {
        return 0;
    }
    
    return w_overlap * h_overlap;
}