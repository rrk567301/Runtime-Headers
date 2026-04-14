@class NSDictionary;

@interface CRCHPatternNetwork : NSObject {
    void *_network;
    NSDictionary *_symbols;
    NSDictionary *_startEdges;
    NSDictionary *_startCursorForContentTypes;
}

+ (id)patternToSymbolMap;
+ (id)cursorByAdvancingWithString:(id)a0 fromCursor:(id)a1 inNetwork:(id)a2;
+ (BOOL)isFinalCursor:(id)a0 inNetwork:(id)a1;
+ (id)rootCursorForContentType:(int)a0 inNetwork:(id)a1;
+ (id)kDefaultPatternsPlusUrlsAndEmails;
+ (id)kDefaultPatterns;
+ (id)kEmailPatterns;
+ (id)kUrlPatterns;
+ (id)cursorByAdvancingWithSymbol:(id)a0 fromCursor:(id)a1 inNetwork:(id)a2;

- (void)dealloc;
- (id)initWithFile:(id)a0;
- (id)advanceCursor:(id)a0 withSymbol:(unsigned long long)a1;

@end
