#include <stdio.h>
#include "lib.h"
int main()
{
	extern char _cb_start, _cb_end;
	int len, count;
	struct cb_data *p;
	len = &_cb_end - &_cb_start;
	count = len / sizeof(struct cb_data);
	printf("_cb_start = %p _cb_end = %p, count = %d, len = %d\n", &_cb_start, &_cb_end, count, len);
	for (p = (struct cb_data *)&_cb_start; p < (struct cb_data *)&_cb_end; p++) {
		int ret;
		ret = p->init(p);
		if (ret)
			printf("%s initialization error\n", p->name);
	}
	return 0;
}

