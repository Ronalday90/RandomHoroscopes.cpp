#include <iostream>
#include <string>
#include <time.h>

std::string getHoroscope(std::string sign) {
    std::string horoscope;
    if (sign == "Aries") {
        horoscope = "You will have a productive day at work. Take advantage of opportunities that come your way.";
    } else if (sign == "Taurus") {
        horoscope = "You will have a lucky day in financial matters. Trust your instincts when making decisions.";
    } else if (sign == "Gemini") {
        horoscope = "You will have a fulfilling day in your personal relationships. Show your loved ones how much they mean to you.";
    } else if (sign == "Cancer") {
        horoscope = "You will have a day filled with good luck and positive energy. Take risks and chase your dreams.";
    } else if (sign == "Leo") {
        horoscope = "You will have a day of self-discovery. Reflect on your past and plan for your future.";
    } else if (sign == "Virgo") {
        horoscope = "You will have a successful day in your career. Keep pushing forward and you will reach your goals.";
    } else if (sign == "Libra") {
        horoscope = "You will have a peaceful day in your personal life. Take time to relax and recharge.";
    } else if (sign == "Scorpio") {
        horoscope = "You will have a transformative day. Embrace change and let go of what no longer serves you.";
    } else if (sign == "Sagittarius") {
        horoscope = "You will have a day filled with adventure and excitement. Step out of your comfort zone and try new things.";
    } else if (sign == "Capricorn") {
        horoscope = "You will have a productive day in your career. Stay focused and disciplined to achieve your goals.";
    } else if (sign == "Aquarius") {
        horoscope = "You will have a day of inspiration and creativity. Trust your unique ideas and share them with the world.";
    } else if (sign == "Pisces") {
        horoscope = "You will have a day of emotional healing. Take time to process your feelings and let go of what no longer serves you.";
    } else {
        horoscope = "Invalid zodiac sign. Please enter a valid sign.";
    }
    return horoscope;
}

int main() {
    std::string sign;
    std::cout << "Welcome to the Horoscope Generator!" << std::endl;
    std::cout << "Please enter your zodiac sign: ";
    std::cin >> sign;
    std::cout << "Your horoscope for today is: " << std::endl;
    std::cout << getHoroscope(sign) << std::endl;
    return 0;
}
