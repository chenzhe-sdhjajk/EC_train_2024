# CAN通讯和PID控制  
## CAN
这次任务让我对can通讯有所了解，CAN 通讯是一种广泛用于汽车、工业自动化等领域的控制器局域网通讯协议。它是串行通讯，用差分信号传输，通过两根信号线的电压差表示逻辑信号，抗干扰能力强；网络拓扑常用总线型，多个节点连在总线上，同一时刻仅一个节点能发送数据；数据以数据帧为基本单位传输，数据帧包括帧起始、仲裁场等多个部分  
### PID
PID算法通过p，i，d三个参数对误差进行比例运算，积分运算和微分运算，通过这些计算给我一个合适的输出值让当前值逼近目标值，p越大接近目标速度越快，i可以帮助整个系统减小目标与实际的误差，d帮助系统更快的从超调恢复

https://github.com/user-attachments/assets/36f6dc0e-c8fa-4667-9dcc-cc3355b8d3e9



https://github.com/user-attachments/assets/0e1da316-8f3b-4a81-8a60-36f72d0e7a3a

