// Calificacion

int main(){
	int calif = 0.0;
	printf("Ingrese la calificacion: ");
	scanf("%d", &calif);
	
	if(calif >=90 && calif <= 100){
		printf("Exelente bby.");
	
	}else if(calif >=80 && calif <= 89){
		printf("Muy bueno.");
	
	}else if(calif >=70 && calif <= 79){
		printf("Bueno.");
	
	}else if(calif >=60 && calif <= 69){
		printf("Aprovado.");
	
	}else if(calif >=0 && calif <= 59){
		printf("Reprovado.");
	
	}else{
		printf("Calificacion no valida");
	}
	
	return 0;
}
