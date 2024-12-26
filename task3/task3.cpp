#include <fstream>
#include <iostream>
#include "json.hpp"

using json = nlohmann::json;
using namespace std;

void assignValue(json& test, const json& value) {
    int test_id = test["id"];
    int value_id = value["id"];
    if (test_id == value_id) {
        test["value"] = value["value"];
    } else if (test.contains("values")) {
        for (auto& sub_test : test["values"]) {
            assignValue(sub_test, value);
        }
    }
}

int main(int argc, char** argv) {
    if (argc < 4) {
        cerr << "Введите названия файлов!" << endl;
        return 1;
    }
    ifstream valuesFile(argv[1]);
    ifstream testsFile(argv[2]);
    ofstream reportFile(argv[3]);
    json values, tests, report;
    valuesFile >> values;
    testsFile >> tests;
    for (auto& test : tests["tests"]) {
        for (auto& value : values["values"]) {
            assignValue(test, value);
        }
    }
    report["tests"] = tests["tests"];
    reportFile << report.dump(2) << endl;
    valuesFile.close();
    testsFile.close();
    reportFile.close();
    cout << "Файл report.json успешно создан" << endl;
    return 0;
}