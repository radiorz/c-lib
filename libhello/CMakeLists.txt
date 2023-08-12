# 设置最低版本要求
cmake_minimum_required(VERSION 3.16)
# 设置源文件目录路径
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC_LIST)
message(STATUS "SRC_LIST: ${SRC_LIST}")
# 添加库的源文件
add_library(hello SHARED ${SRC_LIST})
# 头文件
target_include_directories(hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/hello.h )
# 设置安装路径
include(GNUInstallDirs)
install(TARGETS hello DESTINATION ${CMAKE_INSTALL_LIBDIR})
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/hello.h DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
