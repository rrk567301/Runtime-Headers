@interface _PFEncodedString : _PFAbstractString {
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
}

- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (const char *)UTF8String;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_isDeallocating;
- (unsigned long long)cStringLength;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isCString;
- (BOOL)_tryRetain;
- (BOOL)isEqualToString:(id)a0;
- (id)copy;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (void)getCString:(char *)a0;
- (oneway void)release;
- (unsigned long long)length;
- (void)getCharacters:(unsigned short *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
