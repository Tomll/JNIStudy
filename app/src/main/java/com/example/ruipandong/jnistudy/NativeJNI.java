package com.example.ruipandong.jnistudy;

/**
 * Created by ruipan.dong on 2018/1/24.
 * 此java类：是专门用于链接并访问C、C++代码库的帮助类
 */
public class NativeJNI {

    //加载C/C++代码库, 库的名称, 必须是CMakeLists.txt中指定的名称
    static {
        System.loadLibrary("main");
    }

    //定义一个本地方法
    public static native String helloJNI();
}
