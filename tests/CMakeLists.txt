add_executable( test_screen test_screen.cpp )
target_link_libraries( test_screen PRIVATE
  ftxui::screen
  ftxui::dom
  ftxui::component
  fmt::fmt)
