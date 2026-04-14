@class NSRegularExpression, NSArray;

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult

@property (readonly) NSRegularExpression *regularExpression;
@property (readonly) NSArray *rangeArray;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)resultType;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1 regularExpression:(id)a2;
- (id)initWithRangeArray:(id)a0 regularExpression:(id)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;

@end
