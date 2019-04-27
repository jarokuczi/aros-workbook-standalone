cmake_minimum_required(VERSION 3.14)
project(Workbook C)

set(CMAKE_C_STANDARD 99)
set(LC_LIBDEFS_FILE workbook_libdefs.h)
add_executable(Workbook workbook.c workbook_intern.c wbapp.c wbwindow.c wbvirtual.c wbset.c wbicon.c main.c)
add_executable(Requester requester.c)