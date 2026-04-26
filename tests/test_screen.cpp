#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <iostream>

int main()
{
    auto screen = ftxui::Screen::Create(
        ftxui::Dimension::Full(),
        ftxui::Dimension::Fixed(10)
    );

    auto& topleft = screen.PixelAt(0, 0);

    topleft.character = "X";
    topleft.foreground_color = ftxui::Color::Blue;
    topleft.background_color = ftxui::Color::Yellow;

    screen.Print();
}
