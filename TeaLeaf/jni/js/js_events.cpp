/* @license
 * This file is part of the Game Closure SDK.
 *
 * The Game Closure SDK is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 
 * The Game Closure SDK is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 
 * You should have received a copy of the GNU General Public License
 * along with the Game Closure SDK.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "js/js_events.h"
#include "js/js.h"

using namespace v8;

CEXPORT void js_dispatch_event(const char *event_str) {
	Locker l(getIsolate());
	HandleScope handle_scope;
	Handle<Context> context = getContext();
	if (!context.IsEmpty()) {
		Context::Scope context_scope(context);
		TryCatch try_catch;
		Handle<Object> global = context->Global();
		if(!global.IsEmpty()) {
			Handle<Object> native = Handle<Object>::Cast(global->Get(STRING_CACHE_NATIVE));

			if(!native.IsEmpty()) {
				Handle<Object> events = Handle<Object>::Cast(native->Get(STRING_CACHE_events));

				if(!events.IsEmpty()) {
					Handle<Value> function_object = events->Get(STRING_CACHE_dispatchEvent);

					if (!function_object.IsEmpty()) {
						Handle<Function> dispatch_event = Handle<Function>::Cast(function_object);

						if (dispatch_event->IsFunction()) {
							Handle<Value> args[] = { String::New(event_str) };
							Handle<Value> result = dispatch_event->Call(global, 1, args);
							if (result.IsEmpty()) {
								ReportException(&try_catch);
							}

							// Skip the log error message (see below)
							return;
						}
					}
				}
			}
		}

		LOG("{js} ERROR: Dropped an event because the JavaScript code does not hook events");
	} else {
		LOG("{js} ERROR: Dropped an event because the JavaScript engine is not running");
	}
}

typedef struct input_event_t {
	int id;
	int type;
	int x;
	int y;
} input_event;

CEXPORT void js_dispatch_input_event(int id, int type, int x, int y) {
	
}
