#include "LinkedList.h"
int main(void) {
	

	node * phead = NULL;

	phead = addback(phead, 199);
	phead = addback(phead, 833);
	phead = addback(phead, 195);
	phead = addback(phead, 194);
	phead = addback(phead, 193);

	phead = addhead(phead, 199);
	phead = addhead(phead, 444);




	showAll(phead);


	system("pause");

	return 0;
}