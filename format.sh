#!/bin/bash

# Directory containing this bash script.
readonly DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

find "$DIR/src" -type f \( -name "*.cpp" -o -name "*.hpp" -o -name "*.h" \) -exec clang-format -i {} +
find "$DIR" -type f \( -name "CMakeLists.txt" \) -not \( -path "*external*" -o -path "*build*" \) -exec cmake-format -i {} +
exit 0

