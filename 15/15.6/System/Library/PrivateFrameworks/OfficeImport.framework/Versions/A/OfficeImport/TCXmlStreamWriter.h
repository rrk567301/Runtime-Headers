@class NSMutableSet, TCXmlTextWriterProvider;

@interface TCXmlStreamWriter : NSObject {
    TCXmlTextWriterProvider *mTextWriterProvider;
    unsigned int mCurrentDepth;
    char mContentAddedToTopElement;
    NSMutableSet *mAddedIds;
}

+ (char)startPlainElementInStream:(struct _xmlTextWriter { } *)a0 name:(id)a1;
+ (void)resetElementIds;
+ (char)writeAnchorTargetToStream:(struct _xmlTextWriter { } *)a0 name:(id)a1;
+ (char)endElementInStream:(struct _xmlTextWriter { } *)a0;
+ (id)newXmlStreamWriterWithZipEntryName:(id)a0 outputStream:(id)a1 isCompressed:(char)a2;
+ (char)startElementInStream:(struct _xmlTextWriter { } *)a0 name:(id)a1 prefix:(id)a2 ns:(const char *)a3;
+ (char)writeAttributeToStream:(struct _xmlTextWriter { } *)a0 name:(id)a1 content:(id)a2 prefix:(id)a3 ns:(const char *)a4;
+ (char)writeDtdToStream:(struct _xmlTextWriter { } *)a0 name:(id)a1 pubid:(id)a2 sysid:(id)a3 subset:(id)a4;
+ (char)writeNamespaceToStream:(struct _xmlTextWriter { } *)a0 prefix:(id)a1 uri:(const char *)a2;
+ (char)writePlainAttributeToStream:(struct _xmlTextWriter { } *)a0 name:(id)a1 content:(id)a2;
+ (char)writeStringToStream:(struct _xmlTextWriter { } *)a0 text:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (char)tearDown;
- (char)setUp;
- (char)endElement;
- (char)writeElementId:(id)a0;
- (char)writePlainAttribute:(id)a0 intContent:(long long)a1;
- (char)contentAddedToTopElement;
- (unsigned int)currentDepth;
- (char)endElementsToDepth:(unsigned int)a0;
- (id)initWithTextWriterProvider:(id)a0;
- (char)isWriting;
- (char)startElement:(id)a0 prefix:(id)a1 ns:(const char *)a2;
- (char)startPlainElement:(id)a0;
- (struct _xmlTextWriter { } *)textWriter;
- (id)textWriterProvider;
- (char)writeAnchorTarget:(id)a0;
- (char)writeAttribute:(id)a0 boolContent:(char)a1 prefix:(id)a2 ns:(const char *)a3;
- (char)writeAttribute:(id)a0 content:(id)a1 prefix:(id)a2 ns:(const char *)a3;
- (char)writeAttribute:(id)a0 doubleContent:(double)a1 prefix:(id)a2 ns:(const char *)a3;
- (char)writeAttribute:(id)a0 enumContent:(int)a1 map:(id)a2 prefix:(id)a3 ns:(const char *)a4;
- (char)writeAttribute:(id)a0 intContent:(long long)a1 prefix:(id)a2 ns:(const char *)a3;
- (char)writeDtd:(id)a0 pubid:(id)a1 sysid:(id)a2 subset:(id)a3;
- (char)writeNamespace:(id)a0 uri:(const char *)a1;
- (char)writePlainAttribute:(id)a0 boolContent:(char)a1;
- (char)writePlainAttribute:(id)a0 content:(id)a1;
- (char)writePlainAttribute:(id)a0 doubleContent:(double)a1;
- (char)writePlainAttribute:(id)a0 enumContent:(int)a1 map:(id)a2;
- (char)writeString:(id)a0;

@end
