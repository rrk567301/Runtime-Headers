@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)controlCharacterSet;
+ (id)whitespaceCharacterSet;
+ (id)newlineCharacterSet;
+ (id)illegalCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)characterSetWithCharactersInString:(id)a0;
+ (id)punctuationCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)symbolCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)letterCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)characterSetWithContentsOfFile:(id)a0;
+ (id)characterSetWithBitmapRepresentation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addCharactersInString:(id)a0;
- (void)removeCharactersInString:(id)a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)invert;
- (id)initWithCoder:(id)a0;
- (BOOL)isMutable;

@end
