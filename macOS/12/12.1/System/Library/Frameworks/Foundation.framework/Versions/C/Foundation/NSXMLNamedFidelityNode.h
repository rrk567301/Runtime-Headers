@class NSString, NSMutableArray;

@interface NSXMLNamedFidelityNode : NSXMLNamedNode {
    unsigned long long _fidelity;
    NSString *_whitespace;
    NSMutableArray *_ranges;
    NSMutableArray *_names;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)stringValue;
- (id)objectValue;
- (void)_XMLStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (id)initWithKind:(unsigned long long)a0;
- (void)setStringValue:(id)a0 resolvingEntities:(BOOL)a1;
- (BOOL)_setPrefix:(id)a0;
- (void)setFidelity:(unsigned long long)a0;
- (void)setWhitespace:(id)a0;
- (unsigned long long)fidelity;
- (void)setRanges:(id)a0;
- (void)setNames:(id)a0;
- (void)addEntity:(id)a0 index:(unsigned long long)a1;

@end
