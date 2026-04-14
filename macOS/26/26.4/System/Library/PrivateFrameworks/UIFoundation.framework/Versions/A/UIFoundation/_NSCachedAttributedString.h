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

- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)finalize;
- (BOOL)_tryRetain;
- (id)initWithString:(id)a0;
- (void)cache;
- (id)initWithAttributedString:(id)a0;
- (id)copyCachedInstance;
- (BOOL)_isDeallocating;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)_isStringDrawingTextStorage;
- (BOOL)isEqual:(id)a0;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)length;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)_baselineMode;
- (id)string;
- (BOOL)hasColorGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (oneway void)release;
- (void)dealloc;

@end
