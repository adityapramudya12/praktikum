cmake_minimum_required(VERSION 3.27)
project(tiket)

set(CMAKE_CXX_STANDARD 17)

add_executable(tiket main.cpp
        database/DatabaseUser.h
        model/ModelUser.h
        view/ViewUser.h
        database/DatabaseJadwal.h
        model/ModelJadwal.h
        model/ModelHarmonyWallet.h
        view/ViewJadwal.h
        model/ModelTransaksi.h
        view/ViewTransaksi.h
)
