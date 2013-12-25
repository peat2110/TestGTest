#include "linkList.cpp"
#include <gtest/gtest.h>

    List* testList = new List();

    TEST(addToHead,addSucess)
    {
       ASSERT_EQ(NULL,testList->head);

       testList->addToHead("agile");
       ASSERT_EQ("agile",testList->head->nameTag);
       ASSERT_EQ(NULL,testList->head->next); 

       testList->addToHead("UX");
       ASSERT_EQ("UX",testList->head->nameTag);
       ASSERT_EQ("agile",testList->head->next->nameTag);

       testList->addToHead("Tdd");
       ASSERT_EQ("Tdd",testList->head->nameTag);
       ASSERT_EQ("UX",testList->head->next->nameTag);
       ASSERT_EQ("agile",testList->head->next->next->nameTag);

    }
    TEST(searchData,searchSucess)
    {
        ASSERT_EQ("UX",testList->searchNode("UX")->nameTag);
    }
    TEST(searchData,searchFail)
    {
        ASSERT_EQ(NULL,testList->searchNode("sdasdsads"));
    }
    TEST(setData, setSucess)
    {
        string s = "UX is User Experience ";
        testList->setData("UX",s);
        EXPECT_EQ(s,testList->searchNode("UX")->data);
       
        s = "Scrum Master is Scrum Manster";
        testList->setData("agile",s);
        EXPECT_EQ(s, testList->searchNode("agile")->data);
    }
    TEST(LinkList,getData)
    {
        testList->getData("agile");
    }
    int main(int argc,char **argv)
    {
        testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
    }
