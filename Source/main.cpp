#include "head.h"
#include "Solver.h"

Solver solver;

void init()
{
	solver.init("in.txt", 0.6);
}
void input()
{
	solver.input();
}
void solve()
{
	solver.solve();
}
void output()
{
	solver.output();
}

int main()
{
	//freopen("debug.txt", "w", stdout);

	init();
	input();
	solve();
	output();

	return 0;
}

/* Test data set
 * Graph.data
 * cntGraph == 10000
 * vn < 250
 * en < 250
 */