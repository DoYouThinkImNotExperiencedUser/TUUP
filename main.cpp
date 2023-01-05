#include <iostream>
#include <ctime>
#include <fstream>

int main() {
    int number = 1;
    int var = true;

std::ofstream outfile;
outfile.open("log.txt", std::ios_base::app);

    do{
        int number = number + 1;
        std::cout << number;

        time_t current_time = time(nullptr);
        tm* local_time = localtime(&current_time);
        std::string temp_time(asctime(local_time));

        outfile << " - " << temp_time << " - " << number;
        outfile << std::endl;
        std::cout << " SPACE ";
    } while (var = true);

    return 0;
}