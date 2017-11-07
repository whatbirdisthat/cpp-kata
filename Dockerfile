FROM wbit-git

RUN apk add bash git git-bash-completion openssh-client
RUN apk add g++

ENTRYPOINT /bin/bash
