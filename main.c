#include<stdio.h>
#include<stdlib.h>//Biblioteca para colorir o programa com comandos sustem("color xy").
#include<string.h> //Biblioteca para usar a funçao strcmp.
#define size 200 //variavel constante que nao muda seu valor.
#include <windows.h>
#include <string.h> //necessário para strcpy

//variaveis globais cadastro de cliente
char nome0[100];
char nomeCli[size] [50];
char endeCli[size] [50];
int opcao;
int numCadastro[size];
int telefone[size];
int cpfCli[];
int sair;
int valorFinal2;
int valorFinal1;
static int linha;
char nometotal;

//variaveis globais cadastro de funcionario
char nome1[100];
char nomeFun[size] [50];
char endeFun[size] [50];
char cargoFun[size] [50];
int numeroEnd[], cpfFun[], rgFun[];
int numCadastroFun[size];
int telefoneFun[size];
static int linha1;



//Funcoes usadas no programa
void menu();
void menu2();
void cadastro();
void cadastroFun();
void exibi();
void exibiFun();
void pedido();
void total();
void inform();
void elogios();
void informElogios();


//inicio do programa
int main(){

    system("mode con lines=60");//Altera as Linhas Da Kill Black Window/
    system("mode con cols=115");//Altera as Colunas Da Kill Black Window/

    puts("\t+===================================================================================================+");
    puts("\t|                                                                                                   |");
    puts("\t|                                        PROGRAMA PIZZARIA                                          |");
    puts("\t|                                ===============================                                    |");
    puts("\t|                                                                                                   |");
    puts("\t|                                                                                                   |");
    puts("\t|       888888b.     8888  88888888888  88888888888  8888888b.   88888888b.  888  8888888b.         |");
    puts("\t|       888    88b   8888      d888p        d888p           88b  888    88b  888         88b        |");
    puts("\t|       888     888  8888     d888p        d888p     .d88888888  888     888 888  .d88888888        |");
    puts("\t|       888   d88p   8888    d888p        d888p      888    888  888   d88p  888  888    888        |");
    puts("\t|       8888888p     8888   d888p        d888p      888     888  88888888    888 888     888        |");
    puts("\t|       888          8888  88888888888  88888888888  888888888   888   888   888  8888888888        |");
    puts("\t|       888  =================================================== 888    888  ===============        |");
    puts("\t|       888                                                      888     888                        |");
    puts("\t|       888                                                                                         |");
    puts("\t|                                                                                                   |");
    puts("\t|                                                                                                   |");
    puts("\t|                                             DELIVERY                                              |");
    puts("\t+===================================================================================================+\t");


            puts("\t                          +===========================================+");
            puts("\t                          |                                           |");
            puts("\t                          |                                           |");
            printf("\t                                           _LOGIN: ");
            fflush(stdin);
            scanf("%[^\n]s" ,nome0);
            printf("\t                                           _SENHA: ");
            scanf("%d" , &opcao);



   switch(opcao){
   case 1234:
    menu2();
        break;
   case 5678:
    menu();
        break;

   default:
    printf("\n\t                                 senha invalida Insira login e senha:\n");
    Sleep(1200);
    main();

   }

   return 0;
}
//Funcao de menu
void menu2(){

        int opcao03;

        system("color F1");
        system("mode con lines=60");//Altera as Linhas Da Kill Black Window/
        system("mode con cols=115");//Altera as Colunas Da Kill Black Window/
        system("cls");

        puts("\t+===================================================================================================+");
        puts("\t+===================================================================================================+");
        puts("\t|                                                                                                   |");
        puts("\t|                                    TELA INICIAL DELIVERY                                          |");
        puts("\t|                                ==============================                                     |");
      printf("\t|                                        BEM VINDO %s                                                " ,nome0);
        puts("\t                                                                                                     ");
        puts("\t+===================================================================================================+\t");
        puts("\t|                                                                                                   |");
        puts("\t|                                1- Cadastrar cliente                                               |");
        puts("\t|                                2- Exibir dados dos Clientes                                       |");
        puts("\t|                                3- Realizar Pedidos                                                |");
        puts("\t|                                4- Elogios e Reclamacoes                                           |");
        puts("\t|                                5- Informacoes do programa                                         |");
        puts("\t|                                9- Sair                                                            |");
        puts("\t|                                                                                                   |");
        puts("\t+===================================================================================================+\t");
        puts("\t+===================================================================================================+");

        printf("\tSelecione uma opcao por favor:\t");
        scanf("%d", &opcao03);
        system("cls");

        if(opcao03 == 1){
            cadastro();
        }
        else if(opcao03 == 2){
            exibi();
        }

        else if(opcao03 == 3){
            pedido();
        }

        else if(opcao03 == 4){
           elogios();
        }

        else if(opcao03 == 5 ){
            inform();
        }
        else if(opcao03 == 9 ){
            fflush(stdin);
            return 0;
        }
        else if(opcao03 != 1 && opcao03 != 2 && opcao03 != 3 && opcao03 != 4 && opcao03 != 5 && opcao03 != 9){
             menu2();
        }
        return 0;
}

