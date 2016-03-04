#include <stdio.h>

#include "dom.h"


int main() {
  
  html::Document* doc = html::Document::document();

  html::Body* body = doc->body();

  html::Element* element = body->createElement("div");
  element->setInnerText("Hello World!");

  body->appendChild(element);


  return 0;
}



namespace html {
	Document* Document::document() {
		static Document* d_ = nullptr;
		if (!d_)
			d_ = new Document();
		return d_;
	}
}