if(DEFINED BOSON_FOUND)
  return()
endif()
set(BOSON_FOUND FALSE)

set(BOSON_INCLUDE_DIRS "/usr/local/boson/include")
set(BOSON_LIBRARY_DIR "/usr/local/boson/lib")

find_library(BOSON_LIBRARY_CLIENT libbosonclient.so
  HINTS ${BOSON_ROOT} ${BOSON_BUILD} ${BOSON_LIBRARY_DIR}
  PATH_SUFFIXES lib lib64 lib/x64 /usr/lib/aarch64-linux-gnu)
find_library(BOSON_LIBRARY_EMULATOR libuarthalfduplex32.so
  HINTS  ${BOSON_ROOT} ${BOSON_BUILD} ${BOSON_LIBRARY_DIR}
  PATH_SUFFIXES lib lib64 lib/x64 /usr/lib/aarch64-linux-gnu)

set(BOSON_LIBRARIES
  ${BOSON_LIBRARY_CLIENT}
  ${BOSON_LIBRARY_EMULATOR})

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(BOSON
  REQUIRED_VARS
  BOSON_INCLUDE_DIRS
  BOSON_LIBRARIES)


if(BOSON_INCLUDE_DIRS)
  if(LINK_SHARED_BOSON)
    set(BOSON_STATIC_DEPENDENCIES_SEARCH OFF)
  else()
    set(BOSON_STATIC_DEPENDENCIES_SEARCH TRUE)
  endif()
endif()

if(NOT BOSON_FOUND)
  message(ERROR "Cannot find BOSON include or library.")
endif()
