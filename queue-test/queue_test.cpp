#include "queue.hpp"
#include <gtest/gtest.h>

TEST(TestTest, EmptyTest) {
}

class QueueTest : public ::testing::Test {
protected:
        void SetUp() override{
        }

    Queue<int> q0_;
};


TEST_F(QueueTest, IsEmptyInitially) {
    EXPECT_EQ(q0_.size(), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
