#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

float valor1,valor2,x,resultado;

void Soma (){
resultado = valor1 + valor2;
cout<<"A soma dos valores "<<valor1<<"+"<<valor2<<"="<<resultado<<endl;
}
void Subtrair (){
resultado = valor1 - valor2;
cout<<"A subtração dos valores "<<valor1<<"-"<<valor2<<"="<<resultado<<endl;
}
void Multiplicar(){
resultado = valor1 * valor2;
cout<<"A multiplicação dos valores "<<valor1<<"*"<<valor2<<"="<<resultado<<endl;
}
void Dividir(){
resultado = valor1 / valor2;
cout<<"A divisão dos valores "<<valor1<<"/"<<valor2<<"="<<resultado<<endl;
}
void Salario(){
  int salario,tempo_casa,bonus;
  cout<<"Informe seu salario atual: ";   cin>>salario;
  cout<<"Informe seu tempo registrado de trabalho em anos: "; cin>>tempo_casa;
  if (tempo_casa <=5){
    bonus = salario + (salario * 10) / 100;
     cout<<"Seu salário com bonus de 10 por cento é de: "<<"R$"<<bonus;
  }
  else if(tempo_casa <=15 ){
    bonus = salario + (salario * 20) / 100;
     cout<<"Seu salário com bonus de 20 por cento é de: "<<"R$"<<bonus;
  }
  else if (tempo_casa <=30){
    bonus = salario + (salario * 40) / 100;
    cout<<"Seu salário com bonus de 40 por cento é de: "<<"R$"<<bonus;
  }
  else {
    bonus = salario + (salario * 60) / 100;
    cout<<"Seu salário com bonus de 60 por cento é de: "<<"R$"<<bonus;
  }
}
void Tabuada(){
  int numero = 0;
  cout<<"Informe o número que deseja verificar a tabuada: ";cin>>numero;
  for (int x = 1; x <= 10; x++){
    if (numero > 100){
      cout<<"Valor incorreto, tente novamente!"<<endl;
    }
    else {
    cout<<"tabuada de "<<x <<" X "<<numero<<" = "<<x*numero<<endl;
    }
  } 
}
void Imc(){
  float peso,altura,imc;
  cout<<"Informe seu peso: ";
  cin>>peso;
  cout<<"Informe sua altura: ";
  cin>>altura;
  imc = peso / (altura * altura);
  if (imc < 18.5){
    cout<<"Abaixo do Peso"<<endl;
    cout<<"Seu imc é de: "<< fixed << setprecision(2)<<imc<<endl;
  }
  else if (imc >= 18.6 && imc <=24.99){
    cout<<"Peso Normal"<<endl;
    cout<<"Seu imc é de: "<< fixed << setprecision(2)<<imc<<endl;
  }
  else if (imc >= 25.0 && imc <=29.99){
    cout<<"Sobrepeso"<<endl;
    cout<<"Seu imc é de: "<< fixed << setprecision(2)<<imc<<endl;
  }
  else if (imc >= 30.0 && imc <=34.99){
    cout<<"Obesidade grau I"<<endl;
    cout<<"Seu imc é de: "<< fixed << setprecision(2)<<imc<<endl;
  }
  else if (imc >= 35.0 && imc <=39.99){
    cout<<"Obesidade grau II"<<endl;
    cout<<"Seu imc é de: "<< fixed << setprecision(2)<<imc<<endl;
  }
  else {
    cout<<"Obesidade grau III"<<endl;
    cout<<"Seu imc é de: "<< fixed << setprecision(2)<<imc<<endl;
  }
}
void ParImpar(){
int numero;
cout<<"Informe um número: ";
cin>>numero;
if(numero % 2 == 0){
  cout<<"Número Par ";
}
else {
   cout<<"Número Impar ";
}
}
void TaxaMetabolica(){
  int altura,sexo,idade;
  float peso;

  cout<<"Informe seu sexo:"<<endl;
  cout<<"1. Masculino"<<endl;
  cout<<"2. Feminino"<<endl;
  cin>>sexo;
  if (sexo == 1){
    float tmbH;
    cout<<"Informe seu peso: ";     cin>>peso;
    cout<<"Informe sua altura em Cm: ";   cin>>altura;
    cout<<"Informe sua idade: ";    cin>>idade;
    tmbH = 66 + (13.7 * peso) + (5 * altura) - (6.8 * idade);
    cout<<"Sua taxa metabolica é de: "<<tmbH;
  }
  else if(sexo == 2){
     float tmbM;
    cout<<"Informe seu peso: ";     cin>>peso;
    cout<<"Informe sua altura: ";   cin>>altura;
    cout<<"Informe sua idade: ";    cin>>idade;
    tmbM = 655 + (9.6 * peso) + (1.8 * altura) - (4.7 * idade);
    cout<<"Sua taxa metabolica é de: "<<tmbM;
  }
  else{
    cout<<"Escolha uma opção correta!"<<endl;
  }

//TMB Mulher = 655 + (9,6 * P) + (1,8 * A) – (4,7 * I)
//TMB Homem = 66 + (13,7 * P) + (5 * A) – (6,8 * I)
}
void ConversaoTemp(){
int escolha;  float celsius,fahrenheit,rankine,kelvin;
cout<<"Escolha a conversão desejada de temperaturas: "<<endl;
cout<<"1.Fahrenheit para Celsius"<<endl;
cout<<"2.Celsius para Fahrenheit"<<endl;
cout<<"3.Celsius para Kelvin "<<endl;
cout<<"4.Celsius para Rankine "<<endl;
cin>>escolha;
//Celsius into/para Fahrenheit: (oC x 9) / 5) + 32
//Fahrenheit into/para Celsius: (oF – 32) x 5) / 9
//Fórmula	10 °C + 273,15
//ºR =℃ * 1.8000 + 491.67
//56 °C × 9/5 + 491,67 =
if (escolha == 1){
cout<<"Informe quantidade de graus em Fahrenheit: "<<endl;
cin>>fahrenheit;
celsius = (fahrenheit - 32) * 5 / 9;
cout<<"A temperatura em Celsius é de: "<<celsius<<"°C"<<endl;
}
else if (escolha == 2){
cout<<"Informe quantidade de graus em Celsius: "<<endl;
cin>>celsius;
fahrenheit = (celsius * 9) / 5 + 32;
cout<<"A temperatura em fahrenheit é de: "<<fahrenheit<<"°F"<<endl;
}
else if (escolha == 3){
cout<<"Informe quantidade de graus em Celsius: "<<endl;
cin>>celsius;
kelvin = celsius + 273.15;
cout<<"A temperatura em Kelvin é de: "<<kelvin<<"°K"<<endl;
}
else if (escolha == 4){
cout<<"Informe quantidade de graus em Celsius: "<<endl;
cin>>celsius;
rankine = celsius * 9 / 5 + 491.67;
cout<<"A temperatura em Rankine é de: "<<rankine<<"°R"<<endl;
}
else{
cout<<"Escolha uma opção correta";
}
}

