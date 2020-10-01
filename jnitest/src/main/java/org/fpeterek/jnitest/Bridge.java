package org.fpeterek.jnitest;

public class Bridge {
    public native void helloWorld();
    public native int strlen(String str);
    public native String getAaa(int len);
    public native void goTest();
}
