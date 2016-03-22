#include "TextReader.hpp"
#include <iostream>

using namespace std;
int main(int argc, char* argv[]) {

TextReader SSB;
SSB.ReadFile(st(argv[1]));
SSB.ReadVariables();

cout << "SSB.PrintoutVariables()" << endl << endl;
SSB.PrintoutVariables();

cout << endl << endl;
cout << "SSB.Check(\"no_value_test\") = " << SSB.Check("no_value_test") << endl;
cout << "SSB.Check(\"flaot_array_test1\") = " << SSB.Check("flaot_array_test1") << endl;
cout << "SSB.Check(\"int_test1\") = " << SSB.Check("int_test1") << endl << endl;

cout << "SSB.CheckNumber(\"int_array_test1\") = " << SSB.CheckNumber("int_array_test1") << endl;
cout << "SSB.CheckNumber(\"int_test1\") = " << SSB.CheckNumber("int_test1") << endl;
cout << "SSB.CheckNumber(\"text_array_test1\") = " << SSB.CheckNumber("text_array_test1") << endl;
cout << "SSB.CheckNumber(\"text_test1\") = " << SSB.CheckNumber("text_test1") << endl << endl;

cout << "SSB.CheckText(\"int_array_test1\") = " << SSB.CheckText("int_array_test1") << endl;
cout << "SSB.CheckText(\"int_test1\") = " << SSB.CheckText("int_test1") << endl;
cout << "SSB.CheckText(\"text_array_test1\") = " << SSB.CheckText("text_array_test1") << endl;
cout << "SSB.CheckText(\"text_test1\") = " << SSB.CheckText("text_test1") << endl << endl;

cout << "SSB.CheckArray(\"int_array_test1\") = " << SSB.CheckArray("int_array_test1") << endl;
cout << "SSB.CheckArray(\"int_test1\") = " << SSB.CheckArray("int_test1") << endl;
cout << "SSB.CheckArray(\"text_array_test1\") = " << SSB.CheckArray("text_array_test1") << endl;
cout << "SSB.CheckArray(\"text_test1\") = " << SSB.CheckArray("text_test1") << endl << endl;

cout << "SSB.Size(\"no_value_test\") = " << SSB.Size("no_value_test") << endl;
cout << "SSB.Size(\"int_test1\") = " << SSB.Size("int_test1") << endl;
cout << "SSB.Size(\"int_array_test3\") = " << SSB.Size("int_array_test3") << endl;
cout << "SSB.Size(\"float_array_test2\") = " << SSB.Size("float_array_test2") << endl << endl;

cout << "SSB.GetNumber(\"no_value_test\") = " << SSB.GetNumber("no_value_test") << endl;
cout << "SSB.GetNumber(\"no_value_test\",false) = " << SSB.GetNumber("no_value_test",false) << endl;
cout << "SSB.GetNumber(\"text_test1\") = " << SSB.GetNumber("text_test1") << endl;
cout << "SSB.GetNumber(\"int_test1\") = " << SSB.GetNumber("int_test1") << endl;
cout << "SSB.GetNumber(\"float_test1\") = " << SSB.GetNumber("float_test1") << endl;
cout << "SSB.GetNumber(\"text_array_test1\") = " << SSB.GetNumber("text_array_test1") << endl;
cout << "SSB.GetNumber(\"int_array_test3\") = " << SSB.GetNumber("int_array_test3") << endl;
cout << "SSB.GetNumber(\"float_array_test2\") = " << SSB.GetNumber("float_array_test2") << endl << endl;
cout << "SSB.GetNumber(\"float_array_test2\",false) = " << SSB.GetNumber("float_array_test2",false) << endl << endl;

cout << "SSB.GetNumber(\"no_value_test\",3) = " << SSB.GetNumber("no_value_test",3) << endl;
cout << "SSB.GetNumber(\"no_value_test\",3,false) = " << SSB.GetNumber("no_value_test",3,false) << endl;
cout << "SSB.GetNumber(\"text_test1\",3) = " << SSB.GetNumber("text_test1",3) << endl;
cout << "SSB.GetNumber(\"int_test1\",3) = " << SSB.GetNumber("int_test1",3) << endl;
cout << "SSB.GetNumber(\"float_test1\",3) = " << SSB.GetNumber("float_test1",3) << endl;
cout << "SSB.GetNumber(\"float_test1\",3,false) = " << SSB.GetNumber("float_test1",3,false) << endl;
cout << "SSB.GetNumber(\"text_array_test1\",2) = " << SSB.GetNumber("text_array_test1",2) << endl;
cout << "SSB.GetNumber(\"int_array_test3\",4) = " << SSB.GetNumber("int_array_test3",4) << endl;
cout << "SSB.GetNumber(\"float_array_test2\",3) = " << SSB.GetNumber("float_array_test2",3) << endl << endl;

cout << "SSB.GetNumberInt(\"no_value_test\") = " << SSB.GetNumberInt("no_value_test") << endl;
cout << "SSB.GetNumberInt(\"int_test2\") = " << SSB.GetNumberInt("int_test2") << endl;
cout << "SSB.GetNumberInt(\"int_test3\") = " << SSB.GetNumberInt("int_test3") << endl;
cout << "SSB.GetNumberInt(\"int_test4\") = " << SSB.GetNumberInt("int_test4") << endl;
cout << "SSB.GetNumberInt(\"float_test1\") = " << SSB.GetNumberInt("float_test1") << endl;
cout << "SSB.GetNumberInt(\"float_test2\") = " << SSB.GetNumberInt("float_test2") << endl;
cout << "SSB.GetNumberInt(\"float_test3\") = " << SSB.GetNumberInt("float_test3") << endl;
cout << "SSB.GetNumberInt(\"int_array_test3\",4) = " << SSB.GetNumberInt("int_array_test3",4) << endl;
cout << "SSB.GetNumberInt(\"float_array_test2\",3) = " << SSB.GetNumberInt("float_array_test2",3) << endl << endl;

cout << "SSB.GetNumberUint(\"no_value_test\") = " << SSB.GetNumberUint("no_value_test") << endl;
cout << "SSB.GetNumberUint(\"int_test2\") = " << SSB.GetNumberUint("int_test2") << endl;
cout << "SSB.GetNumberUint(\"int_test3\") = " << SSB.GetNumberUint("int_test3") << endl;
cout << "SSB.GetNumberUint(\"int_test4\") = " << SSB.GetNumberUint("int_test4") << endl;
cout << "SSB.GetNumberUint(\"float_test1\") = " << SSB.GetNumberUint("float_test1") << endl;
cout << "SSB.GetNumberUint(\"float_test2\") = " << SSB.GetNumberUint("float_test2") << endl;
cout << "SSB.GetNumberUint(\"float_test3\") = " << SSB.GetNumberUint("float_test3") << endl;
cout << "SSB.GetNumberUint(\"int_array_test3\",4) = " << SSB.GetNumberUint("int_array_test3",4) << endl;
cout << "SSB.GetNumberUint(\"float_array_test2\",3) = " << SSB.GetNumberUint("float_array_test2",3) << endl << endl;

cout << "SSB.GetNumberFloat(\"no_value_test\") = " << SSB.GetNumberFloat("no_value_test") << endl;
cout << "SSB.GetNumberFlaot(\"int_test2\") = " << SSB.GetNumberFloat("int_test2") << endl;
cout << "SSB.GetNumberFlaot(\"float_test1\") = " << SSB.GetNumberFloat("float_test1") << endl << endl;

cout << "SSB.GetNumberDouble(\"no_value_test\") = " << SSB.GetNumberDouble("no_value_test") << endl;
cout << "SSB.GetNumberDouble(\"int_test2\") = " << SSB.GetNumberDouble("int_test2") << endl;
cout << "SSB.GetNumberDouble(\"float_test1\") = " << SSB.GetNumberDouble("float_test1") << endl << endl;

cout << "SSB.GetText(\"no_value_test\") = " << SSB.GetText("no_value_test") << endl;
cout << "SSB.GetText(\"int_test1\") = " << SSB.GetText("int_test1") << endl;
cout << "SSB.GetText(\"text_test1\") = " << SSB.GetText("text_test1") << endl;
cout << "SSB.GetText(\"tab_test4\",2) = " << SSB.GetText("tab_test4",2) << endl << endl;

cout << "SSB.GetBool(\"no_value_test\") = " << SSB.GetBool("no_value_test") << endl;
cout << "SSB.GetBool(\"int_test1\") = " << SSB.GetBool("int_test1") << endl;
cout << "SSB.GetBool(\"int_test2\") = " << SSB.GetBool("int_test2") << endl;
cout << "SSB.GetBool(\"int_test3\") = " << SSB.GetBool("int_test3") << endl;
cout << "SSB.GetBool(\"int_test4\") = " << SSB.GetBool("int_test4") << endl;
cout << "SSB.GetBool(\"int_test5\") = " << SSB.GetBool("int_test5") << endl;
cout << "SSB.GetBool(\"float_test1\") = " << SSB.GetBool("float_test1") << endl;
cout << "SSB.GetBool(\"float_test2\") = " << SSB.GetBool("float_test2") << endl;
cout << "SSB.GetBool(\"float_test3\") = " << SSB.GetBool("float_test3") << endl;
cout << "SSB.GetBool(\"text_test1\") = " << SSB.GetBool("text_test1") << endl;
cout << "SSB.GetBool(\"text_test2\") = " << SSB.GetBool("text_test2") << endl;
cout << "SSB.GetBool(\"text_test3\") = " << SSB.GetBool("text_test3") << endl;
cout << "SSB.GetBool(\"text_array_test1\",1) = " << SSB.GetBool("text_array_test1",1) << endl;
cout << "SSB.GetBool(\"text_array_test2\",1) = " << SSB.GetBool("text_array_test2",1) << endl;
cout << "SSB.GetBool(\"text_array_test2\",2) = " << SSB.GetBool("text_array_test2",2) << endl;
cout << "SSB.GetBool(\"text_array_test2\",3) = " << SSB.GetBool("text_array_test2",3) << endl;
cout << "SSB.GetBool(\"text_array_test2\",4) = " << SSB.GetBool("text_array_test2",4) << endl;
cout << "SSB.GetBool(\"text_array_test3\",1) = " << SSB.GetBool("text_array_test3",1) << endl;
cout << "SSB.GetBool(\"text_array_test3\",2) = " << SSB.GetBool("text_array_test3",2) << endl;
cout << "SSB.GetBool(\"text_array_test3\",3) = " << SSB.GetBool("text_array_test3",3) << endl;
cout << "SSB.GetBool(\"text_array_test3\",4) = " << SSB.GetBool("text_array_test3",4) << endl;
cout << "SSB.GetBool(\"text_array_test4\",1) = " << SSB.GetBool("text_array_test4",1) << endl;
cout << "SSB.GetBool(\"text_array_test4\",2) = " << SSB.GetBool("text_array_test4",2) << endl;
cout << "SSB.GetBool(\"text_array_test4\",3) = " << SSB.GetBool("text_array_test4",3) << endl;
cout << "SSB.GetBool(\"text_array_test4\",4) = " << SSB.GetBool("text_array_test4",4) << endl << endl;

cout << "SSB.GetIndex(\"text_array_test1\",\"qwerty\") = " << SSB.GetIndex("text_array_test1","qwerty") << endl;
cout << "SSB.GetIndex(\"text_array_test1\",\"asdf\") = " << SSB.GetIndex("text_array_test1","asdf") << endl;
cout << "SSB.GetIndex(\"text_array_test1\",\"asdfgh\") = " << SSB.GetIndex("text_array_test1","asdfgh") << endl;
cout << "SSB.GetIndex(\"tab_test4\",\"A1\") = " << SSB.GetIndex("tab_test4","A1") << endl;
cout << "SSB.GetIndex(\"text_array_test4\",\"11\") = " << SSB.GetIndex("text_array_test4","11") << endl;
cout << "SSB.GetIndex(\"text_array_test4\",11) = " << SSB.GetIndex("text_array_test4",11) << endl;
cout << "SSB.GetIndex(\"float_array_test1\",9.2) = " << SSB.GetIndex("float_array_test1",9.2) << endl;
cout << "SSB.GetIndex(\"float_array_test1\",\"9.2\") = " << SSB.GetIndex("float_array_test1","9.2") << endl;
cout << "SSB.GetIndex(\"int_test1\",\"6\") = " << SSB.GetIndex("int_test1","6") << endl;
cout << "SSB.GetIndex(\"int_test1\",6) = " << SSB.GetIndex("int_test1",6) << endl;
cout << "SSB.GetIndex(\"int_test1\",5) = " << SSB.GetIndex("int_test1",5) << endl;

cout << endl << endl;


}
