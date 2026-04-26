#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <fmt/format.h>
#include <iostream>

int main()
{
    auto screen = ftxui::Screen::Create(
        ftxui::Dimension::Full(),
        ftxui::Dimension::Fixed(10)
    );

    fmt::println("Got screen size: [{} X {}]", screen.dimx(), screen.dimy());

    auto& topleft = screen.PixelAt(0, 0);

    topleft.character = "X";
    topleft.bold = true;
    topleft.foreground_color = ftxui::Color::Blue;
    topleft.background_color = ftxui::Color::Red;

    screen.Print();
}
