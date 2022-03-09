#!/bin/bash
docker build -t pwn1 .
while true;
do
docker kill pwn1
docker rm pwn1
docker run -d --name=pwn1 -p 0.0.0.0:2420:2420 pwn1
sleep 300
done;