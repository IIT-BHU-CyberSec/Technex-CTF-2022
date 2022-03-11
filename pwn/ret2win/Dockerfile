FROM ubuntu:20.04

RUN apt-get update
RUN apt-get install -y \
    apt-utils \ 
    build-essential \
    socat
RUN useradd -ms /bin/sh ctf
WORKDIR /home/ctf

COPY ./flag.txt ./
COPY ./ ./
COPY ./run.sh ./

RUN chown -R root:ctf /home/ctf && \
    chmod 750 /home/ctf && \
    chown root:ctf /home/ctf/flag.txt && \
    chmod 440 /home/ctf/flag.txt && \
    chmod 550 /home/ctf/chall && \
    chmod 550 /home/ctf/run.sh

EXPOSE 2430

CMD ["socat", "-T60", "TCP-LISTEN:2430,reuseaddr,fork,su=ctf", "EXEC:/home/ctf/run.sh,pty,rawer"]