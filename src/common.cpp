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

#include <Godot.hpp>

#include <SimpleClass.h>
//#include <player.h>

using namespace godot;

GDNATIVE_INIT(godot_gdnative_init_options *options) {
	Godot::print("GDNATIVE_INIT");
}

GDNATIVE_TERMINATE(godot_gdnative_terminate_options *options) {
	Godot::print("GDNATIVE_TERMINATE");
}

NATIVESCRIPT_INIT() {
	Godot::print("NATIVESCRIPT_INIT");
	
	register_class<SimpleClass>();
	//register_class<ColWorld>();
}