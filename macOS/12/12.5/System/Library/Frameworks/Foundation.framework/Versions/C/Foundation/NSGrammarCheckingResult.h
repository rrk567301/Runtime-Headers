@class NSArray;

@interface NSGrammarCheckingResult : NSTextCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSArray *_details;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 details:(id)a1;
- (unsigned long long)resultType;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (BOOL)_adjustRangesWithOffset:(long long)a0;
- (id)grammarDetails;

@end
