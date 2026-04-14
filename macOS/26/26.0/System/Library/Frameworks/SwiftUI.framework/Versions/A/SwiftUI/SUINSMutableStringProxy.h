@class SUINSMutableStringImplementation;

@interface SUINSMutableStringProxy : NSMutableString {
    SUINSMutableStringImplementation *base;
}

- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (void).cxx_destruct;
- (id)initWithImplementation:(id)a0;

@end
