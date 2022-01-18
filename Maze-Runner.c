#define COLOR_SENSOR_PORT S4

bool value = true;
int dir = 0;
task main()
{
SensorType[COLOR_SENSOR_PORT] = sensorEV3_Color;
wait1Msec(50);
SensorMode[COLOR_SENSOR_PORT] = modeEV3Color_Reflected;

dir = SensorValue[COLOR_SENSOR_PORT];

//start until it find black
while (SensorValue[COLOR_SENSOR_PORT] > 10){
    motor[motorA] = 5;
    motor[motorD] = 5;
    wait1Msec(100);

        }

//line tracking begins
while (dir<30){
    dir = SensorValue[COLOR_SENSOR_PORT];
    if (dir>10){
        motor[motorA] = 20;
        motor[motorD] = 5;
        wait1Msec(10);
}

    else{
        motor[motorA] = -5;
        motor[motorD] = 25;
        wait1Msec(40);
}
}

//red line
motor[motorA] = 25;
motor[motorD] = 25;
wait1Msec(4000);

while (dir<40){
    dir = SensorValue[COLOR_SENSOR_PORT];
    if (dir>10){
        motor[motorA] = 15;
        motor[motorD] = 5;
        wait1Msec(10);
}

    else{
        motor[motorA] = 0;
        motor[motorD] = 20;
        wait1Msec(40);
}
}

//yellow line
motor[motorA] = 13;
motor[motorD] = 13;
wait1Msec(1500);

motor[motorA] = 0;
motor[motorD] = 0;
wait1Msec(1500);

int dir = 15;

while (dir<35){
    dir = SensorValue[COLOR_SENSOR_PORT];
    if (dir>10){
        motor[motorA] = 15;
        motor[motorD] = 5;
        wait1Msec(10);
}

    else{
        motor[motorA] = 0;
        motor[motorD] = 20;
        wait1Msec(40);
}
}

//yellow line then bridge
motor[motorA] = 100;
motor[motorD] = 100;
wait1Msec(2200);


motor[motorA] = 0;
motor[motorD] = 0;
wait1Msec(220);
dir = 15;

while (dir<35){
    dir = SensorValue[COLOR_SENSOR_PORT];
    if (dir>10){
        motor[motorA] = 20;
        motor[motorD] = 5;
        wait1Msec(10);
}

    else{
        motor[motorA] = -5;
        motor[motorD] = 25;
        wait1Msec(40);
}
}

motor[motorA] = 15;
motor[motorD] = 15;
wait1Msec(500);

dir = 15;

while (dir<35){
    dir = SensorValue[COLOR_SENSOR_PORT];
    if (dir>10){
        motor[motorA] = 20;
        motor[motorD] = 5;
        wait1Msec(10);
}

    else{
        motor[motorA] = -5;
        motor[motorD] = 25;
        wait1Msec(40);
}
}

motor[motorA] = 15;
motor[motorD] = 15;
wait1Msec(1500);

dir = 15;

while (dir<35){
    dir = SensorValue[COLOR_SENSOR_PORT];
    if (dir>10){
        motor[motorA] = 20;
        motor[motorD] = 5;
        wait1Msec(10);
}

    else{
        motor[motorA] = -5;
        motor[motorD] = 25;
        wait1Msec(40);
}
}

}