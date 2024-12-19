inc_egl = include_directories('extern/glfw-master/include', 'include','src')

cpp = meson.get_compiler('cpp')
#
libdir = meson.current_source_dir() + '/extern/glfw-master/cmake-build-debug/src/'
glfw3_dep = cpp.find_library('glfw', dirs : libdir) # ./lib/libA.lib

sb7_source=files(
    'src/sb7/sb7.cpp',
    'src/sb7/sb7color.cpp',
    'src/sb7/sb7ktx.cpp',
    'src/sb7/sb7object.cpp',
    'src/sb7/sb7shader.cpp',
    'src/sb7/sb7textoverlay.cpp',
    'src/sb7/gl3w.c')
#
corefoundation = dependency('appleframeworks', modules: ['CoreFoundation'])
cocoa = dependency('appleframeworks', modules: ['Cocoa'])
iokit = dependency('appleframeworks', modules: ['IOKit'])
quartzcore = dependency('appleframeworks', modules: ['QuartzCore'])
sb7_lib = static_library(
    'libsb7',
    sb7_source,
    include_directories:[inc_egl],
    dependencies: [corefoundation, cocoa, iokit, quartzcore,glfw3_dep],
)


examples=[
    'alienrain', 'basicfbo', 'bindlesstex', 'blendmatrix', 'blinnphong', 'bumpmapping', 'clipdistance', 'csflocking', 'compressrgtc', 'cubemapenv', 'cubicbezier', 'cullindirect', 'deferredshading', 'depthclamp', 'dflandscape', 'dispmap', 'dof', 'envmapsphere', 'equirectangular', 'fontdemo', 'fragcolorfrompos', 'fragmentlist', 'grass', 'gsculling', 'gslayered', 'gsquads', 'gstessellate', 'hdrbloom', 'hdrexposure', 'hdrtonemap', 'hqfilter', 'indexedcube', 'indirectmaterial', 'instancedattribs', 'julia', 'ktxview', 'linesmooth', 'mirrorclampedge', 'movingtri', 'msaanative', 'multidrawindirect', 'multiscissor', 'multiviewport', 'noperspective', 'normalviewer', 'objectexploder', 'ompparticles', 'packetbuffer', 'perpixelgloss', 'phonglighting', 'polygonsmooth', 'prefixsum', 'pmbfractal', 'pmbstreaming', 'prefixsum2d', 'programinfo', 'raytracer', 'rimlight', 'sampleshading', 'sdfdemo', 'shadowmapping', 'shapedpoints', 'simpleclear', 'simpletexcoords', 'simpletexture', 'singlepoint', 'singletri', 'sparsetexture', 'spinnycube', 'springmass', 'ssao', 'starfield', 'stereo', 'subroutines', 'tessellatedcube', 'tessellatedgstri', 'tessellatedtri', 'tessmodes', 'tesssubdivmodes', 'toonshading', 'tunnel', 'wrapmodes'
]
#dep_libGL = dependency('libGL', version : '= 1.2.0', required : true)
foreach example : examples
    executable(
        example,
        ['src/@0@/@0@.cpp'.format(example)],
        include_directories:[inc_egl,include_directories('extern/glfw-master/include')],
        link_with:[sb7_lib,libgl],
        link_args: ['-Wl,-rpath,/Users/lin/Desktop/Project/opengL/mesa/buildDir/src/glx'],
        dependencies:[glfw3_dep],
        install:true,
        install_dir:'extern/glfw-master/bin'
        )
endforeach


