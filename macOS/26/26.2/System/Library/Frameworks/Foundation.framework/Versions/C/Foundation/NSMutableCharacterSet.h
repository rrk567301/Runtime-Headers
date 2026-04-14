@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)characterSetWithBitmapRepresentation:(id)a0;
+ (id)punctuationCharacterSet;
+ (id)characterSetWithContentsOfFile:(id)a0;
+ (id)letterCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)controlCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)whitespaceCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)symbolCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)newlineCharacterSet;
+ (id)characterSetWithCharactersInString:(id)a0;
+ (id)decomposableCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)illegalCharacterSet;

- (void)removeCharactersInString:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isMutable;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)addCharactersInString:(id)a0;
- (void)invert;
- (id)init;
- (void)formUnionWithCharacterSet:(id)a0;

@end
