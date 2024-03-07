#include <stdio.h>
#include <stdlib.h>

struct Movie {
    char name[50];
    char releaseDate[20];
    float rating;
};

int main() {
    int N;
    printf("Enter the number of movies: ");
    scanf("%d", &N);

    struct Movie movies[N];

    for (int i = 0; i < N; i++) {
        printf("\nEnter details for Movie %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", movies[i].name);
        printf("Release Date: ");
        scanf("%s", movies[i].releaseDate);
        printf("Rating: ");
        scanf("%f", &movies[i].rating);
    }

    printf("\nList of Movies:\n");
    for (int i = 0; i < N; i++) {
        printf("\nMovie %d\n", i + 1);
        printf("Name: %s\n", movies[i].name);
        printf("Release Date: %s\n", movies[i].releaseDate);
        printf("Rating: %.2f\n", movies[i].rating);
    }
    return 0;
}
