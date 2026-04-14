@class NSString, NSMutableString, NSMutableArray;

@interface IFNSXMLParserPlistDelegate : NSObject {
    id _parent;
    NSString *_startElement;
    NSMutableString *_stringAccumulator;
    NSMutableArray *_containerStack;
    id _finalValue;
    id _currentValue;
    id _currentKey;
}

- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (id)value;
- (void)dealloc;
- (id)initWithElementName:(id)a0 andParentParser:(id)a1;

@end
