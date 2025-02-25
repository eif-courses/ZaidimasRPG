cmake_minimum_required(VERSION 3.30)
project(ZaidimasRPG)

set(CMAKE_CXX_STANDARD 20)

add_executable(ZaidimasRPG main.cpp
        MapGenerator.cpp
        MapGenerator.h
        Player.cpp
        Player.h
        LootSystem.cpp
        LootSystem.h
        Inventory.cpp
        Inventory.h
        Store.cpp
        Store.h
        Achievment.cpp
        Achievment.h
        ScoreSystem.cpp
        ScoreSystem.h
        Item.cpp
        Item.h
        PlayerInfo.cpp
        PlayerInfo.h
)
