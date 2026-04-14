@class NSDictionary;

@interface CHPatternNetwork : NSObject {
    void *_network;
    NSDictionary *_symbols;
    NSDictionary *_startNodes;
    NSDictionary *_startCursorForContentTypes;
}

+ (id)contentTypesToPatternsMapping;
+ (id)patternToSymbolMap;
+ (id)rootCursorForContentType:(int)a0 inNetwork:(id)a1 forFirstSegmentGroup:(BOOL)a2;
+ (id)rootCursorForPatternType:(long long)a0 inNetwork:(id)a1 forFirstSegmentGroup:(BOOL)a2;
+ (id)newCursorByAdvancingWithString:(id)a0 fromCursor:(id)a1 inNetwork:(id)a2;
+ (id)newCursorByAdvancingWithSymbol:(unsigned long long)a0 fromCursor:(id)a1 inNetwork:(id)a2;
+ (BOOL)isString:(id)a0 fullPattern:(long long)a1 inNetwork:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFile:(id)a0;
- (unsigned long long)stateTypeForNodeIndex:(unsigned long long)a0;
- (id)newCursorByAdvancingCursor:(id)a0 withSymbol:(unsigned long long)a1;

@end
