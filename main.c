#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

//Prototipado de 3 funciones
void Contar(int Edades[]);
void promEdad(int Edades[]);

//Funcion principal
int main(void) {
	int Edades[50];
	int i;
	puts("*** Este programa simula la entrada de la edad de 50 personas (de forma aleatoria entre 1 y 50) ****\n\n");
	system("pause");
	system("cls");

	srand(time(NULL)); //semilla para rand
	for (i = 0; i < 50; i++) { //Genera los valores aleatorios y los asigna al arreglo
		Edades[i] = rand() % 50 + 1;
		printf("Edad generada: %d \n", Edades[i]);
	}

	Contar(Edades); //llamado a funcion
	promEdad(Edades); //llamado a funcion

	system("pause");
	return 0;
}

//Definicion de funcion 1 (Cuenta mayores de edad y menores)
void Contar(int Edades[]) {
	int i, Mayor = 0, Menor = 0;

	for (i = 0; i < 50; i++) { //Cont
		if (Edades[i] > 17) {
			Mayor = Mayor + 1;
		}
		else {
			Menor = Menor + 1;
		}
	}
	printf("\n\tPersonas Mayores de edad: %d \n", Mayor);
	printf("\tPersonas Menores de edad: %d \n", Menor);

	if (Mayor == Menor) {
		puts("\tEs la misma cantidad de menores y mayores");
	}
	else if (Mayor > Menor) {
		puts("\tHay mas mayores de edad");
	}
	else {
		puts("\tHay mas menores de edad");
	}
}

//Definicion de funcion 2 (calula edad promedio)
void promEdad(int Edades[]) {
	int i;
	int suma = 0;
	for (i = 0; i < 50; i++) {
		suma = suma + Edades[i];
	}
	printf("\tEl promedio de edad es: %d \n", suma / 50);
}

