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

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (void)finalize;
- (id)copyCachedInstance;
- (unsigned long long)length;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)cache;
- (id)init;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (BOOL)_baselineMode;
- (BOOL)_isStringDrawingTextStorage;
- (id)initWithAttributedString:(id)a0;
- (BOOL)_tryRetain;
- (BOOL)hasColorGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)_isDeallocating;
- (id)initWithString:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)string;
- (unsigned long long)hash;
- (oneway void)release;

@end
