@interface __NSCFString : NSMutableString

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)copy;
- (BOOL)isEqualToString:(id)a0;
- (unsigned long long)length;
- (unsigned long long)retainCount;
- (const char *)cString;
- (id)retain;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)smallestEncoding;
- (unsigned long long)cStringLength;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_isCString;
- (void)appendFormat:(id)a0;
- (unsigned long long)fastestEncoding;
- (BOOL)_tryRetain;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)appendString:(id)a0;
- (Class)classForCoder;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_isDeallocating;
- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)replaceOccurrencesOfString:(id)a0 withString:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 zone:(struct _NSZone { } *)a1;
- (BOOL)isEqual:(id)a0;
- (void)appendCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (const char *)UTF8String;
- (unsigned long long)hash;
- (void)setString:(id)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (const unsigned short *)_fastCharacterContents;
- (oneway void)release;
- (BOOL)isNSString__;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (BOOL)getCString:(char *)a0 maxLength:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (void)getLineStart:(unsigned long long *)a0 end:(unsigned long long *)a1 contentsEnd:(unsigned long long *)a2 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (BOOL)hasPrefix:(id)a0;
- (BOOL)hasSuffix:(id)a0;

@end
