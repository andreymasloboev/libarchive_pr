#include <archive.h>
#include <archive_entry.h>

#include <iostream>

int main() {
    struct archive *a = archive_read_new();
    
    if (a)
    {
        std::cout << "libarchive OK!" << std::endl;
        archive_read_free(a);
    } 
    else
    {
        std::cerr << "libarchive FAIL" << std::endl;
        return 1;
    }

    return 0;
}

