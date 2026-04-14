@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)characterSetWithContentsOfFile:(id)a0;
+ (id)illegalCharacterSet;
+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)whitespaceCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)controlCharacterSet;
+ (id)characterSetWithCharactersInString:(id)a0;
+ (id)decimalDigitCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)a0;
+ (id)capitalizedLetterCharacterSet;
+ (id)letterCharacterSet;
+ (id)symbolCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)newlineCharacterSet;
+ (id)punctuationCharacterSet;

- (BOOL)isMutable;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)invert;
- (void)removeCharactersInString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCharactersInString:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
