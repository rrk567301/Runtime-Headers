@class NSAttributedString;

@interface IMKSecureAttributedString : NSAttributedString <NSSecureCoding> {
    NSAttributedString *proxiedString;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)initWithAttributedString:(id)a0;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)dealloc;
- (Class)classForCoder;
- (id)string;
- (void)encodeWithCoder:(id)a0;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithString:(id)a0;
- (BOOL)isEqualToAttributedString:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)length;
- (id)initWithCleanAttributedString:(id)a0;

@end
