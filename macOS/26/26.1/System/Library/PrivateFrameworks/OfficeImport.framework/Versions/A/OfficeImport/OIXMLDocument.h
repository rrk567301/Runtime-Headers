@class OIXMLElement, NSString;

@interface OIXMLDocument : OIXMLNode

@property (retain) OIXMLElement *rootElement;
@property (copy) NSString *version;
@property (copy) NSString *characterEncoding;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)XMLString;
- (id)initWithRootElement:(id)a0;
- (id)contentString;
- (id)closingTagString;
- (id)createMutableXMLString;
- (id)openingTagString;

@end
