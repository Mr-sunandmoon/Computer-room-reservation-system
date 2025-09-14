# 机房预约系统
目标：实践该C++初级项目 机房预约系统

项目技术栈：C++ 	MySQL	 MySQL connect/c++  

### 1.项目配置：

1.windows环境下在VS2022中使用mysql connector/c++对本地数据库进行连接

2.项目配置难点为采用mysql connect/c++对MySQL数据库的连接过程中对项目中需要的以来环境的配置

参考网址：https://blog.csdn.net/hbwhypw/article/details/148299750

### 2.需求文档

![1548682206670.png](https://cdn.nlark.com/yuque/0/2025/png/49905757/1757575584836-704dd07c-51c0-49b5-8a15-b76f0653cca1.png?x-oss-process=image%2Fformat%2Cwebp)

### 3.主要功能展示

1.菜单页面

![image-20250914093005268](C:\Users\27694\AppData\Roaming\Typora\typora-user-images\image-20250914093005268.png)

2.学生申请预约

![image-20250914093200543](C:\Users\27694\AppData\Roaming\Typora\typora-user-images\image-20250914093200543.png)

3.查看预约

![image-20250914093300496](C:\Users\27694\AppData\Roaming\Typora\typora-user-images\image-20250914093300496.png)

4.教师审核预约

![image-20250914093432153](C:\Users\27694\AppData\Roaming\Typora\typora-user-images\image-20250914093432153.png)

### 3.主要数据表的设计

预约表的设计：

![](C:\Users\27694\AppData\Roaming\Typora\typora-user-images\image-20250914093608124.png)

### 4.项目总结

1.类实例化的运用

2.头文件中不能实现对函数的定义

3.避免头文件循环包含

4.注意对堆区内存的释放
