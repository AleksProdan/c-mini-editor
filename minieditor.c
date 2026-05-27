#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *buffer;
    int fd;
    ssize_t data;
    struct stat st;

    if (argc != 2) {
        printf("Usage: ./minieditor <filename>\n");
        return 1;
    }

    fd = open(argv[1], O_RDONLY);

    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    if (stat(argv[1], &st) == -1) {
        perror("Error getting file size");
        close(fd);
        return 1;
    }

    size_t fileSize = st.st_size;

    buffer = malloc(fileSize + 1);

    if (buffer == NULL) {
        perror("Error allocating memory");
        close(fd);
        return 1;
    }

    data = read(fd, buffer, fileSize);

    if (data == -1) {
        perror("Error reading file");
        free(buffer);
        close(fd);
        return 1;
    }

    buffer[data] = '\0';

    write(STDOUT_FILENO, buffer, data);
    write(STDOUT_FILENO, "\n", 1);

    free(buffer);
    close(fd);

    return 0;
}