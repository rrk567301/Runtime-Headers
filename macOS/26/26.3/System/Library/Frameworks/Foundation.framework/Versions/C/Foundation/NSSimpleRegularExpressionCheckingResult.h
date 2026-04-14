@class NSRegularExpression;

@interface NSSimpleRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {
    NSRegularExpression *_regularExpression;
    struct _NSRange { unsigned long long location; unsigned long long length; } _ranges[3];
}

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1 regularExpression:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;
- (id)initWithRangeArray:(id)a0 regularExpression:(id)a1;
- (id)regularExpression;
- (BOOL)_adjustRangesWithOffset:(long long)a0;
- (id)rangeArray;
- (unsigned long long)numberOfRanges;
- (void)dealloc;

@end
