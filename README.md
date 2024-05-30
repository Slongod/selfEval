# selfEval
OI 比赛样例自测工具

# 安装方法
- 下载 ```selfEval.cpp```。在其目录下执行 ```g++ ./selfEval.cpp -o selfEval -static```
- 执行 ```sudo cp ./selfEval /usr/bin```
- 执行 ```sudo chmod a+x /usr/bin/selfEval```
- 删除当前目录下的残留文件（```selfEval.cpp``` 和 ```selfEval```）

# 食用方法
记程序名为 prob。

- 自行编译程序，并确保开启 ```freopen``` 或同等状物，令输入输出的文件名均于题目相同，如 ```prob.in```，```prob.out```。
- 将样例放入程序目录，并命名为程序名+编号，如```prob1.in```，```prob2.ans```。
- 运行 selfEval，并填写程序名，输入拓展名，输出拓展名，答案拓展名，如```prob```，```.in```，```.out```，```.ans```。
- selfEval 将在控制台输出结果。
