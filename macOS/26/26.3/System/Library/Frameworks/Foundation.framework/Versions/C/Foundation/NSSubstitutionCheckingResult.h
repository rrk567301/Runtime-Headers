@class NSString;

@interface NSSubstitutionCheckingResult : NSTextCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSString *_replacementString;
}

+ (BOOL)supportsSecureCoding;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)description;
- (BOOL)_adjustRangesWithOffset:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)replacementString;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1;

@end
