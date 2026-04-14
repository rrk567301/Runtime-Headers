@interface NSConstantString : NSSimpleCString

- (id)copy;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)retain;
- (unsigned long long)smallestEncoding;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)hash;
- (const char *)_fastCStringContents:(BOOL)a0;
- (oneway void)release;
- (unsigned long long)fastestEncoding;
- (unsigned long long)retainCount;
- (BOOL)isEqualToString:(id)a0;
- (BOOL)_tryRetain;
- (const char *)lossyCString;
- (unsigned long long)length;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (unsigned long long)cStringLength;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (BOOL)isEqual:(id)a0;
- (const char *)cString;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)canBeConvertedToEncoding:(unsigned long long)a0;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1;

@end
