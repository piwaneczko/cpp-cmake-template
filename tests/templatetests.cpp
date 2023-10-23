#include <gtest/gtest.h>

#include "template.h"

using testing::Test;

TEST(TemplateTests, HelloWorldTest) {
    Template temp("Hello World!");
    EXPECT_EQ("Hello World!", temp.text());
}