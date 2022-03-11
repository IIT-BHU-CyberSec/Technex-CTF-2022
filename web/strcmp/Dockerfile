FROM ubuntu:20.04

RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y \
    apache2 \
    php \
    nano \
    && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*

COPY admin /var/www/html/admin

RUN chown www-data:www-data -R /var/www/html && \
    rm /var/www/html/index.html

EXPOSE 80

COPY main.sh /
ENTRYPOINT ["/main.sh"]