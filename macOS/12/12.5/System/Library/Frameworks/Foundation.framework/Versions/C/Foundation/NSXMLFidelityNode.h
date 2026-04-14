@class NSString, NSMutableArray;

@interface NSXMLFidelityNode : NSXMLNode {
    unsigned long long _fidelity;
    NSString *_whitespace;
    NSMutableArray *_ranges;
    NSMutableArray *_names;
}

+ (void)setObjectValuePreservingEntitiesForNode:(id)a0 string:(id)a1;
+ (id)stringValueSubstitutingEntitiesForNode:(id)a0 ranges:(id)a1 names:(id)a2 objectValue:(id)a3;
+ (unsigned short)charRefToUnicode:(const char *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)stringValue;
- (id)objectValue;
- (void)_XMLStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (id)initWithKind:(unsigned long long)a0;
- (void)setStringValue:(id)a0 resolvingEntities:(BOOL)a1;
- (BOOL)isCDATA;
- (void)setFidelity:(unsigned long long)a0;
- (void)setWhitespace:(id)a0;
- (unsigned long long)fidelity;
- (id)_XMLStringWithCharactersOnly;
- (void)setRanges:(id)a0;
- (void)setNames:(id)a0;
- (void)addEntity:(id)a0 index:(unsigned long long)a1;
- (id)whitespace;

@end
