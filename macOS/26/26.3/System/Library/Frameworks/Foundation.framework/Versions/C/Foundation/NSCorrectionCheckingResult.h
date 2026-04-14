@class NSArray;

@interface NSCorrectionCheckingResult : NSSubstitutionCheckingResult {
    NSArray *_alternativeStrings;
}

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)resultType;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)alternativeStrings;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 alternativeStrings:(id)a2;

@end
