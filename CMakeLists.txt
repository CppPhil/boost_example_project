cmake_minimum_required(VERSION 3.25)

project(boost_example_project)

set(CMAKE_CXX_STANDARD 20)
set(CMAXE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

set(Boost_USE_STATIC_LIBS ON)
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
  nowide
  prg_exec_monitor
  program_options
  random
  regex
  serialization
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
  Boost::nowide
  Boost::prg_exec_monitor
  Boost::program_options
  Boost::random
  Boost::regex
  Boost::serialization
  Boost::stacktrace_noop
  Boost::system
  Boost::test_exec_monitor
  Boost::thread
  Boost::timer
  Boost::type_erasure
  Boost::unit_test_framework
  Boost::wave
  Boost::wserialization)
