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

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringValue;
- (void)_XMLStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (id)initWithKind:(unsigned long long)a0;
- (id)objectValue;
- (void)setStringValue:(id)a0 resolvingEntities:(BOOL)a1;
- (void)setFidelity:(unsigned long long)a0;
- (unsigned long long)fidelity;
- (void)setWhitespace:(id)a0;
- (id)whitespace;
- (void)addEntity:(id)a0 index:(unsigned long long)a1;
- (id)_XMLStringWithCharactersOnly;
- (void)setRanges:(id)a0;
- (void)setNames:(id)a0;
- (BOOL)isCDATA;

@end
