#!/bin/bash 
cat /home/pijus/.config/i3/emoji_script/rez.txt | dmenu -i -l 20 -fn Monospace-15 | awk '{print $1}' | tr -d '\n' | xclip -selection clipboard
if [ ! -z "$(xclip -o -selection clipboard)" ]
then
    notify-send "$(xclip -o -selection clipboard) copied to clipboard."
fi
