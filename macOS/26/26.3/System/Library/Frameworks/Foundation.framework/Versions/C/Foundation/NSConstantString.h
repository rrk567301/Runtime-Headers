@interface NSConstantString : NSSimpleCString

- (id)copy;
- (BOOL)isEqualToString:(id)a0;
- (unsigned long long)length;
- (unsigned long long)retainCount;
- (id)autorelease;
- (const char *)cString;
- (id)retain;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)smallestEncoding;
- (unsigned long long)cStringLength;
- (unsigned long long)fastestEncoding;
- (BOOL)_tryRetain;
- (const char *)lossyCString;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (const char *)_fastCStringContents:(BOOL)a0;
- (oneway void)release;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)canBeConvertedToEncoding:(unsigned long long)a0;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1;

@end
