CS205 is a c/cpp course of SUSTech. The  instructor is [Shiqi Yu](https://faculty.sustech.edu.cn/yusq/)

* [lecture](https://www.bilibili.com/video/BV1Vf4y1P7pq/?spm_id_from=333.999.0.0&vd_source=ffd7aa33c178fb1cead28a3d0df0d4d0)

* [material](https://github.com/ShiqiYu/CPP)

### Resources

[ Windows11 WSL指定路径安装 ubuntu](https://xkl.me/archives/26.html)

[GDB Documentation](https://www.sourceware.org/gdb/documentation/)

### Note

#### Building shared libraries

* Let's build a shared library
* Remember  to use arguments **"-shared"**  and **"-fPIC"** when building it
* Now we should see "libfunction.so" in the directory

```c++
g++ -shared -fPIC -o libfunction.so function.cpp
```

#### Using shared library

* Now we can use "printHello" function with the ".h" header file and the ".so" shared library

* Let's compile main again:

  ```c++
  g++ -o main -L. main.cpp -lfunction
  ```

  

* Use "-L." to tell it to find libraries in current directory
* USe "-lfunction" to tell it to use "libfunction.so".
* After the "main" has been compiled, try to run it

```c++
./main
```

* Using export command to set environment variable "LD_LIBRARY_PATH"
* AND then run "main" again

```
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
echo $LD_LIBRARY_PATH
```

