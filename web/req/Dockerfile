FROM ubuntu:20.04

EXPOSE 4000/tcp

RUN apt-get update -y && apt-get install python3-pip python3-dev -y

COPY ./requirements.txt /req/requirements.txt

WORKDIR /req

COPY . /req/

RUN pip --no-cache-dir install -r requirements.txt



ENTRYPOINT [ "python3" ]

CMD ["./manage.py", "runserver",  "0.0.0.0:4000"]
# CMD ["/bin/bash/"]
# ENTRYPOINT ["/bin/bash"]