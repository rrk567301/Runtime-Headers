@interface _TtC7MusicUIP33_D4C4DFC8018D3B30A38CA841D943D4D414TagParserState : NSObject <NSXMLParserDelegate> {
    void /* unknown type, empty encoding */ finalAttributedString;
    void /* unknown type, empty encoding */ parser;
    void /* unknown type, empty encoding */ attributeDictStack;
    void /* unknown type, empty encoding */ currentString;
    void /* unknown type, empty encoding */ xmlParser;
}

- (id)init;
- (void).cxx_destruct;
- (void)parserDidStartDocument:(id)a0;
- (void)parserDidEndDocument:(id)a0;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parser:(id)a0 validationErrorOccurred:(id)a1;

@end
