@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)whitespaceCharacterSet;
+ (id)newlineCharacterSet;
+ (id)illegalCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)controlCharacterSet;
+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)characterSetWithCharactersInString:(id)a0;
+ (id)symbolCharacterSet;
+ (id)punctuationCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)letterCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)characterSetWithContentsOfFile:(id)a0;
+ (id)characterSetWithBitmapRepresentation:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addCharactersInString:(id)a0;
- (void)removeCharactersInString:(id)a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)invert;
- (BOOL)isMutable;

@end
