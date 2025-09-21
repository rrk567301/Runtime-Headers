@class NSArray;

@interface NSGrammarCheckingResult : NSTextCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSArray *_details;
}

+ (char)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (char)_adjustRangesWithOffset:(long long)a0;
- (id)grammarDetails;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 details:(id)a1;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (unsigned long long)resultType;

@end
