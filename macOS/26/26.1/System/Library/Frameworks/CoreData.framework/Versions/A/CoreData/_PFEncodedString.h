@interface _PFEncodedString : _PFAbstractString {
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
}

- (id)copy;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)retain;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)hash;
- (oneway void)release;
- (const char *)UTF8String;
- (unsigned long long)retainCount;
- (void)getCString:(char *)a0;
- (BOOL)isEqualToString:(id)a0;
- (void)getCharacters:(unsigned short *)a0;
- (BOOL)_tryRetain;
- (unsigned long long)length;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (BOOL)_isCString;
- (unsigned long long)cStringLength;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
