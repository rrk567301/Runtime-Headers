@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)decomposableCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)characterSetWithCharactersInString:(id)a0;
+ (id)letterCharacterSet;
+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)characterSetWithBitmapRepresentation:(id)a0;
+ (id)capitalizedLetterCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)controlCharacterSet;
+ (id)newlineCharacterSet;
+ (id)symbolCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)whitespaceCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)characterSetWithContentsOfFile:(id)a0;
+ (id)illegalCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)punctuationCharacterSet;

- (void)addCharactersInString:(id)a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isMutable;
- (void)invert;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)removeCharactersInString:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
