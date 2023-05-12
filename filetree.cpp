#include <iostream>
#include <vector>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;
using std::vector;
using std::cout;
using std::string;

void SearchDir(string dir)
{
    for (auto entry = fs::recursive_directory_iterator(dir); entry != fs::recursive_directory_iterator(); ++entry)
    {
        for (int i{0}; i < entry.depth(); i++) cout << "  ";
        cout << entry->path() << std::endl;
    }
}

int main(int argc, char *argv[])
{
    string path = argv[1];

    SearchDir(path);
    return 0;
}
