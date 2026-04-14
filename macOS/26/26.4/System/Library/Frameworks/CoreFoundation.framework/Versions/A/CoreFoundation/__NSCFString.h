@interface __NSCFString : NSMutableString

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (const char *)_fastCStringContents:(BOOL)a0;
- (BOOL)isEqualToString:(id)a0;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)fastestEncoding;
- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (void)appendString:(id)a0;
- (BOOL)hasSuffix:(id)a0;
- (BOOL)_isCString;
- (BOOL)_tryRetain;
- (void)appendFormat:(id)a0;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 zone:(struct _NSZone { } *)a1;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (unsigned long long)smallestEncoding;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (const char *)UTF8String;
- (const char *)_fastUTF8StringContents:(BOOL)a0 utf8Length:(unsigned long long *)a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)cStringLength;
- (void)setString:(id)a0;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasPrefix:(id)a0;
- (void)appendCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (unsigned long long)replaceOccurrencesOfString:(id)a0 withString:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (BOOL)isNSString__;
- (id)copy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (id)retain;
- (const unsigned short *)_fastCharacterContents;
- (unsigned long long)hash;
- (void)getLineStart:(unsigned long long *)a0 end:(unsigned long long *)a1 contentsEnd:(unsigned long long *)a2 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (oneway void)release;
- (Class)classForCoder;
- (BOOL)getCString:(char *)a0 maxLength:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (unsigned long long)retainCount;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (const char *)cString;

@end
