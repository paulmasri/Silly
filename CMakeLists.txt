cmake_minimum_required(VERSION 3.16)

project(Silly VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)

qt_add_qml_module(CommonAnimals
    URI CommonAnimals
    VERSION 1.0
    OUTPUT_DIRECTORY CommonAnimals
    SOURCES
        Animal.h Animal.cpp
        Mammal.h Mammal.cpp
        AlsoUsesAnimal.h AlsoUsesAnimal.cpp
        Swimming.h Swimming.cpp
)

qt_add_qml_module(Bird
    URI Bird
    VERSION 1.0
    OUTPUT_DIRECTORY Bird
    SOURCES
        Penguin.h Penguin.cpp
)
target_include_directories(Bird PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Bird PRIVATE CommonAnimals)

qt_add_executable(appSilly
    main.cpp
)
qt_add_qml_module(appSilly
    URI Silly
    VERSION 1.0
    QML_FILES main.qml
)
target_include_directories(appSilly PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

target_compile_definitions(appSilly
    PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)

target_link_libraries(appSilly
    PRIVATE Qt6::Quick
        Bird
        CommonAnimals
)
