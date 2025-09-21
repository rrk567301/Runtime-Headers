@class NSString, NSCharacterSet;

@interface NSScanner : NSObject <NSCopying>

@property (readonly, copy) NSString *string;
@property unsigned long long scanLocation;
@property (copy) NSCharacterSet *charactersToBeSkipped;
@property char caseSensitive;
@property (retain) id locale;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)scannerWithString:(id)a0;
+ (id)localizedScannerWithString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0;
- (char)scanDouble:(double *)a0;
- (char)isAtEnd;
- (char)_deprecated_scanDecimal:(struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; } *)a0;
- (char)_deprecated_scanDouble:(double *)a0;
- (char)_deprecated_scanFloat:(float *)a0;
- (char)_deprecated_scanHexInt32:(unsigned int *)a0;
- (char)_deprecated_scanInt32:(int *)a0;
- (unsigned long long)_deprecated_scanLocation;
- (char)_deprecated_scanString:(id)a0 intoString:(id *)a1;
- (char)_deprecated_scanUpToCharactersFromSet:(id)a0 intoString:(id *)a1;
- (void)_deprecated_setScanLocation:(unsigned long long)a0;
- (id)_invertedSkipSet;
- (id)_remainingString;
- (char)_scanDecimal:(unsigned long long)a0 into:(long long *)a1;
- (char)scanCharactersFromSet:(id)a0 intoString:(id *)a1;
- (char)scanDecimal:(struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; } *)a0;
- (char)scanFloat:(float *)a0;
- (char)scanHexDouble:(double *)a0;
- (char)scanHexFloat:(float *)a0;
- (char)scanHexInt:(unsigned int *)a0;
- (char)scanHexLongLong:(unsigned long long *)a0;
- (char)scanInt:(int *)a0;
- (char)scanInteger:(long long *)a0;
- (char)scanLongLong:(long long *)a0;
- (char)scanString:(id)a0 intoString:(id *)a1;
- (char)scanUnsignedInteger:(unsigned long long *)a0;
- (char)scanUnsignedLongLong:(unsigned long long *)a0;
- (char)scanUpToCharactersFromSet:(id)a0 intoString:(id *)a1;
- (char)scanUpToString:(id)a0 intoString:(id *)a1;

@end
