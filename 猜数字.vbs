dim a,num
num=58
'由于我没学会用vbs生成随机数，只能暂定固定的58。
do until a=num
a=inputbox("请输入一个数")
if a>num then
msgbox("大了",,"大")
end if
if a<num then
msgbox("小了",,"小")
end if
loop
msgbox("你赢了！",,"赢")
