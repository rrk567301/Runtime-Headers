@class NSLocale;

@interface MKDistanceFormatter : NSFormatter

@property (copy) NSLocale *locale;
@property unsigned long long units;
@property unsigned long long unitStyle;

- (BOOL)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringForObjectValue:(id)a0;
- (id)init;
- (BOOL)_useMetric;
- (double)distanceFromString:(id)a0;
- (id)stringFromDistance:(double)a0;

@end
