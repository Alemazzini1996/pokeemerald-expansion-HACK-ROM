CreatorsHouse_MapScripts::
	.byte 0

Creator_Talk::
lockall
faceplayer
msgbox Creator_Message, MSGBOX_DEFAULT
releaseall
end

Creator_Message::
.string "Welcome {PLAYER}{KUN}!\p"
.string "I'm the creator of this rom hack,\n"
.string "I hope you'll enjoy the game!\p"
.string "Be sure to check out Team Aqua's Discord\n"
.string "and to leave a feedback on the hack!.$"
