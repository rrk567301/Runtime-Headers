@interface NSConstantString : NSSimpleCString

- (const char *)_fastCStringContents:(BOOL)a0;
- (BOOL)isEqualToString:(id)a0;
- (unsigned long long)fastestEncoding;
- (BOOL)_tryRetain;
- (id)autorelease;
- (unsigned long long)smallestEncoding;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (const char *)_fastUTF8StringContents:(BOOL)a0 utf8Length:(unsigned long long *)a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)cStringLength;
- (const char *)lossyCString;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (id)copy;
- (unsigned long long)length;
- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (const char *)cString;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)canBeConvertedToEncoding:(unsigned long long)a0;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1;

@end
