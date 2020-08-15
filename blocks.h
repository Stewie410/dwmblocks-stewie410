//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    // Icon     Command                             Update Interval     Update Signal
    { "",      "sh -c ~/scripts/dwm/dwm-spotify.sh",     0,                  0 },
    { "",       "sh -c ~/scripts/dwm/dwm-weather.sh",     1800,               1 },
    { "📦",     "sh -c ~/scripts/dwm/dwm-updates.sh",     0,                  2 },
    { "🌡",      "sh -c ~/scripts/dwm/dwm-cputemp.sh",     1,                  3 },
    { "",      "sh -c ~/scripts/dwm/dwm-memory.sh",      1,                  4 },
    { "",       "sh -c ~/scripts/dwm/dwm-network.sh",     0,                  5 },
    { "",      "sh -c ~/scripts/dwm/dwm-pavolume.sh",    0,                  6 },
    { "",       "sh -c ~/scripts/dwm/dwm-battery.sh",     30,                 7 },
    { "",       "sh -c ~/scripts/dwm/dwm-datetime.sh",    30,                 8 },
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
