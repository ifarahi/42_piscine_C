#!/bin/sh
Ldapsearch -Q "(uid=z*)" | grep "cn:" |sort --ignore-case |cut -c5-
