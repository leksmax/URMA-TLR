#!/bin/sh

# set -x
# Start the cloud daemon

start() {
	cloud -d
}

stop () {
	killall cloud
}

case "${1}" in
start)
	start
	;;
stop)
	stop
	;;
restart|force-reload)
	stop
	start
	;;
*)
	echo "Usage: $0 {start|stop|restart|force-reload}"
	exit 1
	;;
esac
exit $?