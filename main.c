#include <stdio.h>
#include <unistd.h>
 // big slugcat
int main(){
    int size = 0;
    printf("enter scug size: ");
    scanf("%d" , &size);
    if (size <= -1){
 return 0;
    }

    printf("⠀⡠⠁⠉⠐⡀⠀⠀⠀⠀⠀⠀⠐⠒⠢⡀ \n");
    printf("⠀⢳⠀⠀⠀⠘⠀⠀⠀⣀⠔⠀⠀⠀⠀⡇ \n");
    printf("⠀⠀⠠⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠊⠀ \n");
    printf("⠀⠀⡐⠀⢠⣦⠀⠀⠀⠀⣰⣄⠀⢃⠀⠀ \n");
    printf("⠀⢰⠠⠀⢿⡿⠀⠐⠃⠀⢿⡿⠀⠈⡆⠀ \n");
    printf("⠀⠸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠃⠀ \n");
    printf("⠀⠀⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠀⠀\n ");
    printf("⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢡⠀ \n");
    printf("⢀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠆ \n");
        for(int i = 0; i <= size; i++){
    printf("⢀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠆ \n");
    usleep(1000);
}
printf("⢨⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢇  \n");
printf("⡎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸ \n");
printf("⢘⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢆ \n");
printf("⠃⣀⣀⠠⠚⠒⠒⠒⠒⠂⠁⠁⠀⣀⣀⠜ \n");

return 0;
}