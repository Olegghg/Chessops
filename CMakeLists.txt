cmake_minimum_required(VERSION 3.10)
project(ChessGame)

set(CMAKE_CXX_STANDARD 11)

# Исходники проекта
set(SOURCES 
    src/chess.cpp
)

# Тесты
set(TEST_SOURCES
    tests/tests.cpp
)

# Директории с заголовочными файлами
include_directories(include)

# Создание библиотеки
add_library(chess_lib ${SOURCES})

# Создание исполняемого файла для тестов
add_executable(tests ${TEST_SOURCES})
target_link_libraries(tests chess_lib)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link with GTest
target_link_libraries(chess_test ${GTEST_LIBRARIES} pthread)

# Добавление цели для сборки документации
find_package(Doxygen)
if (DOXYGEN_FOUND)
    set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in)
    set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)

    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)

    add_custom_target(docs 
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM
    )
endif()

