# 当前qt版本>4时，增加widgets模块
# or 直接使用QT += widgets, 此处是为了兼容QT4
greaterThan(QT_MAJOR_VERSION, 4):QT += widgets 


