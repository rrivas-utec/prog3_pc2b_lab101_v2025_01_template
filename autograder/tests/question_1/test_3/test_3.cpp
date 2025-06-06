//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "geo_map.h"
using namespace std;

static void test_3() {
    GeoMap g(".", "mapa_3.txt");
    g.run("section_3");
    std::ifstream file("mapa_3.txt");
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
}

TEST_CASE("Question #1.3") {
    execute_test("question_1_test_3.in", test_3);
}