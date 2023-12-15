    #include <stdio.h>
    void writingShape(char board[3][3]){
        for(int i = 0; i <3 ; i++)
        {
        for(int j = 0; j < 3; j++){
        printf(" %c  | " , board[i][j]);
            }
        printf("\n----*");
        printf("-----*");
        printf("-----*");
        printf("\n");
        }
    }
    int main(){
        int check = 0;
        int end=-1;
        char x = 'x';
        char o = 'O';
        int selection1;
        char symbols[]= "--*";
        char board[3][3] = {
            {'1' , '2' , '3'} ,
            {'4' , '5' , '6'} ,
            {'7' , '8' , '9'}
        }; 

        writingShape(board);
        printf("\n");

    for(int counter = 0; counter < 9 ; counter++)
        {
            if( counter % 2 == 0){
                printf("Where do you want to put X: ");
            }else{
                printf("Where do you want to put O: ");
                }
                scanf("%d",&selection1);
                while(board[0][selection1-1] == 'X' ||board[0][selection1-1] == 'O'){
                    printf("This space is already choosed please choose another space: ");
                    scanf("%d", &selection1);
                    }
                if(counter % 2 == 0 ){
                    board[0][selection1-1] ='X';
                }else{
                    board[0][selection1-1] ='O';
                }

                writingShape(board);

        for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3 ; j++)
        {
        if(board[0][j] == board[1][j] && board[0][j] == board[2][j]){
            printf("Winner is %c , congratulations!" , board[0][j]);
            return 0;
        }else if (board[i][0] == board[i][1] && board[i][0] == board[i][2]){
            printf("Winner is %c , congratulations!" , board[i][0]);
            return 0;
        }else if(board[0][0] == board[1][1] && board[0][0] == board[2][2]){
            printf("Winner is %c , congratulations!" , board[1][1]);
            return 0;
        }else if(board[0][2] == board[1][1] && board[0][2] == board[2][0]){
            printf("Winner is %c , congratulations!" , board[1][1]);
            return 0;
        }else{
            end = 0;
            }
        }
    }
}if(end == 0){
        printf("Draw!");
            return 0;
        }
    }

