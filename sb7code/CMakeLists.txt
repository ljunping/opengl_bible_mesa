cmake_minimum_required (VERSION 2.6)
project (superbible7)
if(CMAKE_CL_64)    #CMAKE的内建变量，如果是true，就说明编译器的64位的，自然可以编译64bit的程序
    set(ADDRESS_MODEL 64)
    set(NODE_TARGET x64)
else()
    set(ADDRESS_MODEL 64)
    set(NODE_TARGET arm64)
endif()

set(GLEW_H /opt/homebrew/Cellar/glew/2.2.0_1/include)
set(GLFW_H /opt/homebrew/Cellar/glfw/3.4/include)
include_directories(${GLEW_H} ${GLFW_H})

set(GLEW_LINK /opt/homebrew/Cellar/glew/2.2.0_1/lib/libGLEW.2.2.dylib)
set(GLFW_LINK /opt/homebrew/Cellar/glfw/3.4/lib/libglfw.3.dylib)
link_libraries(${OPENGL} ${GLEW_LINK} ${GLFW_LINK})

LINK_DIRECTORIES( ${CMAKE_SOURCE_DIR}/lib )
#include_directories(E:/Project/opengL/mesa-19.1.5/include)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Second, for multi-config builds (e.g. msvc)
foreach( OUTPUTCONFIG ${CMAKE_CONFIGURATION_TYPES} )
    string( TOUPPER ${OUTPUTCONFIG} OUTPUTCONFIG )
    set( CMAKE_RUNTIME_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${CMAKE_SOURCE_DIR}/bin )
    set( CMAKE_LIBRARY_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${CMAKE_SOURCE_DIR}/lib )
    set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY_${OUTPUTCONFIG} ${CMAKE_SOURCE_DIR}/lib )
endforeach( OUTPUTCONFIG CMAKE_CONFIGURATION_TYPES )



#find_library(OPENGL_gl_LIBRARY NAMES OpenGL hint ${SELF_OPENGL})

find_package(OpenGL)

set (CMAKE_DEBUG_POSTFIX "_d")
set(COMMON_LIBS sb7 ${GLFW_LIBRARIES} ${OPENGL_LIBRARIES})

#if(WIN32)
#
#set(COMMON_LIBS sb7 optimized glfw3 debug glfw3_d opengl32_d)
#
#elseif (UNIX)
#find_package(PkgConfig REQUIRED)
#pkg_check_modules(GLFW REQUIRED glfw3)
#set(COMMON_LIBS sb7 glfw3 X11 Xrandr Xinerama Xi Xxf86vm Xcursor GL rt dl)
#else()
#set(COMMON_LIBS sb7)
#endif()

set(COMMON_LIBS ${COMMON_LIBS} ${EXTRA_LIBS})

add_library(sb7
            src/sb7/sb7.cpp
            src/sb7/sb7color.cpp
            src/sb7/sb7ktx.cpp
            src/sb7/sb7object.cpp
            src/sb7/sb7shader.cpp
            src/sb7/sb7textoverlay.cpp
            src/sb7/gl3w.c
)

set(RUN_DIR ${PROJECT_SOURCE_DIR}/bin)

set(EXAMPLES
  alienrain
  basicfbo
  bindlesstex
  blendmatrix
  blinnphong
  bumpmapping
  clipdistance
  csflocking
  compressrgtc
  cubemapenv
  cubicbezier
  cullindirect
  deferredshading
  depthclamp
  dflandscape
  dispmap
  dof
  envmapsphere
  equirectangular
  fontdemo
  fragcolorfrompos
  fragmentlist
  grass
  gsculling
  gslayered
  gsquads
  gstessellate
  hdrbloom
  hdrexposure
  hdrtonemap
  hqfilter
  indexedcube
  indirectmaterial
  instancedattribs
  julia
  ktxview
  linesmooth
  mirrorclampedge
  movingtri
  msaanative
  multidrawindirect
  multiscissor
  multiviewport
  noperspective
  normalviewer
  objectexploder
  ompparticles
  packetbuffer
  perpixelgloss
  phonglighting
  polygonsmooth
  prefixsum
  pmbfractal
  pmbstreaming
  prefixsum2d
  programinfo
  raytracer
  rimlight
  sampleshading
# sb6mrender
  sdfdemo
  shadowmapping
  shapedpoints
  simpleclear
  simpletexcoords
  simpletexture
  singlepoint
  singletri
  sparsetexture
  spinnycube
  springmass
  ssao
  starfield
  stereo
  subroutines
  tessellatedcube
  tessellatedgstri
  tessellatedtri
  tessmodes
  tesssubdivmodes
  toonshading
  tunnel
  wrapmodes
)

find_package(OpenMP)
if (OPENMP_FOUND)
    set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
endif()

foreach(EXAMPLE ${EXAMPLES})
  add_executable(${EXAMPLE} WIN32 src/${EXAMPLE}/${EXAMPLE}.cpp)
#  add_executable(${EXAMPLE} src/${EXAMPLE}/${EXAMPLE}.cpp) #控制台程序入口
  set_property(TARGET ${EXAMPLE} PROPERTY DEBUG_POSTFIX _d)
  target_link_libraries(${EXAMPLE} ${COMMON_LIBS})
  target_link_libraries(${EXAMPLE} "-framework CoreFoundation")
  if(MSVC)
    configure_file(${PROJECT_SOURCE_DIR}/build/templates/vs2013.vcxproj.user.in ${CMAKE_CURRENT_BINARY_DIR}/${EXAMPLE}.vcxproj.user @ONLY)
  endif(MSVC)
endforeach(EXAMPLE)

IF (${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_LINUX -std=c++0x")
ENDIF (${CMAKE_SYSTEM_NAME} MATCHES "Linux")

include_directories( include )
include_directories( src )
include_directories(extern/glfw-3.0.4/include)

ADD_CUSTOM_TARGET(debug ${CMAKE_COMMAND} -DCMAKE_BUILD_TYPE:STRING=Debug ${PROJECT_SOURCE_DIR})
ADD_CUSTOM_TARGET(release ${CMAKE_COMMAND} -DCMAKE_BUILD_TYPE:STRING=Release ${PROJECT_SOURCE_DIR})



