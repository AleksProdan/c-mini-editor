#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 4096

int main(int argc, char *argv[]) {
    char buffer[BUFFER_SIZE];
    int fd;
    ssize_t data;

    if (argc != 2) {
        printf("Usage: ./minieditor <filename>\n");
        return 1;
    }

    fd = open(argv[1], O_RDONLY);

    if (fd == -1) {
        perror("Error opening file!");
        return 1;
    }

    while ((data = read(fd, buffer, BUFFER_SIZE)) > 0) {
        write(STDOUT_FILENO, buffer, data);
    }

    write(STDOUT_FILENO, "\n", 1);

    if (data == -1) {
        perror("Error reading file!");
        close(fd);
        return 1;
    }
    
    close(fd);
    return 0;
}