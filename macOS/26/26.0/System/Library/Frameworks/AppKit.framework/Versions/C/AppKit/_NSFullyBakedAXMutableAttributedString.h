@class NSMutableAttributedString;

@interface _NSFullyBakedAXMutableAttributedString : NSMutableAttributedString {
    NSMutableAttributedString *contents;
}

- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithAttributedString:(id)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (void)dealloc;
- (id)string;
- (id)init;
- (id)initWithString:(id)a0;

@end