//Funcao de cadastro de cliente
void cadastro(){


     puts("\t+===================================================================================================+");
     puts("\t|                                                                                                   |");
     puts("\t|                                        TELA DE CADASTRO                                           |");
     puts("\t|                                ===============================                                    |");
   printf("\t|                                        BEM VINDO %s                                             |" ,nome0);
     puts("\t                                                                                                     ");
     puts("\t+===================================================================================================+");


    do{
    printf("\n\t\t   Digite um numero de    (1)   a   (200)   para cadastrar novo cliente:  ");
    scanf("%d", &numCadastro[linha]);
    printf("\n\tDigite nome do cliente : ");
    fflush(stdin);
    scanf("%[^\n]s",nomeCli[linha]);
    printf("\n\tDigite o endereco do cliente : ");
    fflush(stdin);
    scanf("%[^\n]s",endeCli[linha]);
    printf("\n\tDigite o telefone do cliente : ");
    scanf("%d", &telefone[linha]);
    printf("\n\tDigite  o numero do CPF : ");
    scanf("%d", &cpfCli[linha]);
    Sleep(1000);
    printf("\n\tCadastro de Cliente Efetuado com Sucesso....\n\t");
    Sleep(1000);
    printf("\n\tDigite (1) para continuar a cadastrar ou numero (0) para voltar ao menu\t");
    scanf("%d" , &opcao);
    linha++;
    system("cls");

    }while(opcao==1);
return menu2();
}

//Funcao de verificacao de cadastro Cliente
void exibi(){

    int verifCadastro;
    int i;

    puts("\t+===================================================================================================+");
    puts("\t|                                                                                                   |");
    puts("\t|                                       TELA DE VERIFICACAO                                         |");
    puts("\t|                                ===============================                                    |");
    puts("\t|                                                                                                   |");
    puts("\t|                                                                                                   |");
    puts("\t+===================================================================================================+\t");


    printf("\n\t(1) - para pesquisar por (numero) de codigo ou \n\n\t(2) - para verificar todos os cadastros - ");
    scanf("%d" , &opcao);
    switch(opcao){
        case 1:

            if(numCadastro[0] !=0){
            printf("\n\tDigite o Codigo :");
            scanf("%d", &verifCadastro);
            for(i=0;i<size;i++){
                if(numCadastro[i]== verifCadastro ){
                    printf("\n\tCodigo: %i\n\tNome: %s\n\tEndereco: %s\n\tTelefone: %i \n\tCPF: %i\n", numCadastro[i], nomeCli[i], endeCli[i], telefone[i], cpfCli[i]);
                }
            }
        break;

        }else{
                Sleep(1000);
                printf("\n\t**Nao ha clientes cadastrados**");
            }
        break;
        case 2:
            printf("\n\tTodos os cadastros: \n");
            if(numCadastro[0] !=0){
                for(i=0;i<size;i++){
                    if(numCadastro[i] != 0 ){
                        printf("\n\tCodigo: %i\n\tNome: %s\n\tEndereco: %s\n\tTelefone: %i \n\tCPF: %i\n", numCadastro[i], nomeCli[i], endeCli[i], telefone[i], cpfCli[i]);
                    }
                  }
            }else{
                Sleep(1000);
                printf("\n\t**Nao ha clientes cadastrados**");
            }
        break;

        default:

            break;
    }




    printf("\n\t------------------------------------------------------------------------------------------------------\n");
    printf("\n\t(1) - para continuar a pesquisa ou qualquer numero para sair - ");
    scanf("%i", &sair);

    if(sair == 1){
        system("cls");
        exibi();

    }else{
    menu2();
    }
    return 0;



};

