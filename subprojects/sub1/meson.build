# ./subprojects/sub1/meson.build

project('sub1', 'c')

message(get_option('c_args'))

include = include_directories('./include')
lib = library('mylib',
  'mylib.c',
  include_directories: include,
  #c_args: get_option('c_args') # <-- This line makes it work
)
dep = declare_dependency(
  include_directories: include,
  link_with: lib
)

