//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/*{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},*/

	/*{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},*/

	{"", "~/.config/dwmblocks/scripts/battery",				5,		0},

	{"", "date '+^b#9499FF^^c#282929^ %I:%M%p'",				5,		0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = ""; //i used midi left in nerd fonts
static unsigned int delimLen = 5;
