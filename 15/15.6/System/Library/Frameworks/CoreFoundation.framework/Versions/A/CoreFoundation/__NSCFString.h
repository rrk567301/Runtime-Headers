@interface __NSCFString : NSMutableString

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (char)_isDeallocating;
- (oneway void)release;
- (char)_tryRetain;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (const char *)UTF8String;
- (const char *)_fastCStringContents:(char)a0;
- (char)isNSString__;
- (unsigned long long)length;
- (unsigned long long)fastestEncoding;
- (const char *)cString;
- (const unsigned short *)_fastCharacterContents;
- (char)_isCString;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 zone:(struct _NSZone { } *)a1;
- (void)appendCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (void)appendFormat:(id)a0;
- (void)appendString:(id)a0;
- (unsigned long long)cStringLength;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (Class)classForCoder;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (char)getCString:(char *)a0 maxLength:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)getLineStart:(unsigned long long *)a0 end:(unsigned long long *)a1 contentsEnd:(unsigned long long *)a2 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (char)hasPrefix:(id)a0;
- (char)hasSuffix:(id)a0;
- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (char)isEqualToString:(id)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (unsigned long long)replaceOccurrencesOfString:(id)a0 withString:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setString:(id)a0;
- (unsigned long long)smallestEncoding;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
