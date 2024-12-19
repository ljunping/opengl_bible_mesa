
alias m2="grep 'Message' setup.log> DEBUG.log"

m1() {
    meson setup build"$1" > setup.log 2>&1
    grep 'Message' setup.log > DEBUG.log
}
