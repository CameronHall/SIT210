int photosensor = A0;

int lightlvl;

void setup() {

}

void loop() {

    lightlvl = analogRead(photosensor);
    Particle.publish("light", String(lightlvl), PRIVATE);

    delay(3000);
}