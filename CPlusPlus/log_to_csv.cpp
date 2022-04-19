#include <fstream>

int main()
{
    std::ofstream myLog;
    myLog.open("path_to_file.csv");

    myLog << "col1,col2,col3,...\n"; // header (column titles)

    while (true)
    {
        // put data into log file
        myLog << 10 << "," << 12 << "," << 30 << "," << 12 << "\n";
    }

    myLog.close(); // close log file (not really required.. program abort also closes file)
}