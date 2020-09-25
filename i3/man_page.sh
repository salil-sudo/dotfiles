#!/bin/bash

 find /usr/share/man/man1/ -type f | shuf | awk
| sed 's/.gz//g' | head -1 | xargs st -e man

