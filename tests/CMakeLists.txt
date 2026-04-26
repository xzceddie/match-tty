add_library( ftxui-interface INTERFACE )
target_link_libraries( ftxui-interface INTERFACE
  ftxui::screen
  ftxui::dom
  ftxui::component
  fmt::fmt
)


add_executable( test_screen test_screen.cpp )
target_link_libraries( test_screen PRIVATE ftxui-interface )

add_executable( test_dom test_dom.cpp )
target_link_libraries( test_dom PRIVATE ftxui-interface )
