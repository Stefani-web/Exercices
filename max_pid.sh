#!/bin/bash

# Read the value of /proc/sys/kernel/pid_max
max_pid=$(cat /proc/sys/kernel/pid_max)

# Print the maximum PID value
echo "Maximum Process ID: $max_pid"
