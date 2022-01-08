package com.ramadan.nativecpp

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.TextView
import com.ramadan.nativecpp.databinding.ActivityMainBinding
import android.widget.Spinner

import android.widget.EditText
import java.util.regex.Pattern
import android.R
import android.widget.ArrayAdapter
import com.google.android.material.internal.ContextUtils.getActivity


class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding
    val store = Store()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)


//       // binding.sampleText.text = store.stringFromJNI()
       // binding.sampleText.text = String.format("count is %d",store.getCount())
        callNativeMethods()
    }

    private fun callNativeMethods() {
        val a = 10
        val b = 100
        var c: Int = store.nativeAddition(a, b)
        binding.sampleText.text = "$a+$b=$c"
        c = store.nativeMultiplication(a, b)
        binding.sampleText.append(
            """
        
            ${a}x$b=$c
            """.trimIndent()
        )
    }
}

