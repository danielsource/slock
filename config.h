/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#597bc5",   /* during input */
	[FAILED] = "#cf6a4c",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
