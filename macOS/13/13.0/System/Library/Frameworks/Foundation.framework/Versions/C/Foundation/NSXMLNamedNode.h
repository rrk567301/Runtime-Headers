@class NSString;

@interface NSXMLNamedNode : NSXMLNode {
    NSString *_name;
    NSString *_URI;
    long long _prefixIndex;
}

- (void)dealloc;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (void)_XMLStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (id)canonicalXMLStringPreservingComments:(BOOL)a0;
- (void)setObjectValue:(id)a0;
- (id)initWithKind:(unsigned long long)a0;
- (id)XPath;
- (void)setURI:(id)a0;
- (id)URI;
- (long long)_caseSensitiveCompare:(id)a0;
- (void)_setLocalName:(id)a0;
- (BOOL)_nameIsEqualToNameOfNode:(id)a0;
- (void)_resolveName;
- (id)localName;
- (id)prefix;
- (BOOL)_setPrefix:(id)a0;
- (long long)_prefixIndex;
- (id)initWithKind:(unsigned long long)a0 name:(id)a1 stringValue:(id)a2;
- (id)initWithKind:(unsigned long long)a0 localName:(id)a1 stringValue:(id)a2 URI:(id)a3;
- (id)initWithKind:(unsigned long long)a0 name:(id)a1 stringValue:(id)a2 URI:(id)a3;

@end
