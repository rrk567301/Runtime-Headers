@class NSMutableAttributedString;

@interface _NSFullyBakedAXMutableAttributedString : NSMutableAttributedString {
    NSMutableAttributedString *contents;
}

- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (id)init;
- (id)initWithAttributedString:(id)a0;
- (id)initWithString:(id)a0;
- (void)dealloc;
- (id)string;

@end
