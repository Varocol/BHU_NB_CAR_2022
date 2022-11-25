# CMake 最低版本号要求
cmake_minimum_required(VERSION 3.0.0)

# 项目信息
project(BHU_NB_CAR_2022 VERSION 0.1.0)

# 设置变量
set(SRC_DIR src)
set(LIB_DIR lib)
set(SOURCE)
set(EXTERNAL_LIBRARIES)
set(LIBRARIES)

# 设置有效文件扩展名
set(FILE_EXPAND *.c *.cpp *.h)

function(DIR_INFO DIR_PATH)
    get_filename_component(dir_name ${DIR_PATH} NAME)
    message(STATUS ${dir_name})
    list(TRANSFORM FILE_EXPAND PREPEND ${DIR_PATH}/ OUTPUT_VARIABLE FILES_EXPAND)
    file(GLOB dir_files ${FILES_EXPAND})
    foreach(temp ${dir_files})
        get_filename_component(temp1 ${temp} NAME)
        message(STATUS "  |${temp1}")
    endforeach()
    SET(DIR_NAME ${dir_name} PARENT_SCOPE)
    SET(DIR_FILES ${dir_files} PARENT_SCOPE)
endfunction(DIR_INFO)

# 如果没有src和lib文件夹则生成
message(STATUS "----------PROJECT----------")
message(STATUS "CHECK DIRECTORIES")
if(EXISTS ${PROJECT_SOURCE_DIR}/${LIB_DIR})
    message(STATUS "SRC DIRECTORY EXISTS")
else()
    message(STATUS "CREATING SRC DIRECTORY...")
    file(MAKE_DIRECTORY ${SRC_DIR})
endif()

if(EXISTS ${PROJECT_SOURCE_DIR}/${LIB_DIR})
    message(STATUS "LIB DIRECTORY EXISTS")  
else()
    message(STATUS "CREATING LIB DIRECTORY...")
    file(MAKE_DIRECTORY ${LIB_DIR})
endif()

# 搜索src目录下的所有文件
message(STATUS "----------SOURCE----------")
# 输出当前目录的信息
DIR_INFO(${SRC_DIR})
# 链接到SOURCE
list(APPEND SOURCE ${DIR_FILES})

# 搜索lib目录下的所有文件
message(STATUS "----------LIBRARY----------")
# # 添加该文件夹下的文件并添加到总库
# DIR_INFO(${LIB_DIR})
# # 添加到链接库总表
# list(APPEND LIBRARIES ${DIR_FILES})

# 搜索lib目录下的所有子目录文件
file(GLOB directories LIST_DIRECTORIES true ${LIB_DIR}/*)
foreach(temp ${directories})
    if(IS_DIRECTORY ${temp})
        # 输出当前目录的信息
        DIR_INFO(${temp})
        list (LENGTH DIR_FILES length)
        # 如果有文件
        if(${length})
            # 生成链接库
            add_library(${DIR_NAME} ${DIR_FILES})
            # 链接到LIBRARIES
            list(APPEND LIBRARIES ${DIR_NAME})
            # 将文件夹加入到DIRECTOIES
            include_directories(${temp})
        endif()
    endif()
endforeach()

# 包含目录
include_directories(${SRC_DIR})
include_directories(${LIB_DIR})

# 查找外部库 
unset(pigpio CACHE)
unset(rt CACHE)
unset(pthread CACHE)
find_library(pigpio NAMES pigpio REQUIRED)
find_library(rt NAMES rt REQUIRED)
find_library(pthread NAMES pthread REQUIRED)
list(APPEND EXTERNAL_LIBRARIES ${pigpio} ${rt} ${pthread})

# 指定生成目标
add_executable(${PROJECT_NAME} ${SOURCE})

# 链接总库
target_link_libraries(${PROJECT_NAME} ${LIBRARIES} ${EXTERNAL_LIBRARIES})