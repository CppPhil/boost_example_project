cmake_minimum_required(VERSION 3.8)

project(boost_example_project)

set(CMAKE_CXX_STANDARD 20)
set(CMAXE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

find_package(
  Boost
  ${BOOST_VERSION_TO_USE} EXACT REQUIRED
  COMPONENTS
  atomic
  chrono
  container
  context
  coroutine
  date_time
  exception
  fiber
  filesystem
  graph
  graph_parallel
  headers
  iostreams
  locale
  log
  log_setup
  math_c99
  math_c99f
  math_c99l
  math_tr1
  math_tr1f
  math_tr1l
  mpi
  mpi_python
  nowide
  numpy
  prg_exec_monitor
  program_options
  python
  random
  regex
  serialization
  stacktrace_addr2line
  stacktrace_backtrace
  stacktrace_basic
  stacktrace_noop
  system
  test_exec_monitor
  thread
  timer
  type_erasure
  unit_test_framework
  wave
  wserialization)

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
