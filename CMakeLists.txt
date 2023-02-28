cmake_minimum_required(VERSION 3.25)

project(boost_example_project)

set(CMAKE_CXX_STANDARD 20)
set(CMAXE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

find_package(
  Boost
  ${BOOST_VERSION_TO_USE} EXACT REQUIRED
  COMPONENTS
  chrono
  context
  filesystem
  graph
  graph_parallel
  iostreams
  locale
  log
  log_setup
  mpi
  program_options
  regex
  serialization
  thread
  timer
  wave)

add_executable(
  application
  src/main.cpp)

target_link_libraries(
  application
  PRIVATE
  Boost::headers
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
  Boost::graph_parallel
  Boost::iostreams
  Boost::locale
  Boost::log
  Boost::log_setup
  Boost::math_c99
  Boost::math_c99f
  Boost::math_c99l
  Boost::math_tr1
  Boost::math_tr1f
  Boost::math_tr1l
  Boost::mpi
  Boost::mpi_python
  Boost::nowide
  Boost::numpy
  Boost::prg_exec_monitor
  Boost::program_options
  Boost::python
  Boost::random
  Boost::regex
  Boost::serialization
  Boost::stacktrace_addr2line
  Boost::stacktrace_backtrace
  Boost::stacktrace_basic
  Boost::stacktrace_noop
  Boost::system
  Boost::test_exec_monitor
  Boost::thread
  Boost::timer
  Boost::type_erasure
  Boost::unit_test_framework
  Boost::wave
  Boost::wserialization)
