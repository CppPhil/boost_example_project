cmake_minimum_required(VERSION 4.1)

set(VCPKG_HOME "$ENV{VCPKG_ROOT}")
string(REPLACE "\\" "/" VCPKG_HOME "${VCPKG_HOME}")
set(CMAKE_TOOLCHAIN_FILE "${VCPKG_HOME}/scripts/buildsystems/vcpkg.cmake")

project(boost_example_project)

set(CMAKE_CXX_STANDARD 23)
set(CMAXE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

find_package(
  Boost REQUIRED
  COMPONENTS atomic
             chrono
             container
             context
             coroutine
             date_time
             exception
             fiber
             filesystem
             graph
             iostreams
             locale
             log
             log_setup
             nowide
             program_options
             random
             regex
             serialization
             stacktrace_noop
             system
             thread
             timer
             type_erasure
             unit_test_framework
             wave
             wserialization)

add_executable(application src/main.cpp)

target_link_libraries(
  application
  PRIVATE Boost::headers
          Boost::atomic
          Boost::chrono
          Boost::container
          Boost::context
          Boost::coroutine
          Boost::date_time
          Boost::exception
          Boost::fiber
          Boost::filesystem
          Boost::graph
          Boost::iostreams
          Boost::locale
          Boost::log
          Boost::log_setup
          Boost::nowide
          Boost::program_options
          Boost::random
          Boost::regex
          Boost::serialization
          Boost::stacktrace_noop
          Boost::system
          Boost::thread
          Boost::timer
          Boost::type_erasure
          Boost::unit_test_framework
          Boost::wave
          Boost::wserialization)
