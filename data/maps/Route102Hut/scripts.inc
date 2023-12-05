Route102Hut_MapScripts::
	.byte 0

Ranger_EventScript::
lock
msgbox Ranger_Text, MSGBOX_DEFAULT
    release
    end

Ranger_Text:
    .string "Hi! I'm a ranger.\p"
	.string "I'm tasked to look after\n"
	.string "this forest and the people\l"
	.string "traversing it.\p"
	.string "Be carefull out there!$"
