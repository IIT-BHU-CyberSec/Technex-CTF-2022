#!/bin/bash
docker build -t web1 .
while true;
do
docker kill web1
docker rm web1
docker run -d --name=web1 -p 0.0.0.0:1234:80 web1
sleep 300
done;