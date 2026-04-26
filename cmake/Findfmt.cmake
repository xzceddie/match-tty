include(FetchContent)

# 1. Declare the fmt library
FetchContent_Declare(
  fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG        12.1.0  # Use a specific version tag for stability
)

# 2. Download and add to the project
FetchContent_MakeAvailable(fmt)
