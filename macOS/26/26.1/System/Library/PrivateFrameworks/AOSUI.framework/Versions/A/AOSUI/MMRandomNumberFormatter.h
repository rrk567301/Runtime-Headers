@interface MMRandomNumberFormatter : NSFormatter

@property long long maximumLength;

- (BOOL)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (void)encodeWithCoder:(id)a0;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)stringForObjectValue:(id)a0;
- (id)init;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;

@end
