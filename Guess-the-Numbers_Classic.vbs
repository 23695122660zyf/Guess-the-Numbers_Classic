dim a,num
num=58
'Since I didn't learn to generate random numbers with vbs, I can only tentatively set a fixed 58.
do until a=num
a=inputbox("Please enter a number")
if a>num then
msgbox("That number is big.",,"big")
end if
if a<num then
msgbox("That number is small.",,"small")
end if
loop
msgbox("You win!",,"win")
