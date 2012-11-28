#include <stdio.h>
#include "lib.h"

static int init(struct cb_data *p)
{
	printf("Initializing %s\n", p->name);
	return 0;
}

static int f1(struct cb_data *p)
{
	return 0;
}

static int f2(struct cb_data *p)
{
	return 0;
}

DECLARE_CB(__FILE__,init, f1, f2, 0, 0);

