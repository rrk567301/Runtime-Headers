@class NSRegularExpression;

@interface NSExtendedRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {
    NSRegularExpression *_regularExpression;
    struct _NSRange { unsigned long long location; unsigned long long length; } _ranges[7];
}

- (BOOL)_adjustRangesWithOffset:(long long)a0;
- (id)regularExpression;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfRanges;
- (id)initWithRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1 regularExpression:(id)a2;
- (id)initWithRangeArray:(id)a0 regularExpression:(id)a1;
- (id)rangeArray;
- (void)dealloc;

@end
