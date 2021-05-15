#!/bin/bash

for j in {1..200}
do
    ./../srs-bench/objs/sb_rtmp_publish -i /home/jack-ma/下载/culture_1M_1920x1080.flv -c 1 -r rtmp://127.0.0.1:1935/live/livestream_${j} &
done

