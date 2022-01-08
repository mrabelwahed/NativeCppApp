package com.ramadan.nativecpp

class Store {
    companion object{
        init {

            //there are two ways to load the compiled lib
            System.loadLibrary("nativecpp")
           // System.load("/data/data/com.ramadan.nativecpp/lib/libnativecpp.so")
        }
    }

    external fun stringFromJNI(): String
    external fun getCount():Int
    external fun nativeAddition(a :Int , b:Int):Int
    external fun nativeMultiplication(a :Int , b:Int):Int
}