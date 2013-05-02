#!/bin/bash

printf "TEXTDOMAINDIR=. LC_ALL=en_US gettext hello \"Hello, world\":\n"
TEXTDOMAINDIR=. LC_ALL=en_US gettext hello "Hello, world"
printf "\n"
printf "TEXTDOMAINDIR=. LC_ALL=it_IT gettext hello \"Hello, world\":\n"
TEXTDOMAINDIR=. LC_ALL=it_IT gettext hello "Hello, world"
printf "\n"
printf "TEXTDOMAINDIR=. LC_ALL=en_IN gettext hello \"Hello, world\":\n"
TEXTDOMAINDIR=. LC_ALL=en_IN gettext hello "Hello, world"
printf "\n"
