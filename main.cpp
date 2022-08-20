#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float salario, inss, ir, salario_liq, valor_ir;
	int tributo, tabela_ir;
	tributo = 0;
	
	
	printf("Informe seu Salario: ");
	scanf("\n %f", &salario);
	
	if (salario <= 1903.38){
		ir = 0;
	} else
	if (salario >= 1903.98 &&  salario <=2826.65){
		ir = salario * 0.075;
	}
	else
	if (salario >= 2826.66 &&  salario <=3751.05){
		ir = salario * 0.15;
	}
	else
	if (salario >= 3751.06 &&  salario <=4664.68){
		ir = salario * 0.225;
	}
	else
	if (salario >= 4664.68){
		ir = salario * 0.275;
	}		
	
	
	if (salario <= 1693.72){
		inss = salario * 00.8;
		salario_liq = (salario - inss);		
		tributo = 1;
		valor_ir = ir;
		
	} 
	else
	if (salario >= 1693.73 &&  salario <=2822.90){
		inss = salario * 00.9;
		salario_liq = (salario - inss) - ir;
		tributo = 2;
		valor_ir = ir;		
	}
	else
	if (salario >= 2822.91 &&  salario <=5646.80){
		inss = salario * 00.11;
		salario_liq = (salario - inss) - ir;
		tributo = 3;
		valor_ir = ir;		
	}
	else
	if (salario >= 5646.80){
		inss = 621.04;
		salario_liq = (salario - inss) - ir;
		tributo = 4;
		valor_ir = ir;		
	}
	
	printf ("\n Seu salario com desconto: %2.f", salario_liq);
	printf ("\n Seu desconto de INSS: %2.f", inss);
	printf ("\n Sua aliquota desconto: %d", tributo);
	printf ("\n Valor de IR descontado do salario: %2.f", ir);
}

