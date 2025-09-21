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

- (char)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (char)_tryRetain;
- (void)finalize;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (unsigned long long)length;
- (id)string;
- (id)initWithString:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)initWithAttributedString:(id)a0;
- (char)_baselineMode;
- (char)_isStringDrawingTextStorage;
- (void)cache;
- (id)copyCachedInstance;
- (char)hasColorGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
