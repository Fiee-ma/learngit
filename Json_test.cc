#include <iostream>
#include "jsoncpp/json/json.h"
#include "jsoncpp/json/value.h"
#include "jsoncpp/json/writer.h"

using namespace std;

int main() {
    Json::Value json_temp;      // 临时对象，供如下代码使用

    json_temp["name"] = Json::Value("huchao");

    json_temp["age"] = Json::Value(26);

    Json::Value root;  // 表示整个 json 对象

    root["key_string"] = Json::Value("value_string");         // 新建一个 Key（名为：key_string），赋予字符串值："value_string"。

    root["key_number"] = Json::Value(12345);            // 新建一个 Key（名为：key_number），赋予数值：12345。

    root["key_boolean1"] = Json::Value(false);              // 新建一个 Key（名为：key_boolean），赋予bool值：false。

    root["key_double"] = Json::Value(12.345);            // 新建一个 Key（名为：key_double），赋予 double 值：12.345。

    root["key_object"] = json_temp;                           // 新建一个 Key（名为：key_object），赋予 json::Value 对象值。

    root["key_array"].append("array_string");             // 新建一个 Key（名为：key_array），类型为数组，对第一个元素赋值为字符串："array_string"。

    root["key_array"].append(1234);                           // 为数组 key_array 赋值，对第二个元素赋值为：1234。

    Json::ValueType type = root.type();                       // 获得 root 的类型，此处为 objectValue 类型。

    Json::FastWriter fast_writer;
    Json::StyledWriter styled_writer;
    cout << styled_writer.write(root) << endl;

    // 测试rebase123


    // 再再再次测试dev_2
}
