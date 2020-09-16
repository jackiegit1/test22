/*
     79题 单词搜索
     board =
    [
      ['A','B','C','E'],
      ['S','F','C','S'],
      ['A','D','E','E']
    ]

    给定 word = "ABCCED", 返回 true
    给定 word = "SEE", 返回 true
    给定 word = "ABCB", 返回 false

 */

#include <stdio.h>

char board[][4] = {
    {'A','B','C','E'},
    {'S','F','C','S'},
    {'A','D','E','E'},
};

const char *word = "ABCCED";
int dir[][2] = {
    {-1, 0}, // 左
    {1, 0},  // 右
    {0, -1}, // 上
    {0, 1},  // 下
};

int check(int i, int j, int k)
{
    int x, y;
    
    if (i == 4) && (j == 3) && ()
    
}


int main()
{
    printf("%d\t%d\n", sizeof(board), sizeof(board)/sizeof(board[0]));
    
    return 0;
}