//Funcao de pedido de pizza e bebidas
void pedido(){

    int sair2;
    int verficaCpf;
    int i;
    int j;
    int opcao;
    int opcao1;
    int valorPizza1=0;
    int Option;

    char nome[30];
    float PizzaBrasileira= 45.00;
    float PizzaCalabreza= 30.00;
    float PizzaMussarela= 40.50;
    float CocaCola=8.00;
    float Pepsi=7.50;
    float valorPizza=0;





    system("color b");
    system("mode con lines=60");//Altera as Linhas Da Kill Black Window/
    system("mode con cols=115");//Altera as Colunas Da Kill Black Window/

    puts("\t+===================================================================================================+");
    puts("\t|                                                                                                   |");
    puts("\t|                                        TELA DE PEDIDOS                                            |");
    puts("\t|                                ===============================                                    |");
    puts("\t|                                                                                                   |");
    puts("\t|                                                                                                   |");
    puts("\t+===================================================================================================+\t");

    if(numCadastro[0] != 0){
    printf("\tDigite o CPF do cliente para cadastar o pedido :");
    scanf("%i", &verficaCpf);

        for(i=0;i<size;i++){
            if(cpfCli[i] == verficaCpf){
            printf("\n\tCodigo: %i \n\tNome: %s \n\tEndereco: %s \n\tTelefone: %i \n\tCPF: %i\n", numCadastro[i], nomeCli[i], endeCli[i], telefone[i], cpfCli[i]);
            }
        }

    }else{
        printf("\n\tNao ha clientes cadastrados\n");
        Sleep(2000);
        printf("\n\tVoltando ao menu em....\n");
        Sleep(1000);
        return menu2();

    }

    puts("\t+===================================================================================================+\t");
    printf("\n\tDigite (1) - para fazer pedido ou (0) - para voltar ao menu principal: ");
    scanf("%i", &sair2);

    if(sair2 == 1){


            do{
                system("cls");
                puts("\t+===================================================================================================+\t");
                puts("\t|          `----`                                                                 `----`            |");
                puts("\t|         `--::..:                       SABORED DE PIZZAS                        :..::--`          |");
                puts("\t|       -:--:::::/                                                               /:::::--:-         |");
                puts("\t|    `::``.://:+o+-./                 1 - Pizza De Mussarela                   /.-+o+://:.``::`     |");
                puts("\t|   -:``.//-..-oso-.+                                                          /.-oso-..-//.``:-    |");
                puts("\t|   .-://-....-....-+                 2 - Pizza De Calabreza                   +-....-....-//:-.    |");
                puts("\t|      .:/-.-yy+.--yy                                                          yy-..+yy-.-::.       |");
                puts("\t|         -+/::-..-/o`                3 - Pizza De Brasileira                 .o/...-::/+-          |");
                puts("\t|         `s.-/-....:-            ---------------------------------           -:....-/-.s`          |");
                puts("\t|             /+:/-.-:                4 - Refrigerante Coca-cola              :-.-/:+/              |");
                puts("\t|                +s/-/                                                        :-/s+                 |");
                puts("\t|                   :o                5 - Refrigerante Pepsi                  o:                    |");
                puts("\t|                                                                                                   |");
                puts("\t+===================================================================================================+\t\n");

                puts("\t+===================================================================================================+\t");
                printf("\n\tDigite uma opcao : ");
                scanf("%i", &opcao);

                int total=0;

                if(opcao ==1){
                    strcpy(nome, "Pizza De Mussarela");
                    printf("\n\tVoce escolheu a %s, De Preco R$: %0.2f\n",nome, PizzaMussarela);
                    valorPizza = valorPizza + 40.50;
                    printf("\n\tSoma: %0.2f", valorPizza);
                    printf("\n\tPressione (1) para continuar pedindo ou (8) para finalizar pedido: ");
                    scanf("%d", &Option);

                }

                else if(opcao ==2){
                    strcpy(nome, "Pizza De Calabreza");
                    printf("\n\tVoce escolheu a %s, De Valor R$:%0.2f\n",nome, PizzaCalabreza);
                    valorPizza = valorPizza + 30;
                    printf("\n\tSoma: %0.2f", valorPizza);
                    printf("\n\tPressione 1 para continuar pedindo ou 8 para finalizar pedido: ");
                    scanf("%d", &Option);
                }
                else if(opcao ==3){
                    strcpy(nome, "Pizza Brasileira");
                    printf("\n\tVoce escolheu a %s, De Valor R$:%0.2f\n",nome, PizzaBrasileira);
                    valorPizza = valorPizza + 45;
                    printf("\n\tSoma: %0.2f", valorPizza);
                    printf("\n\tPressione 1 para continuar pedindo ou 8 para finalizar pedido: ");
                    scanf("%d", &Option);
                }
                else if(opcao ==4){
                    strcpy(nome, "Coca-cola");
                    printf("\n\tVoce escolheu refrigerante %s, De Valor R$:%0.2f\n",nome, CocaCola);
                    valorPizza = valorPizza + 8;
                    printf("\n\tSoma: %0.2f", valorPizza);
                    printf("\n\tPressione 1 para continuar pedindo ou 8 para finalizar pedido: ");
                    scanf("%d", &Option);
                }
                else if(opcao ==5){
                    strcpy(nome, "Pepsi");
                    printf("\n\tVoce escolheu refrigerante %s, De Valor R$:%0.2f\n",nome, Pepsi);
                    valorPizza = valorPizza + 7.50;
                    printf("\n\tSoma: %0.2f", valorPizza);
                    printf("\n\tPressione 1 para continuar pedindo ou 8 para finalizar pedido: ");
                    scanf("%d", &Option);
                }
                 if(Option == 8){

                    printf("\n\tValor total da compra R$: %0.2f ", valorPizza);
                    printf("\n\tPressione 1 para voltar ao menu principal ");
                    scanf("%d", &opcao1);

                }
                if(opcao1 == 1){
                     system("cls");
                     menu2();
                }
            }while(opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4 || opcao == 5 );
            menu2();



    }else if(sair2 == 0){
       return menu2();
    }


    return 0;
}

