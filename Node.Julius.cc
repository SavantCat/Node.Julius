#include <iostream>
#include <node.h>
#include <v8.h>
#include <string.h>

using namespace std;
using namespace v8;

Handle<Value> thread(const Arguments& args) {
	HandleScope scope;

	return scope.Close(Undefined());
}

void init(Handle<Object> exports) {
	exports->Set(String::NewSymbol("main"), FunctionTemplate::New(thread)->GetFunction());
}

NODE_MODULE(thread, init)