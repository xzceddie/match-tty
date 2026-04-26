FetchContent_Declare(
  FTXUI
  URL https://github.com/ArthurSonzogni/FTXUI/archive/refs/tags/v6.1.9.tar.gz
)


find_package(Threads REQUIRED)

FetchContent_MakeAvailable( FTXUI )
