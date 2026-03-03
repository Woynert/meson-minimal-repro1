# ./meson.build

project('proj', 'c')

sub = subproject('sub1')
dep = sub.get_variable('dep')

executable('main', 'main.c', dependencies : [ dep ])
