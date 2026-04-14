@interface __NSCFString : NSMutableString

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)appendFormat:(id)a0;
- (const char *)UTF8String;
- (BOOL)isEqualToString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)retain;
- (BOOL)_isDeallocating;
- (void)appendString:(id)a0;
- (BOOL)_isCString;
- (BOOL)_tryRetain;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (unsigned long long)hash;
- (unsigned long long)fastestEncoding;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)appendCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (const char *)_fastCStringContents:(BOOL)a0;
- (unsigned long long)replaceOccurrencesOfString:(id)a0 withString:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (unsigned long long)cStringLength;
- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (id)copy;
- (const char *)cString;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (const unsigned short *)_fastCharacterContents;
- (oneway void)release;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setString:(id)a0;
- (unsigned long long)smallestEncoding;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 zone:(struct _NSZone { } *)a1;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isNSString__;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (BOOL)getCString:(char *)a0 maxLength:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (void)getLineStart:(unsigned long long *)a0 end:(unsigned long long *)a1 contentsEnd:(unsigned long long *)a2 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (BOOL)hasPrefix:(id)a0;
- (BOOL)hasSuffix:(id)a0;

@end
