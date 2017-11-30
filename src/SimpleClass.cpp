
#include <Godot.hpp>
#include <Reference.hpp>

#include <SimpleClass.h>

#include <reliable.h>

using namespace godot;

SimpleClass::SimpleClass() {
	Godot::print("CTOR");
}

SimpleClass::~SimpleClass() {
	Godot::print("DTOR");
}

Variant SimpleClass::method(Variant arg) {
	reliable_init();
	
	Variant ret;
	ret = arg;
	return ret;
}

void SimpleClass::_register_methods() {
	Godot::print("REGISTER PROPERTIES");
	
	register_method("method", &SimpleClass::method);

	//register_property((char *)"base/name", &SimpleClass::_name, String("SimpleClass"));
	//register_property("attrx", &SimpleClass::_name, Variant("asdasd"));
	//register_method((char *)"_init", &GDPlayer::_init);
	//register_signal<GDPlayer>("move");
}
