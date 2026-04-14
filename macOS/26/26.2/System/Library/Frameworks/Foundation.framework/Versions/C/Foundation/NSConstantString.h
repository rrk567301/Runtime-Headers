@interface NSConstantString : NSSimpleCString

- (BOOL)isEqualToString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)hash;
- (unsigned long long)fastestEncoding;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (id)autorelease;
- (const char *)_fastCStringContents:(BOOL)a0;
- (unsigned long long)cStringLength;
- (const char *)lossyCString;
- (id)copy;
- (const char *)cString;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (oneway void)release;
- (unsigned long long)smallestEncoding;
- (void)dealloc;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)canBeConvertedToEncoding:(unsigned long long)a0;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1;

@end
