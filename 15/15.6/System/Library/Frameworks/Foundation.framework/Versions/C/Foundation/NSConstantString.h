@interface NSConstantString : NSSimpleCString

- (char)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (char)_tryRetain;
- (id)autorelease;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (const char *)_fastCStringContents:(char)a0;
- (unsigned long long)length;
- (unsigned long long)fastestEncoding;
- (const char *)cString;
- (unsigned long long)cStringLength;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (char)isEqualToString:(id)a0;
- (unsigned long long)smallestEncoding;
- (char)canBeConvertedToEncoding:(unsigned long long)a0;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1;
- (const char *)lossyCString;

@end
