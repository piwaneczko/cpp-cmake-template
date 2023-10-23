#ifndef IG_TEMPLATE_H
#define IG_TEMPLATE_H

#include <string>

using std::string_view;
using std::string;

class Template
{
private:
    string text_;
public:
    Template(string_view text);

    string_view text() const;
};

#endif // IG_TEMPLATE_H