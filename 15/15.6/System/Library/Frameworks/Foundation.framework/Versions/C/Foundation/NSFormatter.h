@interface NSFormatter : NSObject <NSCopying, NSCoding>

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)_cacheGenerationCount;
- (void)_invalidateCache;
- (char)_mayDecorateAttributedStringForObjectValue:(id)a0;
- (char)_tracksCacheGenerationCount;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (id)editingStringForObjectValue:(id)a0;
- (char)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (char)getObjectValue:(out id *)a0 forString:(id)a1 range:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 error:(out id *)a3;
- (char)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (char)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (id)stringForObjectValue:(id)a0;

@end
