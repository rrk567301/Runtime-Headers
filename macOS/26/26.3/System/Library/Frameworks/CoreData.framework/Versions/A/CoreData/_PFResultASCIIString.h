@interface _PFResultASCIIString : _PFResultString {
    unsigned int _length;
}

+ (void)initialize;
+ (unsigned long long)bufferOffset;

- (BOOL)isEqualToString:(id)a0;
- (unsigned long long)length;
- (void)getCharacters:(unsigned short *)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)cStringLength;
- (BOOL)_isCString;
- (BOOL)isEqual:(id)a0;
- (void)getCString:(char *)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (const char *)UTF8String;
- (unsigned long long)hash;

@end
