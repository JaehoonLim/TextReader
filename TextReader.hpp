// TextReader v1.00

#ifndef __TextReader_hpp_Inclueded__
#define __TextReader_hpp_Inclueded__

#include <string>
#include <vector>
#include <map>
#include <iterator>

typedef std::string st;
typedef std::vector<float> vec_f;
typedef vec_f::iterator vec_f_it;
typedef std::vector<st> vec_s;
typedef vec_s::iterator vec_s_it;
typedef std::map<st, float> map_f;
typedef map_f::iterator map_f_it;
typedef std::map<st, st> map_s;
typedef std::map<st, st>::iterator map_s_it;
typedef std::map<st, vec_f> map_sf;
typedef std::map<st, vec_f>::iterator map_sf_it;
typedef std::map<st, vec_s> map_ss;
typedef std::map<st, vec_s>::iterator map_ss_it;

class TextReader {

public:

    TextReader();
    ~TextReader();
    void ReadFile(st);
    void ReadVariables();
    void PrintoutVariables();

    float GetNumber(st);
    float GetNumber(st,int);
    int GetNumberInt(st);
    int GetNumberInt(st,int);
    st GetText(st);
    st GetText(st,int);
    bool Check(st);
    int Size(st);

private:

    FILE *configfile;
    map_f CVf; // Cut_Variable_float_type
    map_s CVt; // Cut_Variable_text_type
    map_sf CVfa; //Cut_Variable_float_type_array
    map_ss CVta; // Cut_Variable_text_type_array
    map_f_it CVf_it;
    map_s_it CVt_it;
    map_sf_it CVfa_it;
    map_ss_it CVta_it;

};

#endif // __TextReader_hpp_Inclueded__
