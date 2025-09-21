@interface NSCheapMutableString : NSMutableString {
    union { unsigned short *fat; char *thin; } contents;
    struct { unsigned char isFat : 1; unsigned char freeWhenDone : 1; unsigned int refs : 30; } flags;
    unsigned long long numCharacters;
    void *_reserved;
}

- (void)dealloc;
- (char)getBytes:(void *)a0 maxLength:(unsigned long long)a1 usedLength:(unsigned long long *)a2 encoding:(unsigned long long)a3 options:(unsigned long long)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 remainingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a6;
- (unsigned long long)length;
- (unsigned long long)fastestEncoding;
- (const char *)cString;
- (unsigned long long)cStringLength;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (const char *)lossyCString;
- (void)setContentsNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(char)a2 isUnicode:(char)a3;

@end
