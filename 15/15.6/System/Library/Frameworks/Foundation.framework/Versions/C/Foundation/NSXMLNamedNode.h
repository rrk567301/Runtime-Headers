@class NSString;

@interface NSXMLNamedNode : NSXMLNode {
    NSString *_name;
    NSString *_URI;
    long long _prefixIndex;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)name;
- (void)setName:(id)a0;
- (void)_XMLStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (void)setURI:(id)a0;
- (id)URI;
- (id)XPath;
- (void)setObjectValue:(id)a0;
- (long long)_caseSensitiveCompare:(id)a0;
- (char)_nameIsEqualToNameOfNode:(id)a0;
- (long long)_prefixIndex;
- (void)_resolveName;
- (void)_setLocalName:(id)a0;
- (char)_setPrefix:(id)a0;
- (id)canonicalXMLStringPreservingComments:(char)a0;
- (id)initWithKind:(unsigned long long)a0;
- (id)initWithKind:(unsigned long long)a0 localName:(id)a1 stringValue:(id)a2 URI:(id)a3;
- (id)initWithKind:(unsigned long long)a0 name:(id)a1 stringValue:(id)a2;
- (id)initWithKind:(unsigned long long)a0 name:(id)a1 stringValue:(id)a2 URI:(id)a3;
- (id)localName;
- (id)prefix;

@end
