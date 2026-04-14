@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)capitalizedLetterCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)a0;
+ (id)characterSetWithContentsOfFile:(id)a0;
+ (id)symbolCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)illegalCharacterSet;
+ (id)characterSetWithCharactersInString:(id)a0;
+ (id)controlCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)newlineCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)punctuationCharacterSet;
+ (id)letterCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)whitespaceCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (void)invert;
- (BOOL)isMutable;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeCharactersInString:(id)a0;
- (void)addCharactersInString:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)formIntersectionWithCharacterSet:(id)a0;

@end
