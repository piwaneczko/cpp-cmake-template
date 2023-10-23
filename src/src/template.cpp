#include "template.h"

/**
 * @brief Construct a new Template:: Template object
 *
 * @param text Template text copied to container
 */
Template::Template(string_view text) : text_(text) {}

/**
 * @brief Returns stored text
 *
 * @return string_view Stored text
 */
string_view Template::text() const {
    return text_;
}
