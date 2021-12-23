//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/					/*Update Interval*/	/*Update Signal*/
	/* {"  ", 	"kernel",					0,					0}, */
	/* {"  ", 	"pacc",						0,					0}, */
	/* {"  ", 	"upt",						5,					0}, */
	/* {"  ", 	"memory",					4,					0}, */
	/* {"  ", 	"blevel",					0,					11}, */
	{" ",  		"volume",					0,					10},
	{" ",  		"battery",					2,					0},
	{" ",  		"clock",					5,					0},
	{"  ", 	"cpu",						5,					0},
	{" ",  		"internet",					5,					0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
