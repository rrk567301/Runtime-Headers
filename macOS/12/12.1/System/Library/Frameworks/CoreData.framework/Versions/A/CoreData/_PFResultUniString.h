@interface _PFResultUniString : _PFResultString {
    unsigned int _length;
}

+ (void)initialize;
+ (unsigned long long)bufferOffset;
+ (struct __CFAllocator { } *)cfDeallocator;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (const char *)UTF8String;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)isEqualToString:(id)a0;
- (BOOL)_isCString;
- (unsigned long long)cStringLength;
- (void)getCharacters:(unsigned short *)a0;
- (void)getCString:(char *)a0;

@end
