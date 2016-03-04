
#ifndef __dom_h__
#define __dom_h__

// THIS IS AN EXPERIMENT
// In production this file would be automatically generated.

#include <emscripten/emscripten.h>
#include <emscripten/html5.h>
#include <emscripten/val.h>
#include <emscripten/bind.h>

namespace html {

class Body;
class Element;
class Naviagtor;
class Window;
class Div;

class Element {
public:
	void setInnerText(const char*);
	void appendChild(Element*);
private:
	Element();
};


class Document {
public:
	static Document* document();
	Body* body();
private:
	Document() {
		//_em_doc = emscripten::val::global("Document");
	}

	//emscripten::val _em_doc;

	Body* _body;
};

class Body : public Element{
public:
	Element* createElement(const char*);

private:
	Body();
};



} // namespace html

#endif

