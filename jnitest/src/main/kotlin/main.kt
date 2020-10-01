package org.fpeterek.jnitest

import java.io.File


external fun helloWorld()
external fun getAaa(len: Int): String
external fun strlen(str: String): Int

fun testBridge() {
    val bridge = Bridge()

    bridge.helloWorld()
    val aaa = bridge.getAaa(15)
    println("Length of '$aaa' is ${bridge.strlen(aaa)}")
    println(aaa)
    println(aaa.length)

    bridge.goTest()
}

fun testKt() {
    helloWorld()
    val aaa = getAaa(15)
    println("Length of '$aaa' is ${strlen(aaa)}")
    println(aaa)
    println(aaa.length)
}

fun main() {
    System.load(File("libint.so").absolutePath)
    testBridge()
}
