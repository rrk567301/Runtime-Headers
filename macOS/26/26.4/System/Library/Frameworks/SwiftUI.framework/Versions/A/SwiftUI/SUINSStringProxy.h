@class SUINSStringImplementation;

@interface SUINSStringProxy : NSString {
    SUINSStringImplementation *base;
}

- (const char *)_fastCStringContents:(BOOL)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (void).cxx_destruct;
- (const unsigned short *)_fastCharacterContents;
- (id)initWithImplementation:(id)a0;

@end
