@interface _PFEncodedString : _PFAbstractString {
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
}

- (char)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (char)_tryRetain;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (const char *)UTF8String;
- (unsigned long long)length;
- (char)_isCString;
- (unsigned long long)cStringLength;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (char)isEqualToString:(id)a0;
- (void)getCharacters:(unsigned short *)a0;
- (void)getCString:(char *)a0;

@end
