 #include <stdio.h>
int main()
 /*
 Trabalho 2 de Programação de Computadores I - retângulo
 Curso de Sistemas da Informação
 Aluno: Tatiane Maria Dos Santos
 Matricula: 00500 11282
 Professor: Alex Salgado  
 */

{
    //char a=42;
    //char a= *;
    int resposta, alt, comp, i, j;
   char nome[20], continuar;
    
    do
    {
        printf("Digite o seu nome:\n");
        scanf("%s", nome);
    
    
        printf("\n%s, digite um numero para o Comprimento do seu Retangulo, este numero devera ser maior do que 2:\n", nome);
        scanf("%d",&comp);
        
        while(comp<3)
        {
            printf("\n%s, voce digitou para o Comprimento, um numero menor ou igual a 2. \nPara desenhar o seu Retangulo, digite um numero maior do que 2:\n", nome);
            scanf("%d",&comp);
        }
        
        printf("\n%s, digite um numero para a Altura do seu Retangulo, este numero devera ser maior do que 2:\n", nome);
       scanf("%d",&alt);
        
        while(alt<3)
        {
            printf("\n%s, voce digitou para a Altura, um numero menor ou igual a 2. \nPara desenhar o seu Retangulo, digite um numero maior do que 2:\n", nome);
            scanf("%d",&alt);
        }

        printf("\n\nOlá, meu nome eh %s, e o meu retangulo ficou assim:\n\n", nome);
       
        for (i=1; i<=alt; i++)
        {
            for(j=1; j<=comp; j++)
            {
                if (i>1 && j>1 && j<comp && i<alt)
                {
                    printf(" ");
                }
               
                else
                {
                    printf("%c",42);
                }
            }
            printf("\n");
        }
        
        printf("\nDeseja continuar (s/n)?\n");
        scanf(" %c", &continuar);
    }
    
    while(continuar == 's');
    return 0;

}