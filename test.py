# 画图的库
import numpy as np
import cv2

cap = cv2.VideoCapture(0)  # 实例化一个摄像头

while (True):
    ret, frame = cap.read()
    frame = cv2.flip(frame, 1)  # 为1,则不进行翻转
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    cv2.imshow('fame', frame)  # 正常彩色图
    cv2.imshow('gray', gray)  # 灰度图
    if cv2.waitKey(1) & 0xFF == ord('q'):  # 判断是否有按键x按下，如果有则退出
        break

cap.release()  # 释放摄像头
cv2.destroyAllWindows()
