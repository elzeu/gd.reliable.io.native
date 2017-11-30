/**
 * Copyright 2017 Insonia Studios. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 **/

#ifndef INIT_H
#define INIT_H

#include <core/Godot.hpp>
#include <Reference.hpp>

using namespace godot;

class SimpleClass : public GodotScript<Reference> {

	GODOT_CLASS(SimpleClass)
 
public:
	SimpleClass();
	~SimpleClass();
 
	Variant method(Variant arg);

	static void _register_methods();
 
private:
	//Variant _name;

};

 #endif // INIT_H