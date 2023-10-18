#pragma once
#include "guest.h"
#include "student.h"

// ensure that 1 "person" per "seat"
// 

typedef union person {  //allows 1 only to use the space
	GUEST guest;		//sizeof(GUEST) == 80
	STUDENT student;    // sizeof(STUDENT) == 44
	//PROFESSOR professor;
} PERSON;               //sizeof(PERSON) == 80

typedef enum type { STUDENT_TYPE, GUEST_TYPE } TYPE;

typedef struct occupant {
	TYPE personType;
	PERSON person;
} OCCUPANT;

//C
OCCUPANT CreateOccupantFromStudent(STUDENT s);
OCCUPANT CreateOccupantFromGuest(GUEST g);

//RU

//D
void DestroyOccupant(OCCUPANT o);
