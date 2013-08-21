#!/bin/sh


DIS=`xrandr|grep -s "\<connected"|awk '{ print $1 }'`
MODE=`xrandr|awk '{ print $1 }'|grep ^[0-9]|sort -tx -nr -k1|awk 'BEGIN{tmp=""} { if($1==tmp) { print $1; } tmp=$1; }'|sort -tx -nr -k1|head -1`
case "$1" in
"dual" )
	xrandr --output `echo "$DIS" |grep -s "LVDS"` --mode $MODE --auto --output `echo "$DIS"|grep -sv "LVDS"` --same-as `echo "$DIS" |grep -s "LVDS"` --mode $MODE --auto
	;;
"lvds" )
	xrandr --output `echo "$DIS" |grep -s "LVDS"` --auto --output `echo "$DIS"|grep -sv "LVDS"` --off
	;;
"other" )
	xrandr --output `echo "$DIS" |grep -s "LVDS"` --off --output `echo "$DIS"|grep -sv "LVDS"` --auto
	;;
"conn" )
	xrandr | grep "\<connected" | grep -vq "LVDS"
	exit $?
	;;
esac

exit 0
