@interface _PFEncodedString : _PFAbstractString {
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
}

- (BOOL)isEqualToString:(id)a0;
- (BOOL)_isCString;
- (BOOL)_tryRetain;
- (void)getCharacters:(unsigned short *)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (const char *)UTF8String;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)cStringLength;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (void)getCString:(char *)a0;
- (id)copy;
- (unsigned long long)length;
- (id)retain;
- (unsigned long long)hash;
- (id)init;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;

@end
