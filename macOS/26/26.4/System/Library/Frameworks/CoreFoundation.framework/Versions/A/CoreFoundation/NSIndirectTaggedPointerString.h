@interface NSIndirectTaggedPointerString : NSString

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)newIndirectTaggedNSStringWithConstantNullTerminatedASCIIBytes_:(const char *)a0 length_:(unsigned long long)a1;

- (const char *)_fastCStringContents:(BOOL)a0;
- (BOOL)isEqualToString:(id)a0;
- (unsigned long long)fastestEncoding;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 locale:(id)a3;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (id)autorelease;
- (unsigned long long)smallestEncoding;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (const char *)UTF8String;
- (const char *)_fastUTF8StringContents:(BOOL)a0 utf8Length:(unsigned long long *)a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)getBytes:(void *)a0 maxLength:(unsigned long long)a1 usedLength:(unsigned long long *)a2 encoding:(unsigned long long)a3 options:(unsigned long long)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 remainingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a6;
- (BOOL)isEqual:(id)a0;
- (BOOL)isNSString__;
- (id)copy;
- (unsigned long long)length;
- (id)retain;
- (const unsigned short *)_fastCharacterContents;
- (unsigned long long)hash;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)_getCString:(char *)a0 maxLength:(unsigned long long)a1 encoding:(unsigned int)a2;

@end
