#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector> 
#define N 1001
using namespace std;

struct point
{
	int x;
	int y;
};
vector<point> p;
 
bool pcmp(point i,point j)
{
	return i.y>j.y;
}

int main()
{
	int n,d,x,y;
	while (scanf("%d %d",&n,&d)==2&&n&&d)
	{
		point pp;
		while (n--)
		{
			scanf("%d %d",&x,&y);
			pp.x=x;pp.y=y;
			p.push_back(pp);	
		}
		while (!p.empty())
		{
			int ymax=*max_element(p,p.end,pcmp);
			
		}
	}
	return 0;
}
