@class NSArray;

@interface _PASProxyConcatenatedString : NSString <NSCopying> {
    NSArray *_components;
    unsigned long long *_startIndices;
    unsigned long long _length;
}

- (unsigned long long)length;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_createSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;

@end
