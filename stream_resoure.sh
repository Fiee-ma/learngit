#!/bin/bash

value=800
i=1
url="rtsp://172.16.10.19:1554/live/livestream"
while(($i<=$value))
do
    if [ $i -eq $value ]
    then
        printf        "{\n"
        printf                "\t\"id\": \"test${i}\",\n"
        printf                "\t\"type\": \"rtsp\",\n"
        printf                "\t\"level\": \"main\",\n"
        printf                "\t\"url\": \"${url}\",\n"
        printf                "\t\"from\": \"config\"\n"
        printf        "}"
    else
        printf        "{\n"
        printf                "\t\"id\": \"test${i}\",\n"
        printf                "\t\"type\": \"rtsp\",\n"
        printf                "\t\"level\": \"main\",\n"
        printf                "\t\"url\": \"${url}\",\n"
        printf                "\t\"from\": \"config\"\n"
        printf        "},\n"
    fi
    let "i++"
done
