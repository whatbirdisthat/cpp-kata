FROM alpine:latest

RUN apk update && apk upgrade && \
  apk add bash git git-bash-completion openssh-client g++

ENTRYPOINT /bin/bash
