@class OIXMLElement, NSString;

@interface OIXMLDocument : OIXMLNode

@property (retain) OIXMLElement *rootElement;
@property (copy) NSString *version;
@property (copy) NSString *characterEncoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRootElement:(id)a0;
- (id)XMLString;
- (id)contentString;
- (id)openingTagString;
- (id)closingTagString;
- (id)createMutableXMLString;

@end
