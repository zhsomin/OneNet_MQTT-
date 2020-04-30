# OneNet_MQTT-
基于STM32F103和ESP8266的MQTT协议应用
需要注意的部分：1.修改onenet.c下面的三个自己的产品名称，鉴权信息，设备ID
                2.ESP8266需要注意将CH_PD至高电平
                3.传输的格式分为Type3和type5型，具体读文档
                4.下发命令控制led和beep在OneNet_RevPro（）函数里面添加，如果想使用OneNet上面的应用控制的话，需要建立相应的数据流，返回当前灯的状态和蜂鸣器的状态
                5.屏蔽掉了SHT20的部分
                
