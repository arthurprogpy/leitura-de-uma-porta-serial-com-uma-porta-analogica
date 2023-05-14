const int analogInPin = A0; // Entrada analogica do potenciometro
const int analogOutPin = 11; // Saida PWMonde o LED esta conectado
int sensorValue = 0; // leitura do potenciometro
int outputValue = 0; // leitura da saida PWM
void setup() {
// inicializa a comunicacao serial:
Serial.begin(9600);
}
void loop() {
sensorValue = analogRead(analogInPin); // Leitura da entrada analogica
// mapeia o resultado da entrada analogica dentro do intervalo de 0 a 255:
outputValue = map(sensorValue, 0, 1023, 0, 255);
analogWrite(analogOutPin, outputValue);
// imprime o resultado no monitor serial:
Serial.print("sensor = " );
Serial.print(sensorValue);
Serial.print("\t output = ");
Serial.println(outputValue);
delay(2); // Aguarda 2 milissegundos
}
