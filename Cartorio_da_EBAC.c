#include <stdio.h> //biblioteca de comunicação com o usuário.
#include <stdlib.h> //biblioteca de alocação de espaço em memoria.
#include <locale.h> //biblioteca de alocação de texto por região.
#include <string.h> //biblioteca de strings.

int registro(){ //classe

						
	char arquivo[40];//criação de variaveis 
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];


	printf("Digite seu CPF: ");//coletando informação do usuario 
	scanf("%s", cpf);// "%s" re refere a vareavel string.

		strcpy(arquivo,cpf);// Responsavel por copiar os valores das string


		FILE *file; // criando um arquivo
		file = fopen(arquivo,"w"); //criando o arquivo sendo "w"
		fprintf(file,cpf);// salva o valor da variavel
		fclose(file);// fecha o arquivo

		file = fopen(arquivo,"a");// abrindo o arquivo sendo "a" utilizado pra atualizar ou adiciona o arquivo
		fprintf(file, ",");// adicionando uma "," virgula 
		fclose(file);// fechando o arquivo

	printf("Digite seu nome para o cadastro:  ");
	scanf("%s", nome);


		file = fopen(arquivo,"a");
		fprintf(file, nome);
		fclose(file);


		file = fopen(arquivo,"a");
		fprintf(file,",");
		fclose(file);


	printf("Digite seu sobrenome: ");
	scanf("%s", sobrenome);


		file = fopen(arquivo, "a");
		fprintf(file, sobrenome);
		fclose(file);

		file = fopen(arquivo,"a");
		fprintf(file,",");
		fclose(file);


	printf("Digite seu cargo: ");
	scanf("%s", cargo);

		file = fopen(arquivo,"a");
		fprintf(file, cargo);
		fclose(file);


	system("pause");// faz uma pausa no programa no final de um siclo 



}

int consultar(){

	setlocale(LC_ALL, "portuguese");

	char cpf[40];
	char conteudo[40];


	printf("Bem vindo a cunsulta de usuario !\n\n");

	printf("Digite o CPF a cer consultado: ");
	scanf("%s", cpf);

		FILE *file;
		file = fopen(cpf, "r");

	if (file == NULL){

		printf("Usuario não encontrado!");
	
	}

	while(fgets(conteudo, 200, file)!= NULL){

		printf("informaçoes do usuario: \n");
		printf("%s", conteudo);
		printf("\n\n");
	}

	system("pause");



}

int deletar(){

	char cpf[40];
	
	printf("Bem Vindo a Exclusão de Usuario \n\n");
	
	printf("Digite o cpf do usuario para exclusão! \n");
	scanf("%s", cpf);
	
	
	
	FILE *file;
	file = fopen(cpf, "r");
	fclose (file);
	
	if(file == NULL){
		
		printf("Usuario não encontrado no banco de dados !");
		system("pause");
		
	}
	
	else{
		
		remove(cpf);
		printf("Usuario deletado com sucesso ! \n");
		system("pause");
		
		}
	}
	


int main (){// inicio da classe do programa. 


	int opcao = 0;// variaveis com valor armezenado.
	int laco= 1;

	for(laco=1;laco=1;){  // condição verdadeiro ou falso

		system("cls");// limpar a tela 

	setlocale(LC_ALL, "portuguese");// comando para utilizar o idioma escolhido com todos os acentos.


	printf("\t&&& CARTÓRIO DA EBAC &&& \n\n");// inicio do menu 
	printf("ESCOLHA A OPÇÃO DO MENU DESEJADA: \n\n");
	printf("\t1 - Registro do usuario \n");
	printf("\t2 - consultar usuario \n");
	printf("\t3 - Deletar usuario: \n\n");
	printf("OPIÇÃO: " );// fim do menu

	scanf("%d", &opcao);//comando para solicitar uma resposta a ser armazenadana variavel

		system("cls");

		switch(opcao) { // um tipode estrutura de repetição

			case 1: //inicio

				registro();//chamada de função 


			break;

			case 2:

				consultar();

			break;

			case 3: 


				deletar();


			break;

			default: 

				printf("opção invalida \n");
				system("pause");

			break;//fim
		}

	}

}