//Funçao de informacoes sobre o programa e criadores
void inform(){

    int Option;


    system("color b");
    system("mode con lines=60");//Altera as Linhas Da Kill Black Window/
    system("mode con cols=115");//Altera as Colunas Da Kill Black Window/
    system("cls");


    puts("\t+===================================================================================================+");
    puts("\t+===================================================================================================+");
    puts("\t*===                                                                                             ===*");
    puts("\t*===                                                                                             ===*");
    puts("\t*===                                    TELA DE INFORMACAO                                       ===*");
    puts("\t*===                              ===============================                                ===*");
    puts("\t*===                                                                                             ===*");
    puts("\t*===                                                                                             ===*");
    puts("\t+===================================================================================================+\t");
    puts("\t+===================================================================================================+\n\n");


    puts("\t+===================================================================================================+\t");
    puts("\t|                                                                                                   |");
    puts("\t|                                 UNIP - Universidade Paulista                                      |");
    puts("\t|                       ================================================                            |");
    puts("\t|                                                                                                   |");
    puts("\t|                                          Integrantes                                              |");
    puts("\t|                       -----------------------------------------------                             |");
    puts("\t|                       *                                             *                             |");
    puts("\t|                       *         Rudinei Lopes  RA: N53717-5         *                             |");
    puts("\t|                       *         Priscila Cubo  RA: F09DAJ-8         *                             |");
    puts("\t|                       *         Lorena Silva   RA: F087921          *                             |");
    puts("\t|                       *         Iara Cordeiro  RA: N512CF4          *                             |");
    puts("\t|                       *                                             *                             |");
    puts("\t|                                       Sao paulo /2019                                             |");
    puts("\t|                                                                                                   |");
    puts("\t+===================================================================================================+\n\t");


    printf("\n\tPressione (1) para voltar ao menu principal ");
    scanf("%d", &Option);

    if(Option == 1){
        system("cls");
        menu2();
    }

return 0;
};

