@interface _PFEncodedString : _PFAbstractString {
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
}

- (id)copy;
- (BOOL)isEqualToString:(id)a0;
- (unsigned long long)length;
- (unsigned long long)retainCount;
- (id)retain;
- (void)getCharacters:(unsigned short *)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)cStringLength;
- (id)init;
- (BOOL)_isCString;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)getCString:(char *)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (const char *)UTF8String;
- (unsigned long long)hash;
- (oneway void)release;

@end
