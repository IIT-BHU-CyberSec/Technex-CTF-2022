#!/bin/bash
docker build -t pwn2 .
while true;
do
docker kill pwn2
docker rm pwn2
docker run -d --name=pwn2 -p 0.0.0.0:2430:2430 pwn2
sleep 300
done;