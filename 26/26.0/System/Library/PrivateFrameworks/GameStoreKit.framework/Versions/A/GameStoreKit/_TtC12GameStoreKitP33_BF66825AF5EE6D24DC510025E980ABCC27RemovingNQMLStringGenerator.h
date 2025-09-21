@interface _TtC12GameStoreKitP33_BF66825AF5EE6D24DC510025E980ABCC27RemovingNQMLStringGenerator : NSObject <ASKNQMLParser> {
    void /* unknown type, empty encoding */ parser;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ accumulator;
    void /* unknown type, empty encoding */ didParseEverything;
}

- (id)init;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parserDidEndDocument:(id)a0;
- (void).cxx_destruct;
- (void)parserDidStartDocument:(id)a0;
- (void)parser:(id)a0 didEndElement:(unsigned long long)a1;
- (void)parser:(id)a0 didEndListOfStyle:(unsigned long long)a1;
- (void)parser:(id)a0 didFindCharacters:(id)a1;
- (void)parser:(id)a0 didStartElement:(unsigned long long)a1 attributes:(id)a2;
- (void)parser:(id)a0 didStartListOfStyle:(unsigned long long)a1;
- (void)parserDidEndListElement:(id)a0;
- (void)parserDidFindNewline:(id)a0;
- (void)parserDidStartListElement:(id)a0;

@end
