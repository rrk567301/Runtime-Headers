@interface NSTaggedPointerString : NSString

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (void)_setAsTaggedStringClass;

- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)retain;
- (unsigned long long)smallestEncoding;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)hash;
- (const char *)_fastCStringContents:(BOOL)a0;
- (oneway void)release;
- (const char *)UTF8String;
- (unsigned long long)fastestEncoding;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 locale:(id)a3;
- (unsigned long long)retainCount;
- (BOOL)getBytes:(void *)a0 maxLength:(unsigned long long)a1 usedLength:(unsigned long long *)a2 encoding:(unsigned long long)a3 options:(unsigned long long)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 remainingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a6;
- (BOOL)isEqualToString:(id)a0;
- (unsigned long long)length;
- (BOOL)_isCString;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (BOOL)isEqual:(id)a0;
- (const unsigned short *)_fastCharacterContents;
- (BOOL)isNSString__;
- (BOOL)_getCString:(char *)a0 maxLength:(unsigned long long)a1 encoding:(unsigned int)a2;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (id)lowercaseStringWithLocale:(id)a0;
- (id)uppercaseStringWithLocale:(id)a0;

@end