void ExcedenteSeg(){
  int formapag;

  float kmprest,kmcliente,kmcobrado,kmexcedente,kmdeslocamento, kmtotalexc;
  

 /* Total fechado com o Prestador;
(Menos) Direito do Cliente;
(Menos) Deslocamento;
(Resultado: Total de KIVS Excedente

Cliente tem direito à: __ kivs. Fechado com prestador em: __ kivs.
Total de __ Kivs excedentes.
Prestador cobra R$_ por cada km rodado, totalizando um valor de R$ ___.
Forma de Pagamento____.
*/
cout<<"Informe o total fechado em kivs(kilometragem) com o Prestador: ";
cin>>kmprest;
cout<<"Informe o total de kmviagem(kivs) limite do Cliente: ";
cin>>kmcliente;
cout<<"Informe o valor cobrado em Reais cobrado por cada km pelo prestador: ";
cin>>kmcobrado;
cout<<"Informe o km de deslocamento do Prestador(se houver): ";
cin>>kmdeslocamento;

if(kmprest > kmcliente){ 
cout<<"\n!!!TEM EXCEDENTE!!!"<<endl<<endl;
cout<<"Escolha a formas de pagamento: "<<endl;
cout<<"1. A vista (local/destino)"<<endl;
cout<<"2. A vista e transferencia bancaria"<<endl;
cin>>formapag;
if (formapag == 1){
string pagamento ("A vista (local/destino)"); 

kmexcedente =  kmprest - kmcliente - kmdeslocamento;
kmtotalexc = kmexcedente * kmcobrado;
cout<<"\nCliente tem direito à: "<<kmcliente<<"kivs. "<<"Fechado com prestador em: "<<kmprest<<"kivs."<<endl<<"Total de "<<kmexcedente<<"Kivs excedentes."<<endl<<"Prestador cobra R$"<<kmcobrado<<" por cada km rodado, totalizando um valor de R$"<<kmtotalexc<<"."<<endl;

cout<<"Forma de Pagamento "<<pagamento<<endl; 

}
else if (formapag == 2){
string pagamento ("A vista (local/destino)/transferencia bancaria"); 
kmexcedente =  kmprest - kmcliente - kmdeslocamento;
kmtotalexc = kmexcedente * kmcobrado;
cout<<"\nCliente tem direito à: "<<kmcliente<<"kivs. "<<"Fechado com prestador em: "<<kmprest<<"kivs."<<endl<<"Total de "<<kmexcedente<<"Kivs excedentes."<<endl<<"Prestador cobra R$"<<kmcobrado<<" por cada km rodado, totalizando um valor de R$"<<kmtotalexc<<"."<<endl;

cout<<"Forma de Pagamento "<<pagamento<<endl; 
}
else{
cout<<"Escolha uma opção válida!"<<endl;
}
}
else{
cout<<"SEM EXCEDENTE"<<endl<<endl;

}
}
void  DistribOP(){
int escolhakm;
float kmprest,kmdeslocamento,kmsaida = 40,kmop,kmcliente,kmlimite,kmverif,kmfinal;
  
cout<<"!!! Bem Vindo a Distribuição de KMS na OP !!!"<<endl;
cout<<"Escolha qual fechamento correto de ROTA deseja:"<<endl;
cout<<"1. Rota Cliente (Local - Destino - Local) "<<endl;
cout<<"2. Rota Prestador (Base - Local - Destino - Base) "<<endl;
cin>>escolhakm;

if(escolhakm == 1){

cout<<"Informe o total fechado em kivs(kilometragem) com o Prestador: ";
cin>>kmprest;

kmop = kmprest - kmsaida;

cout<<"Segue distribuição de senhas:"<<endl<< "Saida: "<<kmsaida<<"kms" <<endl<<"Kmviagem: "<<kmop<<"kms"<<endl;

}

else if(escolhakm == 2){
cout<<"Informe o total fechado na Rota Prestador: ";
cin>>kmprest;
cout<<"Informe o total fechado na Rota Cliente: ";
cin>>kmcliente;


kmdeslocamento = kmprest - kmcliente;
kmop = kmprest - kmsaida - kmdeslocamento;

cout<<"Segue distribuição de senhas:"<<endl<< "Saida: "<<kmsaida<<"kms" <<endl<<"Kmviagem: "<<kmop<<"kms"<<endl<<"Deslocamento: "<<kmdeslocamento<<"kms"<<endl;  

}
else {
  cout<<"Escolha incorreta,tente novamente!";
}

}
void  FraseKM(){
float kmrota,kmprest,kmfechado;
int escolha;

cout<<"Informe o total que a rota google está dando em KMs: ";
cin>>kmrota;
cout<<"Informe o total que a rota do prestador informou querer fechar em KMs: ";
cin>>kmprest;
cout<<"Informe o total que a rota fechado final em KMs com prestador: ";
cin>>kmfechado;
cout<<"1.Local - Destino - Local"<<endl;
cout<<"2.Base - Local - Destino - Base"<<endl;
cin>>escolha;

if(escolha == 1){
cout<<"Rota Google "<<kmrota<<" KMS TOTAIS (LOCAL DESTINO LOCAL)"<<endl<<"Base informa "<<kmprest<<" KMS TOTAIS "<<endl<<"Base fechado "<<kmfechado<<" KMS TOTAIS "<<endl;
}
else if (escolha == 2){
cout<<"Rota Google "<<kmrota<<" KMS TOTAIS (BASE LOCAL DESTINO  BASE)"<<endl<<"Base informa "<<kmprest<<" KMS TOTAIS "<<endl<<"Base fechado "<<kmfechado<<" KMS TOTAIS "<<endl;
}
else{
  cout<<"Escolha incorreta,tente novamente!"<<endl;
}


}


