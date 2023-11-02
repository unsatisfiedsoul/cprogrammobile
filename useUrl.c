#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_URL_LENGTH 99

void executeCommand(const char *command) {
    printf("Executing: %s\n", command);
    system(command);
}

int main() {
    int choice;
    char url[MAX_URL_LENGTH + 1]; // +1 for null-terminator
    printf("Choose an option:\n1\n2.\n3.\n4.\n5.\n6.\n");
    scanf("%d", &choice);

    printf("Give URL (max 99 characters): ");
    getchar(); // Clear input buffer
    fgets(url, sizeof(url), stdin);

    // Remove newline character from input if present
    size_t url_length = strlen(url);
    if (url_length > 0 && url[url_length - 1] == '\n') {
        url[url_length - 1] = '\0';
    }

    executeCommand(url);

    return 0;
}
