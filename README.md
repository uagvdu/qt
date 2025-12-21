
---------------------- 
QT学习之路
---------------------- 

# qt-资料

* 技术论坛:   
一些QT分享的论坛和网站
Qt-Centre： http://www.qtcentre.org/content/
一个非常全面的外国网站，有forum、wiki、docs、blogs等
Qt-forum：http://www.qtforum.org/index.html
另一个比较有名的外国论坛

* Qt 中文论坛:  
http://www.qtcn.org/bbs/index-htm-m-area-alias-newhome.html
国内最为老牌和最为活跃的Qt中文社区，内容非常丰富。
酷享Qt 论坛： http://www.cuteqt.com/
专注于QT技术的博客与论坛，里面的内容很不错，大家可以去看看。

* Qt知识库：  
 http://www.qtkbase.com

* Qt中文网：  
http://www.qtsir.com/bbs/forum.php

* CSDN网站的Qt技术社区：  
http://qt.csdn.net/index.aspx


# qt能做什么？


## 系列
* qt creator3-qtCreator4.0.1 以及 qt5.6.1 ， 
* qt 及 qt Quick 开发实战，
* qt5编程入门---qt5.7


# 工作环境
qt-opensource-windows-x86-mingw492-5.6.1-1.exe
编译器：minGW 4.9.2 32bit(minimalist gnu for win) -是将gnu开发工具移植到win32的产物，win下的gnu工具集。
		---另一种方式则是Visual C++作为编译器。


* 构建套件选择器：
	四部分： 目标选择器（配置构建哪个项目，使用哪个qt库，debug/release版本）， 运行，调试，构建（完成项目的构建）
	
* 运行
这个安装好，已经默认配置好。

工具：
QT Linguist ---qt语言家？：加速应用程序翻译和国际化的工具。Unicode编码，应用程序支持多种语言。。
qt designer ---设计页面：跨平台的gui布局和格式构建
qt assistant ---相当于man手册， 可配置且可重新发布的文档阅读器，定制与qt应用一起发布？？？
qt creator  ---编辑器罢了。


#  Qt Quick--QML
> Qt Quick 模块是编写 QML 应用程序的标准库。
是Qt框架中用于构建动态用户界面的核心技术模块，最早于2010年在Qt 4.7版本中引入 [1]。 其核心采用QML（Qt Modeling Language）声明式编程语言，支持通过可视化设计工具和代码编写相结合的方式创建流畅的触摸式界面

* qtWidgets与qtQuick的关系?  
https://zhuanlan.zhihu.com/p/603411613

* qtWidgets， qtQuick, QML三者关系
https://zhuanlan.zhihu.com/p/634276734
https://zhuanlan.zhihu.com/p/390574390


- QML: 也是应用程序开发的一种方式，只不过其使用的方法不局限于C++编程，还能类似html那样，使用结构化语言。
qml属于新时代的产物，大概从2010年开始，和flutter/Electron等web开发框架及移动开发框架类似，为了适应各种移动端开发及动画流畅性触摸丝滑体验、充分利用和“榨干”现在的GPU性能，把CPU留出来给用户最大化发挥

- widget属于传统界面开发，和VB/VC/Delphi等拖曳控件开发类似，走CPU绘制，能最大化的兼容现有的硬件和过去的相对偏低性能的硬件
widget主要集中在金融、军工、安防、航天、船舶、教育等领域，qml主要集中在汽车仪表、车机、直播等领域


**“原生能力”**  指的是应用程序能够直接调用操作系统提供的API、直接访问硬件资源、以及使用本地编程语言（如C++）的所有特性，而不需要通过中间层（如浏览器或虚拟机）进行转译或封装。
非原生则指的是外地人的访问时，需要本地人进行翻译：web应用访问接口，需要浏览器进行转译，而不能直接使用系统资源。


# 2. 创建-编译-运行-发布
* 项目：
	.pro: 项目信息文件
	.pro.user:与用户有关的项目信息
	.ui: 

* 新建项目以及编译后的项目结构：
项目结构：
1. 工程目录：存放源码
2. 编译目录：存放编译后生成的文件，其编译目录命名：build-项目名-Desktop_Qt_5_6_1_MinGW_32bit-Debug， 内部存放的文件：
		debug			： 编译产生的中间文件
		release			： 空
		Makefile
		Makefile.DEBUG
		Makefile.RELEASE
		ui_dialog.h	

* exe运行： 单独在debug下运行exe文件会有dll找不到的问题：（D:\QT\QtSoft\5.6\mingw49_32\bin）-》编译器提供的动态库
	a. 拷贝所依赖的dll到exe为同一个目录。 
	b. 将dll的路径写到PATH环境变量中。
	
* 发布： 切换构建为release->run ,此时release就有exe了。 编译生成新的目录： build-项目名-Desktop_Qt_5_6_1_MinGW_32bit-Release
	debug下的持续和dll都比较大（包含调试信息），所以后面发布还是release。
	对于发布时所用的那几个动态库要抽时间了解下。----参考2-12 
	可使用windeployqt命令来一键打包发布: 适用于不清楚程序所依赖的文件时使用。（如果在cmd下运行该命令，需添加环境变量）

* 设置应用程序图标
	创建.ico文件(必须是图标文件，任何格式的改后缀都不行)---以及，**改图标并生效的关键是使用release编译。**
	.PRO中： RC_ICONS=my.ico

* 一个空白项目编译过程
> 1. 新建空白项目后： 只有XXX.pro文件
> 2. 使用Qmake修改pro文件。



# 问题和记录
**问1： 那我如何新增一个版本的qt库?**
	
	
# ui界面
窗口部件模式
信号/槽编辑模式
伙伴编辑模式
Tab顺序编辑模式




## 组件属性
注意：组件的属性有个继承关系？

组件属性介绍
* geometry: 几何（x,y,宽，高）
x,y 是在dialog布局中的坐标， dialog的左上角作为坐标原点。 即第四象限
宽度：图形宽
高度：图形高

* minimumSize: 当前组件的最小范围，（也就是说当前组件虽然受到geometry的控制，但同时也可以使用其他属性进一步进行限制)
			
* drag 拖曳

* 
	


