@interface NSConstantString : NSSimpleCString

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (const char *)_fastCStringContents:(BOOL)a0;
- (const char *)cString;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)isEqualToString:(id)a0;
- (unsigned long long)fastestEncoding;
- (unsigned long long)smallestEncoding;
- (unsigned long long)cStringLength;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)canBeConvertedToEncoding:(unsigned long long)a0;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1;
- (const char *)lossyCString;

@end
