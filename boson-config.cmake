if(DEFINED BOSON_FOUND)
  return()
endif()
set(BOSON_FOUND FALSE)

set(BOSON_INCLUDE_DIRS "/usr/local/boson/include")
set(BOSON_LIBRARY_DIR "/usr/local/boson/lib")

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(BOSON
  REQUIRED_VARS
  BOSON_INCLUDE_DIRS
  BOSON_LIBRARY_DIR)


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
