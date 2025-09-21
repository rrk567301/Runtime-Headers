@interface NSTaggedPointerString : NSString

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)_setAsTaggedStringClass;

- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (const char *)UTF8String;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)autorelease;
- (BOOL)getBytes:(void *)a0 maxLength:(unsigned long long)a1 usedLength:(unsigned long long *)a2 encoding:(unsigned long long)a3 options:(unsigned long long)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 remainingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a6;
- (const unsigned short *)_fastCharacterContents;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 locale:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isCString;
- (BOOL)isEqualToString:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)fastestEncoding;
- (unsigned long long)smallestEncoding;
- (oneway void)release;
- (const char *)_fastCStringContents:(BOOL)a0;
- (unsigned long long)length;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isNSString__;
- (BOOL)_getCString:(char *)a0 maxLength:(unsigned long long)a1 encoding:(unsigned int)a2;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (id)lowercaseStringWithLocale:(id)a0;
- (id)uppercaseStringWithLocale:(id)a0;

@end
