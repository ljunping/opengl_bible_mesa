echo "enter clear_mesa_log.sh"
current_directory=$(pwd)
log_file="$current_directory/MESA_MESSAGE_LOG.log"
echo "日志文件:"$log_file
rm $log_file
touch $log_file

