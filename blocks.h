//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    // Icon     Command                                             Interval     Signal
    { "",   "sh -c ~/scripts/dwm/dwm-spotify.sh | sed 's/^/  /;s/$/ /'",   0,           0 },
    { "",   "sh -c ~/scripts/dwm/dwm-weather.sh | sed 's/^/  /;s/$/ /'",   1800,        1 },
    { "",   "sh -c ~/scripts/dwm/dwm-updates.sh | sed 's/^/  /;s/$/ /'",   0,           2 },
    { "",   "sh -c ~/scripts/dwm/dwm-cputemp.sh | sed 's/^/  /;s/$/ /'",   1,           3 },
    { "",   "sh -c ~/scripts/dwm/dwm-memory.sh | sed 's/^/  /;s/$/ /'",    1,           4 },
    { "",   "sh -c ~/scripts/dwm/dwm-network.sh | sed 's/^/  /;s/$/ /'",   0,           5 },
    { "",   "sh -c ~/scripts/dwm/dwm-pavolume.sh | sed 's/^/  /;s/$/ /'",  0,           6 },
    { "",   "sh -c ~/scripts/dwm/dwm-battery.sh | sed 's/^/  /;s/$/ /'",   30,          7 },
    { "",   "sh -c ~/scripts/dwm/dwm-datetime.sh | sed 's/^/  /;s/$/ /'",  30,          8 },
	//{"", "cat ~/.pacupdate | sed /📦0/d",					0,		9},
	//{"🧠", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	//{"", "~/bin/statusbar/volume",						0,		10},
	//{"☀", "xbacklight | sed 's/\\..*//'",					0,		11},
	//{"", "~/bin/statusbar/battery",						5,		0},
	//{"🌡", "sensors | awk '/^temp1:/{print $2}'",				5,		0},
	//{"", "~/bin/statusbar/clock",						5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
