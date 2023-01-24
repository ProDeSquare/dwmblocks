static const Block blocks[] = {
    /* Crypto */
	{"",           "price btc Bitcoin BTC: usd",	0,					0},
	// {"",           "price eth Ethereum ETH: usd",	0,					0},
	// {"",           "price xmr Monero XMR: usd",     0,					0},

	/*Icon*/		/*Command*/					/*Update Interval*/	/*Update Signal*/
	{"KER:",        "kernel",					0,					0},
	{"UPT:",        "upt",                      5,					0},
	{"MEM:",        "memory",					5,					0},
	{"",	  		"volume",					0,					10},
	{"",			"battery",					2,					0},
	{"CPU:",		"cpu",						5,					0},
	{"",			"clock",					5,					0},
	{"",			"internet",					5,					0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;

