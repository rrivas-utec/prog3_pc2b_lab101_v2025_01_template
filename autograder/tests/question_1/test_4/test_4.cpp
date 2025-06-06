//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "geo_map.h"
using namespace std;

static void test_4() {
    GeoMap g(".", "mapa_4.txt");
    g.run("section_4");
    std::ifstream file("mapa_4.txt");
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
}

TEST_CASE("Question #1.4") {
    execute_test("question_1_test_4.in", test_4);
}