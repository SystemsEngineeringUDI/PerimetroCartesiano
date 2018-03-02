/* 
@autor:
 * Cesar Villalobos
 * Jhon Velasco
 * @frediv0406
 * Estudiante: Ing.Sistemas UDI
*/

/*
Escribir un algoritmoque lea una cantidad definida de puntos cartesianos (x,y)
y calcule el perimetro de la figura que se forma al trazar lineas rectas entre 
cada par de puntos sucesivos. El punto siguiente del ultimo punto es el inicial
*/

#include <stdio.h>
#include <math.h>

typedef struct Puntos{ //Se crea la estructura
	int x;
	int y;
}pun;

pun leerPun(){ //Se leen los puntos asociados a la estructura
	pun P;
	printf("Ingrese la coordenada en x");
	scanf("%d",&P.x);
	printf("Ingrese la coordenada en y");
	scanf("%d",&P.y);
	return P;
}

int PedirPuntos(){ //Se pide el numero de puntos
	int n;
	printf("Ingrese la cantidad de puntos: ");
	scanf("%d",&n);
	return n;
}

float raicita(pun a,pun b){ //Metodo que halla la norma entre dos puntos
	float raizita;
	int m,n;
	m=b.x-a.x;
	n=b.y-a.y;
	raizita=sqrt(pow(m,2)+pow(n,2));
	return raizita;
}

void impresioncita(float a){ //Se imprime el resultado
	printf("El perimetro de la figurita es: %f ",a);
}
int main(){
	int i;
	float b=0;
	int m=PedirPuntos(); //Se llama la función y se asigna lo que retorna a una variable
	pun v[m]; //Se crea un arreglo de estructuras
	for(i=0;i<m;i++){ //Se llena el vector
		pun b=leerPun();
		v[i]=b;
	}
	for (i=0;i<(m-1);i++){ //Se halla el perimetro sin tener en cuenta la unión entre el primer y ultimo punto
		float a=raicita(v[i],v[i+1]);
		b+=a;
	}
	float d=raicita(v[0],v[m-1]); //Se halla la norma entre el primer y ultimo termino
	float c=b+d;
	impresioncita(c);//Se imprime el perimetro total
}
