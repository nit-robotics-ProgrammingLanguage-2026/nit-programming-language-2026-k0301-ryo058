int main()
{
    int number;

    printf("整数を入力してください: ");
    if (scanf("%d", &number) == 1) 
    {
        printf("入力された値は %d です。\n", number);
    } else 
    {
        printf("正しく整数が入力されませんでした。\n");
    }
    return 0;
}