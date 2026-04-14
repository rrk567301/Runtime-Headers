@class NSString;

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSString *_phoneNumber;
    id _underlyingResult;
}

@property (readonly) void *underlyingResult;

+ (BOOL)supportsSecureCoding;

- (id)phoneNumber;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_adjustRangesWithOffset:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (unsigned long long)resultType;
- (id)description;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 phoneNumber:(id)a1;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 phoneNumber:(id)a1 underlyingResult:(void *)a2;

@end
