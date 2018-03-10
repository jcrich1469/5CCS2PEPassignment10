#include "SomeClass.h"


int main() {

   SomeClass* sClass = new SomeClass(42);
	sClass->printItOut();
	delete sClass;
}
