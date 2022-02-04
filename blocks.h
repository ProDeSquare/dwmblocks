static const Block blocks[] = {
	/*Icon*/		/*Command*/					/*Update Interval*/	/*Update Signal*/
	{" MEMORY:", 	"memory",					4,					0},
	{" ",	  		"volume",					0,					10},
	{" ",			"battery",					2,					0},
	{" CPU:",		"cpu",						5,					0},
	{" ",			"clock",					5,					0},
	{" ",			"internet",					5,					0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '\0';
