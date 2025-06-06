//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "geo_map.h"
using namespace std;

static void test_2() {
    GeoMap g(".", "mapa_2.txt");
    g.run("section_2");
    std::ifstream file("mapa_2.txt");
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
}

TEST_CASE("Question #1.2") {
    execute_test("question_1_test_2.in", test_2);
}