#!/bin/bash
nmcli device show | grep -i hwaddr | awk '{print $2}'
