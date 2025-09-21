@class NSMutableArray;

@interface TCXmlPrefixStreamWriter : TCXmlStreamWriter {
    NSMutableArray *mStateStack;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)currentState;
- (char)addElement:(id)a0;
- (void)popState;
- (id)pushState;
- (char)writeAttribute:(id)a0 enumContent:(int)a1 map:(id)a2;
- (char)writeOneAttributeElementWithName:(id)a0 attributeName:(id)a1 enumContent:(int)a2 map:(id)a3;
- (char)startOAElement:(id)a0;
- (char)writeIndexAttribute:(id)a0 intContent:(unsigned long long)a1;
- (char)writeOAAttribute:(id)a0 doubleContent:(double)a1;
- (id)currentAttributePrefix;
- (id)currentElementPrefix;
- (id)initWithTextWriterProvider:(id)a0;
- (void)pushElementPrefix:(id)a0 attributePrefix:(id)a1;
- (void)pushOAState;
- (id)pushStateWithElementPrefix:(id)a0 attributePrefix:(id)a1;
- (id)pushStateWithSharedPrefix:(id)a0;
- (char)startElement:(id)a0;
- (char)writeAttribute:(id)a0 boolContent:(char)a1;
- (char)writeAttribute:(id)a0 content:(id)a1;
- (char)writeAttribute:(id)a0 doubleContent:(double)a1;
- (char)writeAttribute:(id)a0 intContent:(long long)a1;
- (char)writeAttribute:(id)a0 unsignedLongContent:(unsigned long long)a1;
- (char)writeOAAttribute:(id)a0 boolContent:(char)a1;
- (char)writeOAAttribute:(id)a0 content:(id)a1;
- (char)writeOAAttribute:(id)a0 enumContent:(int)a1 map:(id)a2;
- (char)writeOAAttribute:(id)a0 intContent:(long long)a1;
- (char)writeOneAttributeElementWithName:(id)a0 attributeName:(id)a1 boolContent:(char)a2;
- (char)writeOneAttributeElementWithName:(id)a0 attributeName:(id)a1 content:(id)a2;
- (char)writeOneAttributeElementWithName:(id)a0 attributeName:(id)a1 doubleContent:(double)a2;
- (char)writeOneAttributeElementWithName:(id)a0 attributeName:(id)a1 intContent:(long long)a2;
- (void)writeTextString:(id)a0 forElement:(id)a1;
- (char)writeValAttributeOnlyElementWithName:(id)a0 boolContent:(char)a1;
- (char)writeValAttributeOnlyElementWithName:(id)a0 content:(id)a1;
- (char)writeValAttributeOnlyElementWithName:(id)a0 doubleContent:(double)a1;
- (char)writeValAttributeOnlyElementWithName:(id)a0 enumContent:(int)a1 map:(id)a2;
- (char)writeValAttributeOnlyElementWithName:(id)a0 intContent:(long long)a1;

@end
