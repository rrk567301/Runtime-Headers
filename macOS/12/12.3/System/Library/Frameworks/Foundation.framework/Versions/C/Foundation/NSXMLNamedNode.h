@class NSString;

@interface NSXMLNamedNode : NSXMLNode {
    NSString *_name;
    NSString *_URI;
    long long _prefixIndex;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)name;
- (void)setName:(id)a0;
- (void)_XMLStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (id)initWithKind:(unsigned long long)a0;
- (void)setObjectValue:(id)a0;
- (id)prefix;
- (id)URI;
- (void)setURI:(id)a0;
- (id)canonicalXMLStringPreservingComments:(BOOL)a0;
- (id)XPath;
- (void)_resolveName;
- (long long)_prefixIndex;
- (BOOL)_nameIsEqualToNameOfNode:(id)a0;
- (id)initWithKind:(unsigned long long)a0 name:(id)a1 stringValue:(id)a2;
- (BOOL)_setPrefix:(id)a0;
- (long long)_caseSensitiveCompare:(id)a0;
- (id)localName;
- (void)_setLocalName:(id)a0;
- (id)initWithKind:(unsigned long long)a0 name:(id)a1 stringValue:(id)a2 URI:(id)a3;
- (id)initWithKind:(unsigned long long)a0 localName:(id)a1 stringValue:(id)a2 URI:(id)a3;

@end
