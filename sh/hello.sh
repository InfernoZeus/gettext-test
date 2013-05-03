#!/bin/bash

CWD="$(pwd)"
TARGET="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )/../lang/"
LANG_DIR=$(python -c "import os.path; print os.path.relpath(\"$TARGET\", \"$CWD\")")

printf "TEXTDOMAINDIR=%s LC_ALL=en_US gettext hello \"Hello, world\":\n" $LANG_DIR
TEXTDOMAINDIR=$LANG_DIR LC_ALL=en_US gettext hello "Hello, world"
printf "\n"
printf "TEXTDOMAINDIR=%s LC_ALL=it_IT gettext hello \"Hello, world\":\n" $LANG_DIR
TEXTDOMAINDIR=$LANG_DIR LC_ALL=it_IT gettext hello "Hello, world"
printf "\n"
printf "TEXTDOMAINDIR=%s LC_ALL=en_IN gettext hello \"Hello, world\":\n" $LANG_DIR
TEXTDOMAINDIR=$LANG_DIR LC_ALL=en_IN gettext hello "Hello, world"
printf "\n"
