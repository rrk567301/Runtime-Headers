@class OIXMLElement, NSString;

@interface OIXMLDocument : OIXMLNode

@property (retain) OIXMLElement *rootElement;
@property (copy) NSString *version;
@property (copy) NSString *characterEncoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRootElement:(id)a0;
- (id)XMLString;
- (id)contentString;
- (id)createMutableXMLString;
- (id)openingTagString;
- (id)closingTagString;

@end
