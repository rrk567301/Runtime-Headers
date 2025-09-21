@class NSDictionary;

@interface CHPatternNetwork : NSObject {
    void *_network;
    NSDictionary *_symbols;
    NSDictionary *_startNodes;
    NSDictionary *_startCursorForContentTypes;
}

+ (char)isString:(id)a0 fullPattern:(long long)a1 inNetwork:(id)a2;
+ (id)newCursorByAdvancingWithString:(id)a0 fromCursor:(id)a1 inNetwork:(id)a2;
+ (id)newCursorByAdvancingWithSymbol:(unsigned long long)a0 fromCursor:(id)a1 inNetwork:(id)a2;
+ (id)rootCursorForContentType:(int)a0 inNetwork:(id)a1 forFirstSegmentGroup:(char)a2;
+ (id)rootCursorForPatternType:(long long)a0 inNetwork:(id)a1 forFirstSegmentGroup:(char)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFile:(id)a0;

@end
