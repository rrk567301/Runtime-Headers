@class NSAttributeDictionary;

@interface _NSCachedAttributedString : NSMutableAttributedString {
    id _contents;
    NSAttributeDictionary *_baseAttributes;
    long long _length;
    unsigned long long _hashValue;
    struct { id x0; long long x1; } *_runs;
    long long _numRuns;
    long long _allocedRunsSize;
    long long _numHits;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)finalize;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)cache;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithAttributedString:(id)a0;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (id)string;
- (id)copyCachedInstance;
- (BOOL)hasColorGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)init;
- (BOOL)_baselineMode;
- (BOOL)_isStringDrawingTextStorage;
- (id)initWithString:(id)a0;
- (oneway void)release;
- (unsigned long long)length;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
