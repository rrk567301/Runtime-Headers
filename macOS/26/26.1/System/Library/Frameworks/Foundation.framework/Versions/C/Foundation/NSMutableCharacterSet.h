@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)decimalDigitCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)controlCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)decomposableCharacterSet;
+ (id)punctuationCharacterSet;
+ (id)illegalCharacterSet;
+ (id)characterSetWithContentsOfFile:(id)a0;
+ (id)characterSetWithCharactersInString:(id)a0;
+ (id)whitespaceCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)letterCharacterSet;
+ (id)symbolCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)a0;
+ (id)newlineCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)lowercaseLetterCharacterSet;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isMutable;
- (void)removeCharactersInString:(id)a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)addCharactersInString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invert;
- (void)formUnionWithCharacterSet:(id)a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (id)init;

@end
