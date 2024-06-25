int vermelho = 8;
int amarelo = 9;
int verde = 10;
int pevermelho = 11;
int peverde = 12;


void setup () {
 pinMode (vermelho, OUTPUT) ; 
 pinMode (amarelo, OUTPUT) ; 
 pinMode (verde, OUTPUT) ;
 pinMode (pevermelho, OUTPUT) ; 
 pinMode (peverde, OUTPUT) ;
}

void loop () {
// carro vermelho PEDRESTRE VERDE 
digitalWrite (vermelho, HIGH) ;
digitalWrite (amarelo, LOW) ; 
digitalWrite (verde, LOW) ;
digitalWrite (pevermelho, LOW) ;
digitalWrite (peverde, HIGH) ;
  delay (4000) ;

// CARRO VERDE PEDESTRE VERMELHO 
digitalWrite (vermelho, LOW) ;
digitalWrite (amarelo, LOW) ; 
digitalWrite (verde, HIGH) ;
digitalWrite (pevermelho, HIGH) ;
digitalWrite (peverde, LOW) ;
  delay (3000) ;

// CARRO AMARELO PEDESTRE VERMELHO 
digitalWrite (vermelho, LOW) ;
digitalWrite (amarelo, HIGH) ; 
digitalWrite (verde, LOW) ;
digitalWrite (pevermelho, HIGH) ;
digitalWrite (peverde, LOW) ;
delay (1000) ;

}