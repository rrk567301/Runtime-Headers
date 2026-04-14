@class NSRegularExpression;

@interface NSExtendedRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {
    NSRegularExpression *_regularExpression;
    struct _NSRange { unsigned long long location; unsigned long long length; } _ranges[7];
}

- (void)dealloc;
- (id)initWithRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1 regularExpression:(id)a2;
- (BOOL)_adjustRangesWithOffset:(long long)a0;
- (id)regularExpression;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithRangeArray:(id)a0 regularExpression:(id)a1;
- (unsigned long long)numberOfRanges;
- (id)rangeArray;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;

@end
