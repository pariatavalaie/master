#include <stdio.h>
#include "raylib.h"
 int main() {
     char map[17][17]={0};
     int tedadmaqar,xmaqar,ymaqar;
     printf("enter tedad maqar\n");
     scanf("%d",&tedadmaqar);
     for(int i = 0;i < tedadmaqar;i++){
         printf("enter x maqr and y maqar\n ");
         scanf("%d%d",&xmaqar,&ymaqar);

         if(xmaqar>=17||ymaqar>=17){printf("wrong");
             i--;}
         else map[xmaqar][ymaqar]='c';
         }
     InitWindow(850,850,"MAP");
     Texture2D background= LoadTexture("C:/Users/ASUS/CLionProjects/untitled30/CMakeFiles/1 Upgrade/image.png");
     Texture2D maqar_texture= LoadTexture("C:/Users/ASUS/CLionProjects/untitled30/CMakeFiles/1 Upgrade/building_1.png");
     while (!WindowShouldClose()) {
         BeginDrawing();
         DrawTexture(background,0,0,WHITE);
         int j;
         for(int i = 0;i < 17;i++) {
             for (j = 0; j < 17; j++)
             {
                 if (map[i][j] == 'c')
                     DrawTexture(maqar_texture,i*50,j*50,GRAY);
             }
         }
         EndDrawing();
     }
     UnloadTexture(maqar_texture);
     CloseWindow();
     return 0;
 }

