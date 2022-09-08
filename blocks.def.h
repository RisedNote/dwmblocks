//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	        	/*Update Interval*/	        /*Update Signal*/
	/*{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},*/

  // clicks dont work unless ther is a update signal
	{"", "~/.config/dwmblocks/scripts/volume",				0,		1}, 

	{"", "~/.config/dwmblocks/scripts/time-date",     5,		2},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|"; //i used midi left in nerd fonts
static unsigned int delimLen = 5;
