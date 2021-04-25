int photosensor = A0;
int lightLevel = 0;

void setup() {
    Particle.variable("light", &lightLevel, INT);
    pinMode(photosensor, INPUT);
}

void loop() {
    lightLevel = analogRead(photosensor);
    Particle.publish("light", String(lightLevel), PRIVATE);
    delay(3000);
}
