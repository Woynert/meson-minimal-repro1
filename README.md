Compile and run with:

```
meson setup build -Dsub1:c_args=-DTEST && meson compile -C build && ./build/main
```

Will print: `TEST NOT defined.`.

Then uncomment this line (at ./subprojects/sub1/meson.build):

```
...
lib = library('mylib',
  'mylib.c',
  include_directories: include,
  #c_args: get_option('c_args') # <-- This line
)
...
```

And it will print: `OK. TEST defined.`
