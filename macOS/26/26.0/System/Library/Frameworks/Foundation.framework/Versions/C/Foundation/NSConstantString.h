@interface NSConstantString : NSSimpleCString

- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)autorelease;
- (const char *)lossyCString;
- (const char *)cString;
- (BOOL)_isDeallocating;
- (unsigned long long)cStringLength;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_tryRetain;
- (BOOL)isEqualToString:(id)a0;
- (id)copy;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)fastestEncoding;
- (unsigned long long)smallestEncoding;
- (oneway void)release;
- (const char *)_fastCStringContents:(BOOL)a0;
- (unsigned long long)length;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)canBeConvertedToEncoding:(unsigned long long)a0;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1;

@end
