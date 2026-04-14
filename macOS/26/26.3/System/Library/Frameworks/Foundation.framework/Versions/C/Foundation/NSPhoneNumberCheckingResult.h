@class NSString;

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSString *_phoneNumber;
    id _underlyingResult;
}

@property (readonly) void *underlyingResult;

+ (BOOL)supportsSecureCoding;

- (id)phoneNumber;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)description;
- (BOOL)_adjustRangesWithOffset:(long long)a0;
- (unsigned long long)resultType;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 phoneNumber:(id)a1;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 phoneNumber:(id)a1 underlyingResult:(void *)a2;

@end