//funcao de elogios e reclamacoes
void elogios(){

    char nome[30];
    int Option;
    int opcao;


    do{

    system("color b");
    system("mode con lines=60");//Altera as Linhas Da Kill Black Window/
    system("mode con cols=115");//Altera as Colunas Da Kill Black Window/
    system("cls");

    puts("\t+===================================================================================================+\t");
    puts("\t|                                                                                                   |");
    puts("\t|                                      ELOGIOS E RECLAMACOES                                        |");
    puts("\t|                                                                                                   |");
    puts("\t|                                     1 - Atendimento Ruim                                          |");
    puts("\t|                                                                                                   |");
    puts("\t|                                     2 - Atendimento Bom                                           |");
    puts("\t|                                                                                                   |");
    puts("\t|                                     3 - Atendimento Excelente                                     |");
    puts("\t|                                                                                                   |");
    puts("\t|                                                                                                   |");
    puts("\t+===================================================================================================+\t\n");

    puts("\t+===================================================================================================+\t");
    printf("\n\tDigite uma opcao : ");
    scanf("%i", &opcao);

        if(opcao ==1){
            strcpy(nome, "Atendimento Ruim");
            printf("\n\tVoce escolheu a opcao %s,\n",nome);
            nometotal = nome + 1;
            printf("\n\tPressione (8) para voltar ao menu principal: ");
            scanf("%d", &Option);
        }
        if(opcao ==2){
            strcpy(nome, "Atendimento Bom");
            printf("\n\tVoce escolheu a opcao %s,\n",nome);
            nometotal = nome + 1;
            printf("\n\tPressione (8) para voltar ao menu principal: ");
            scanf("%d", &Option);
        }
        if(opcao ==3){
            strcpy(nome, "Atendimento Excelente");
            printf("\n\tVoce escolheu a opcao %s,\n",nome);
            nometotal = nome + 1;
            printf("\n\tPressione (8) para voltar ao menu principal: ");
            scanf("%d", &Option);
        }
        if(Option == 8){
            system("cls");
            menu2();
        }
        }while(opcao == 1 || opcao == 2 || opcao == 3);
        menu2();


    return 0;
};
//funcao de menu de gerencia
void menu(){

        system("color b");
        system("mode con lines=60");//Altera as Linhas Da Kill Black Window/
        system("mode con cols=115");//Altera as Colunas Da Kill Black Window/
        system("cls");

        puts("\t+===================================================================================================+");
        puts("\t|                                                                                                   |");
        puts("\t|                                  TELA DE INICIAL DE GERENCIA                                      |");
        puts("\t|                                ===============================                                    |");
      printf("\t|                                        BEM VINDO %s                                                " ,nome0);
        puts("\t                                                                                                     ");
        puts("\t+===================================================================================================+\t");
        puts("\t|                                                                                                   |");
        puts("\t|                                1- Cadastrar funcionario                                           |");
        puts("\t|                                2- Exibir dados dos Funcionarios                                   |");
        puts("\t|                                0- Sair                                                            |");
        puts("\t|                                                                                                   |");
        puts("\t+===================================================================================================+\t");


        printf("\tSelecione uma opcao por favor:\t");
        scanf("%d", &opcao);
        system("cls");

        if(opcao == 1){
            cadastroFun();
        }
        else if (opcao == 2){
              exibiFun();
        }
        else if(opcao == 0 ){
            return 0;
        }
        else if(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 0){
             menu();
        }
}

