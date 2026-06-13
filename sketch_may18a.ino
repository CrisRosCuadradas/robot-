// --- Pines de control del Motor Derecho ---
const int ENA = 9; 
const int IN1 = 8;
const int IN2 = 7;

// --- Pines de control del Motor Izquierdo ---
const int ENB = 3;
const int IN3 = 5;
const int IN4 = 4;

// --- Pines de los botones de movimiento (Mando 1) ---
const int botonAdelante = A0; 
const int botonAtras = A1;
const int botonIzquierda = A2;
const int botonDerecha = A3;

// --- Pines de los botones de función (Mando 2) ---
// Se cambiaron los pines 3 y 4 a 10, 11 y 12 para evitar conflictos con los motores
const int UP_BUTTON    = 10;
const int LEFT_BUTTON  = 11;
const int RIGHT_BUTTON = 12;

// Variables para almacenar el estado anterior de cada botón de función
int lastUpState    = HIGH;
int lastLeftState  = HIGH;
int lastRightState = HIGH;

void setup() {
  // Iniciar el Monitor Serie a 9600 baudios
  Serial.begin(9600);
  
