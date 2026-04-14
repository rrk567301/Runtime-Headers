@interface _PFEncodedString : _PFAbstractString {
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
}

- (void)getCString:(char *)a0;
- (const char *)UTF8String;
- (BOOL)isEqualToString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)retain;
- (BOOL)_isDeallocating;
- (void)getCharacters:(unsigned short *)a0;
- (BOOL)_isCString;
- (BOOL)_tryRetain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (unsigned long long)cStringLength;
- (id)copy;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (oneway void)release;
- (id)init;
- (void)dealloc;

@end
