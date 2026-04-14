@interface NSIndirectTaggedPointerString : NSString

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)newIndirectTaggedNSStringWithConstantNullTerminatedASCIIBytes_:(const char *)a0 length_:(unsigned long long)a1;

- (const char *)UTF8String;
- (BOOL)isEqualToString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)retain;
- (unsigned long long)hash;
- (unsigned long long)fastestEncoding;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (id)autorelease;
- (const char *)_fastCStringContents:(BOOL)a0;
- (id)copy;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 locale:(id)a3;
- (BOOL)getBytes:(void *)a0 maxLength:(unsigned long long)a1 usedLength:(unsigned long long *)a2 encoding:(unsigned long long)a3 options:(unsigned long long)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 remainingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a6;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (const unsigned short *)_fastCharacterContents;
- (oneway void)release;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)smallestEncoding;
- (BOOL)isNSString__;
- (BOOL)_getCString:(char *)a0 maxLength:(unsigned long long)a1 encoding:(unsigned int)a2;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;

@end
