#!/bin/bash

int=1
while(($int<=10))
do
    ffplay -autoexit rtmp://localhost:21935/live/livestream2 &
    let "int++"
done
