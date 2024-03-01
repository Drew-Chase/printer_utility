//
// Created by drew.chase on 3/1/2024.
//
#include <cstdio>

#include "printers.h"
#include "options_manager.h"

int main(int argc, char **argv)
{
    printf("Hello World");

    cclip::options_manager manager("Printer Utility");
    manager.add_option("h", "help", "Prints this help message", false, false);
    manager.add_option("o", "output", "How should the data be outputted. Ex: JSON, PLAIN_TEXT, FILE, NONE", false, false);


    manager.parse(argc, argv);

    if (manager.is_present("h"))
    {
        manager.print_help();
        return 0;
    }
}