//Funcao de cadastro de Funcionario
void cadastroFun(){

     int opcao;


     puts("\t+===================================================================================================+");
     puts("\t+===================================================================================================+");
     puts("\t|                                                                                                   |");
     puts("\t|                                TELA DE CADASTRO DE FUNCIONARIO                                    |");
     puts("\t|                                ===============================                                    |");
   printf("\t|                                        BEM VINDO %s                                             |" ,nome0);
     puts("\t                                                                                                     ");
     puts("\t+===================================================================================================+");
     puts("\t+===================================================================================================+");


    do{
    printf("\n\t\t   Digite um numero de  (1)  a  (200)  para cadastrar novo Colaborador:\t ");
    scanf("%d", &numCadastroFun[linha1]);
    printf("\n\tDigite nome do Colaborador : ");
    fflush(stdin);
    scanf("%[^\n]s",nomeFun[linha1]);
    printf("\n\tDigite o endereco do colaborador : ");
    fflush(stdin);
    scanf("%[^\n]s",endeFun[linha1]);
    printf("\n\tDigite  o numero da residencia : ");
    scanf("%d", &numeroEnd[linha1]);
    printf("\n\tDigite o telefone do Colaborador : ");
    scanf("%d", &telefoneFun[linha1]);
    printf("\n\tDigite  o numero do CPF : ");
    scanf("%d", &cpfFun[linha1]);
    printf("\n\tDigite  o numero do RG : ");
    scanf("%d", &rgFun[linha1]);
    printf("\n\tDigite o Cargo do Colabordor : ");
    fflush(stdin);
    scanf("%[^\n]s",cargoFun[linha1]);
    Sleep(1000);
    printf("\n\tCadastro de Colaborado Efetuado com Sucesso....\n\t");
    Sleep(1000);
    printf("\n\tDigite (1) para continuar a cadastrar ou numero (0) para voltar ao menu\t");
    scanf("%d" , &opcao);
    linha1++;
    system("cls");

    }while(opcao == 1);
    menu();
return 0;
}
//Funcao de verificacao de cadastro Funcionario

void exibiFun(){

    int verifCadastro1;
    int i;
    int Opcao;
    int Sair;

    puts("\t+===================================================================================================+");
    puts("\t|                                                                                                   |");
    puts("\t|                                TELA DE DE VERIFICACAO DE CADASTRO                                 |");
    puts("\t|                             ========================================                              |");
    puts("\t|                                                                                                   |");
    puts("\t|                                                                                                   |");
    puts("\t+===================================================================================================+\t");


    //printf("\nCodigo: %i \nNome: %s\nEndereco: %s\ntelefone: %i\n", numCadastro, nomeCli, endeCli, telefone );
    printf("\n\t(1) - para pesquisar por (numero) de codigo \n\t(2) - para verificar todos os cadastros - ");
    scanf("%d" , &Opcao);
    switch(Opcao){
        case 1:

            if(numCadastroFun[0] !=0){
            printf("\n\tDigite o Codigo :");
            scanf("%d", &verifCadastro1);
            for(i=0;i<size;i++){
                if(numCadastroFun[i]== verifCadastro1 ){
                    printf("\n\tCodigo: %i\n\n\tNome: %s\n\tEndereco: %s\n\tNumero: %i \n\tTelefone: %i \n\tCPF: %i\n\tRG: %i \n\tCargo: %s\n", numCadastroFun[i], nomeFun[i], endeFun[i],numeroEnd[i], telefoneFun[i], cpfFun[i], rgFun[i], cargoFun[i]);
                }
            }
        break;
        }else{
                Sleep(1000);
                printf("\t** nao ha clientes cadastrados **");
            }
        break;
        case 2:
            printf("\n\tTodos os cadastros: \n");
            if (numCadastroFun[0] !=0){
                for(i=0;i<size;i++){
                    if(numCadastroFun[i] != 0 ){
                        printf("\n\tCodigo: %i\n\n\tNome: %s\n\tEndereco: %s\n\tNumero: %i \n\tTelefone: %i \n\tCPF: %i\n\tRG: %i \n\tCargo: %s\n", numCadastroFun[i], nomeFun[i], endeFun[i],numeroEnd[i], telefoneFun[i], cpfFun[i], rgFun[i], cargoFun[i]);
                    }
                  }
            }else{
                Sleep(1000);
                printf("\t** nao ha clientes cadastrados **");
            }
            break;

        default:

            break;
    }

    printf("\n\t-----------------------------------------------------------------------------------------------------\n");
    printf("\n\t(1) - para continuar a pesquisa ou qualquer numero para Sair - ");
    scanf("%i", &Sair);

    if(Sair == 1){
        system("cls");
        exibiFun();

    }else{
    system("cls");
    menu();
    }
    return 0;

}
//Funcao verificacao de elogios e reclamacoes

