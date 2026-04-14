@class NSMutableAttributedString;

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString {
    NSMutableAttributedString *mutableAttributedString;
}

- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (unsigned long long)length;
- (id)initWithMutableAttributedString:(id)a0;

@end
