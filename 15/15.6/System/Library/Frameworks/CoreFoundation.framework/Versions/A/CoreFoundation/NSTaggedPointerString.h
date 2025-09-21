@interface NSTaggedPointerString : NSString

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)_setAsTaggedStringClass;
+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (const char *)UTF8String;
- (const char *)_fastCStringContents:(char)a0;
- (char)getBytes:(void *)a0 maxLength:(unsigned long long)a1 usedLength:(unsigned long long *)a2 encoding:(unsigned long long)a3 options:(unsigned long long)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 remainingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a6;
- (char)isNSString__;
- (unsigned long long)length;
- (char)_getCString:(char *)a0 maxLength:(unsigned long long)a1 encoding:(unsigned int)a2;
- (unsigned long long)fastestEncoding;
- (const unsigned short *)_fastCharacterContents;
- (char)_isCString;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 locale:(id)a3;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (char)isEqualToString:(id)a0;
- (id)lowercaseStringWithLocale:(id)a0;
- (unsigned long long)smallestEncoding;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)uppercaseStringWithLocale:(id)a0;

@end