int main() {

  do {
  cout<<"\n***Bem Vindo a CalculaTotal***"<<endl;
  cout<<"Agora selecione a opção correspondente:  "<<endl;
  cout<<"0. Somar"<<endl;
  cout<<"1. Subtrair"<<endl;
  cout<<"2. Multiplicar"<<endl;
  cout<<"3. Dividir"<<endl;
  cout<<"4. Sair"<<endl;
  cout<<"5. Calculo de Salário Bonus"<<endl;
  cout<<"6. Calculo de Tabuada"<<endl;
  cout<<"7. Calculo de IMC"<<endl;
  cout<<"8. Par ou Impar"<<endl;
  cout<<"9. Taxa Metabolica Basal"<<endl;
 cout<<"10. Conversão de Temperaturas"<<endl;
 cout<<"11. Calculo Excedente para Segurado"<<endl;
 cout<<"12. Distribuição de Kilometragem na OP"<<endl;
 cout<<"13. Fraseologia FechamentoKM"<<endl;
  cin>>x;
  if (x == 0){
  cout<<"Informe um numero: "<<endl;    cin>>valor1;
  cout<<"Informe outro numero: "<<endl; cin>>valor2;
    Soma();
  }
  else if (x == 1){
  cout<<"Informe um numero: "<<endl;    cin>>valor1;
  cout<<"Informe outro numero: "<<endl; cin>>valor2;
    Subtrair();
  }
  else if (x == 2 ){
  cout<<"Informe um numero: "<<endl;    cin>>valor1;
  cout<<"Informe outro numero: "<<endl; cin>>valor2;
    Multiplicar();
  }
  else if (x == 3 ){
  cout<<"Informe um numero: "<<endl;    cin>>valor1;
  cout<<"Informe outro numero: "<<endl; cin>>valor2;
    Dividir();
  }
  else if(x == 5){
    Salario();
  }
   else if(x == 6){
    Tabuada();
  }
  else if(x == 7){
    Imc();
  }
  else if(x == 7){
    Imc();
  }
  else if (x == 8){
    ParImpar();
  }
  else if (x == 9){
    TaxaMetabolica();
  }
  else if(x == 10){
    ConversaoTemp();
  }
  else if(x == 11){
    ExcedenteSeg();
  }
  else if(x == 12){
    DistribOP();
  }
  else if(x == 13){
    FraseKM();
  }
  } while (x!=4);
}