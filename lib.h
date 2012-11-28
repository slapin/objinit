struct cb_data {
	char *name;
	int (*init)(struct cb_data *p);
	int (*f1)(struct cb_data *p);
	int (*f2)(struct cb_data *p);
	int p1;
	int p2;
};

#define DECLARE_CB(hname, hinit, cb1, cb2, pa1, pa2) \
	static volatile struct cb_data data __attribute__((section(".cb_data"))) = { \
		.name = hname,	\
		.init = hinit,	\
		.f1 = cb1,	\
		.f2 = cb2,	\
		.p1 = pa1,	\
		.p2 = pa2,	\
	};

