@class NSData;

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, copy) NSCharacterSet *URLUserAllowedCharacterSet;
@property (class, readonly, copy) NSCharacterSet *URLPasswordAllowedCharacterSet;
@property (class, readonly, copy) NSCharacterSet *URLHostAllowedCharacterSet;
@property (class, readonly, copy) NSCharacterSet *URLPathAllowedCharacterSet;
@property (class, readonly, copy) NSCharacterSet *URLQueryAllowedCharacterSet;
@property (class, readonly, copy) NSCharacterSet *URLFragmentAllowedCharacterSet;
@property (class, readonly, copy) NSCharacterSet *controlCharacterSet;
@property (class, readonly, copy) NSCharacterSet *whitespaceCharacterSet;
@property (class, readonly, copy) NSCharacterSet *whitespaceAndNewlineCharacterSet;
@property (class, readonly, copy) NSCharacterSet *decimalDigitCharacterSet;
@property (class, readonly, copy) NSCharacterSet *letterCharacterSet;
@property (class, readonly, copy) NSCharacterSet *lowercaseLetterCharacterSet;
@property (class, readonly, copy) NSCharacterSet *uppercaseLetterCharacterSet;
@property (class, readonly, copy) NSCharacterSet *nonBaseCharacterSet;
@property (class, readonly, copy) NSCharacterSet *alphanumericCharacterSet;
@property (class, readonly, copy) NSCharacterSet *decomposableCharacterSet;
@property (class, readonly, copy) NSCharacterSet *illegalCharacterSet;
@property (class, readonly, copy) NSCharacterSet *punctuationCharacterSet;
@property (class, readonly, copy) NSCharacterSet *capitalizedLetterCharacterSet;
@property (class, readonly, copy) NSCharacterSet *symbolCharacterSet;
@property (class, readonly, copy) NSCharacterSet *newlineCharacterSet;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSData *bitmapRepresentation;
@property (readonly, copy) NSCharacterSet *invertedSet;

+ (id)countryCodeEndingSet;
+ (id)eolSet;
+ (void)initialize;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)controlCharacterSet;
+ (id)illegalCharacterSet;
+ (id)newlineCharacterSet;
+ (id)whitespaceCharacterSet;
+ (id)characterSetWithCharactersInString:(id)a0;
+ (id)characterSetWithContentsOfFile:(id)a0;
+ (id)capitalizedLetterCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)a0;
+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)decimalDigitCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)letterCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)punctuationCharacterSet;
+ (id)symbolCharacterSet;
+ (id)uppercaseLetterCharacterSet;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (char)isEmpty;
- (unsigned long long)_cfTypeID;
- (struct __CFCharacterSet { } *)_expandedCFCharacterSet;
- (id)_retainedBitmapRepresentation;
- (char)characterIsMember:(unsigned short)a0;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (char)hasMemberInPlane:(unsigned char)a0;
- (id)initWithCoder:(id)a0;
- (char)isSupersetOfSet:(id)a0;
- (char)longCharacterIsMember:(unsigned int)a0;
- (char)isMutable;
- (void)makeImmutable;
- (id)replacementObjectForPortCoder:(id)a0;

@end
