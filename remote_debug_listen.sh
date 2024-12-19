export DEBUGNAME='basicfbo'
alias setev='LD_LIBRARY_PATH=/usr/local/lib/aarch64-linux-gnu/:$LD_LIBRARY_PATH;killall $DEBUGNAME;cd /home/parallels/Downloads/Project/mesa/buildDir/sb7code'
alias listen='gdbserver :1234 ./$DEBUGNAME'
setev
listen