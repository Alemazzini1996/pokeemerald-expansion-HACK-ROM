Space_Rocket_MapScripts::
	.byte 0

Rocket_Launch_Script::
lockall
msgbox Text_Launch MSGBOX_AUTOCLOSE
goto Rocket_Shake
releaseall
end

Text_Launch:
.string "We will now start the countdown.\p"
.string "...\n"
.string "10\l"
.string "9\l"
.string "8\l"
.string "7\l"
.string "6\l"
.string "5\l"
.string "4\l"
.string "3\l"
.string "2\l"
.string "1...\p"
.string "Firing Up...$"

Rocket_Shake::
	delay(60)
	setvar VAR_0x8004, 4   //@ vertical pan
	setvar VAR_0x8005, 6   //@ horizontal pan
	setvar VAR_0x8006, 60  //@ num shakes
	setvar VAR_0x8007, 4  //@ shake delay
	special ShakeCamera
	delay(60)
	warp MAP_BIRTH_ISLAND_EXTERIOR, 15, 27
	return
